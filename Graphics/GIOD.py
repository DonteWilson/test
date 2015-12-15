import GIO
import Graphics
from GIO import *
from Graphics import *
#This page will display sorting with game objects.
print("Input Program.")

numbers = [5,3,2,1,8]
number = 0
while(number != -1):
	number = input("Enter a number: ")
	numbers.append(number)
		
numbers.sort()
print(numbers)


draw.rectangle()




#high = max(numbers)
#low = min(numbers)
#print("The highest number enterted was",high,".\n")
#print("The lowest number entered was",low,".\n")
#print("Game Object A\n")
#print("Game Object B\n")




