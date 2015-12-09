import VecCal
from VecCal import *

a = Vector(4,3,1)
b = Vector(3,4,5)
c = Vector(0,0,0)
print("Vector Math Library into Python\n")
c = a + b
print("Addition: ")
c.stats()

c = a - b
print("Subtraction: ")
c.stats()

c = a * b
print("Multiplication: ")
c.stats()

print("Magnitude: ",a.mag())


print("Dot Product: ",a.dot(b)) #dot may be predefined somewhere and when we ran it as dotP then back as dot it refreshed need to look up


print("Lerp: ")

