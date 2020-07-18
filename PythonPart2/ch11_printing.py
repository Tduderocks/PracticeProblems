#chapter 11 testing print, should show up in log.txt
#works :) 4,5,6 appears in ch11_log.txt
#if file doesn't exist - one is created
import sys
sys.stdout=open('ch11_log.txt', 'a')
print (4,5,6)
sys.stdout.close()
