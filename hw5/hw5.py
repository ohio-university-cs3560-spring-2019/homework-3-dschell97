#
#	Daniel Schell
#	ds008016@ohio.edu
#
#	description: line counter
#
#	25 February 2019


import sys
#inputs last stdin line
line = ""

for line in sys.stdin:
	pass

#outputting the found counts
count = line.split()
print ("Number of lines: " + count[0] +  " Number of words: " + count[1] + " Number of characters: " + count[2])
