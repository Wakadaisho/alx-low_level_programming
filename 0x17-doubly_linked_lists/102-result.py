#!/usr/bin/python3

def isPalindrome(n):
    string = str(n);
    return string == string[::-1]

max = (0,0)
for i in range(100,1000):
	for j in range(100,1000):
		if (isPalindrome(i*j)):
			max = (i, j)

print(max[0]*max[1])
