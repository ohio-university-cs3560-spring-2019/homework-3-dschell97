#
#	Daniel Schell
#	ds008016@ohio.edu
#
#	description: line counter
#
#	25 February 2019


#asks for a word to be inputted and sets 2 variables to it
puts "Input word to be reworded: "
ogword = gets
newword = ogword

#case if the first letter is an f
newword = newword.gsub(/\b[fF]\w+/) {
	|a|

	letter1 = ""
	#checks for capital and lowercase letter
	if a[0] == "f" then
		letter1 = "g"
	else
		letter1 = "G"
	end

	letter2 = ""
	#matches upper or lower from first letter
	if a[1] == a[1].upcase then
		letter2 = "H"
	else
		letter2 = "h"
	end
	#puts gh in or f
	letter1 + letter2 + a[1, a.length - 1]

}
#case if I or i
newword = newword.gsub(/\BI\B/, 'O')
newword = newword.gsub(/\Bi\B/, 'o')

#case for last two letters being sh
newword = newword.gsub(/\B[sS][hH]\b/) {
	|a|

	secondtolast = ""
	##checks for capitalization
	if a[0] == "s" then
		secondtolast = "t"
	else
		secondtolast = "T"
	end

	last = ""
	#checks capitalization
	if a[1] == "h" then
		last = "i"
	else
		last = "I"
	end
	#sets last letter to be ti instead of sh
	secondtolast + last

}

puts "Your word: " + ogword
puts "My word: " + newword
