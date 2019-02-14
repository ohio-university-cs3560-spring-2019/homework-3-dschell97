#
#	Daniel Schell
#	ds008016@ohio.edu
#
#	description: this is the euler problem 1
#
#	13 February 2019


sum = 0
for i in range(1, 1000):
	if(i%3) == 0 or (i%5)== 0:
		sum+=i


print(sum)
