#Prints name is alpha-b order.
from Pizza import *
def Main(): 
	with open('name.txt','r') as f:
		name = sorted (name.rstrip ('\n') for name in f)
	
	print (name)

	cost = eval(input("Enter price of pizza: "))
	size = eval(input("Enter the radius of a pizza: "))
	X = float(cost)
	Y = float(size)
	Piece = Pizza(X,Y)
	print("The price of one slice of pizza will be: $", Piece)
Main()





