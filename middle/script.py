import sys
import os

ans = 0

while ans <= 200:
	os.system("./gen > input.txt")
	os.system('./solve > out.txt')
	ans = int(open('out.txt').readlines()[0])
	if (ans == 10**18):
		ans = 0
