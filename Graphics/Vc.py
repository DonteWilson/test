import VecCal
from VecCal import *
#Vector Math Library in Python
print("\nVector Math Library into Python\n")

a = Vector2(5,3)
b = Vector2(4,10)
c = Vector2(0,0)

#Displays what is being printed
print("Vector 2 consist of (5,3) and (4,7)")

print(" ")

c = a + b
#Addition for Vector2
print("Addition: ")
c.stats()

c = a - b
#Subtraction for Vector2
print("Subtraction: ")
c.stats()

c = a * b
#Multiplication for Vector2
print("Multiplication: ")
c.stats()
#Magnitudes for Vector 1 and 2
print("Mag Vec1: ",a.mag())
print("Mag Vec2: ",b.mag())

print("Normalize: ")
a.norm().stats()

print("Normalize: ")
b.norm().stats()
#Dot Product for Vector 1 and 2
print("Dot Product: ",a.dot(a))
print("Dot Product: ",b.dot(b))
#Linear Interpolation for Vector2
print("Lerp:")
result = a.lerp(b,.5)
result.stats()

a = Vector3(4,3,1)
b = Vector3(3,4,5)
c = Vector3(0,0,0)


#Vector3 Information
print("\nVector 3 consist of (4,3,1) and (3,4,5)\n")
c = a + b
#Addition for Vector3
print("Addition: ")
c.stats()

c = a - b
#Subtraction for Vector3
print("Subtraction: ")
c.stats()

c = a * b
#Multiplication for Vector3
print("Multiplication: ")
c.stats()
#Cross Product for Vector 3
print("Cross Product: ")
result = a.cross(b)
result.stats()

#Magnitude for Vector3
print("Magnitude: ",a.mag())
print("Magnitude: ",b.mag())

print("Normalize: ")
a.norm().stats()

print("Normalize: ")
b.norm().stats()

#Dot Product for Vector3
print("Dot Product: ",a.dot(b))

print("Dot Product: ",b.dot(b))#dot may be predefined somewhere and when we ran it as dotP then back as dot it refreshed need to look up

#Lerp for Vector3
print("Lerp: ")
result = a.lerp(b,.5)
result.stats()
a = Vector4(225,0,0,0)
print("\nVector 4\n")

print("Normalize: ")
a.norm().stats()

print("Hex: 225,0,0,0")
print("Hex: 225,64, 0, 0")
print("Hex: 0,127,225")
print hex(225),hex(0),hex(0),hex(0)
print hex(225),hex(64),hex(0),hex(0)
print hex(0),hex(127),hex(225)




