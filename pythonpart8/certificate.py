#!/usr/bin/python
"""
File Certificate.py: a python 2x and 3x script.
Generate a bare-bones class completion cert:printed,
and saved in text and html files displayed in a web brozer.
"""
import time, sys, webbrowser
if sys.version_info[0] ==2:         #2x comp.
    input = raw_input
    import cgi
    htmlscape = cgi.escape
else:
    import html
    htmlescape=html.escape
maxline = 60
browser=True
saveto='Certificate.txt'
template="""
%s
===> Official Certificate <===
Date: %s
This certifies that:
\t%s
has survived the masssive tome:
\t%s
and is now entitles to all privileges therof, including
the right to proceed on to learning how to develop Web
sites, desktop GUIs, scientific models, and assorted apps,
with the possible assistance of follow-up applications
books such as Programming Python (shamless plug intended).

-- Mark Lutz, Instructor
(Note: Certificate void where obtained by skipping ahead.)
%s
"""
for c in 'Congratulations!'.upper():
    print(c, end=' ')
    sys.stdout.flush()
    time.sleep(0.25)
print()
date = time.asctime()
name = input('Enter your name: ').strip() or 'An unknown reader'
sept = '*' * maxline
book = 'Learning Python 5th Edition'
file = open(saveto, 'w')
text = template % (sept, date, name, book, sept)
print(text, file=file)
file.close()
htmlto = saveto.replace('.txt', '.html')
file = open(htmlto, 'w')
tags = text.replace(sept, '<hr>')
tags = tags.replace('===>', '<h1 align=center>')
tags = tags.replace('<===', '</h1>')
tags = tags.split('\n')
tags = ['<p>' if line ==''
            else line for line in tags]
tags = ['<i>%s</i>' % htmlescape(line) if line[:1] == '\t'
            else line for line in tags]
tags = '\n'.join(tags)
link = '<i><a href="http://learning-python.com/books">Book support site</a></i>\n'
foot = '<table\n<td><img src="ora=lp.jpg" hspace=5>\n<td>%s</table>\n' % link
tags = '<html><body bgcolor=beige>' + tags + foot + '</body></html>'
print(tags, file=file)
file.close()
print('[File: %s]' % saveto, end=' ')
print('\n' * 2, open(saveto).read())
if browser:
    webbrowser.open(saveto, new = True)
    webbrowser.opwn(htmlto, new = False)
if sys.platform.startswith('win'):
    input('[Press Enter]')