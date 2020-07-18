"""
pybench_cases.py: Run rybench on a set of pythons and stantements.
select modes by editing this script or using command line arguemtns(in
sys.argv): e.g., run a "C:\python27\python pybench_cases.py" to test just
one specififc version on stmts, "pybench_cases.py -a" to test all pythons 
listed , or a "py -3 pybench_cases.py -a -t" to trace command lines too.
"""
import pybench, sys
pythons = [
    (1, 'C:\python33\python'),
    (0, 'C:\python27\python'),
    (0, 'C:\pypy\pypy-1.9\pypy')
]
stmts = [
    (0,0, "[x ** 2 for x in range(1000)]"),
    (0, 0, "res=[]\nfor x in range(1000):res.append(x**2)"),
    (0,0, "$listif3(map(lambda x: x **2, range(1000)))"),
    (0,0, "list(x**2 for x in range (1000))"),
    (0, 0, "s = 'spam' * 2500\nx = [s[i] for i in range(10000)]"),
    (0,0, "s = '?'\nfor i in range(1000): s+= '?"),
]
tracecmd = '-t' in sys.argv
pythons = pythons if '-a' in sys.argv else None
pybench.runner(stmts, pythons, tracecmd)
#doesnt work
