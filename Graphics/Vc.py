import VecCal
from VecCal import *

a = Vector(1,2,3)
b = Vector(3,2,1)
c = Vector(0,0,0)

c = a + b
print("Addition: ")
c.stats()
print("")

print("Magnitude".mag())

c = a - b
c.stats()