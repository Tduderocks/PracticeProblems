"""
pybench.py: Test speed of one or more pythons on a set of simple 
code-string benchmarks. a function, to allow stmts to vary. 
This system itself rusn on both 2x and 3x and may spawn both

uses timeit to test either the python running htis script by api 
calls, or a set of pythons by reading spawned command-line outputs
(os.popen) with python's -m flag to find timeit on module seach path.

replaces $listif3 with a list() around generators for 3x and an 
empty string on 2x, so 3x does same work as 2x. in command - line
mode only, must split multiline statements into one sperate quoted argument
per line so all will be run(else might run/time first line only),
and replace all \t in indentation with 4 spaces for uniformity

Caveats: command line mode(only) may fail if test stmt embeds double
quotes, quoted stmt string is incompatible with shell in general, or
command-line exceeds a length limit on platform's shell-use API call
mode or homgrown timer;  doesw not yet support a setup statement: as is,
time of all statements in the test stmt are charged to the total time.
"""
import sys, os, timeit
defnum, defrep=1000, 5
def runner(stmts, pythons=None, tracecmd=False):
    """Main logic: run tests per input lists, caller handles usage modes.
    stmts: [(number?, repeat?, stst-string)], replaces $listif3 in stmt
    pythons: None=this python only, or [(ispy3?, python-ececuatable-path)]
    """
    print(sys.version)
    for (number, repeat, stmt) in stmts:
        number = number or defnum
        repeat = repeat or defrep
        if not pythons:
            ispy3 = sys.version[0] =='3'
            stms = stmt.replace('$listif3', 'list' if ispy3 else '')
            best = min(timeit.repeat(stmt=stmt, number=number, repeat=repeat))
            print('%.4f [%r]' % (best, stmt[:70]))
        else:
            print('-' * 80)
            print('[%r]' % stmt)
            for (ispy3, python) in pythons:
                stmt1 = stmt.replace('$listif3', 'list' if ispy3 else '')
                stmt1 = stmt1.replace('\t', ' ' * 4)
                lines = stmt1.split('\n')
                args = ' '.join('"%s"' % line for line in lines)
                cmd = '%s -m timeit -n %s -r %s %s' % (python, number, repeat, args)
                print(python)
                if tracecmd: print(cmd)
                print('\t' + os.popen(cmd).read().rstrip())