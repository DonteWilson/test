import math
from math import *
class Vector2(object):
		def __init__(self,ax,ay):
				self.x = ax
				self.y = ay
				
		def stats(self):
			print(self.x,self.y)		
		
		def __add__(self, other):
				result = Vector2(0,0)
				result.x = self.x + other.x
				result.y = self.y + other.y
				return result
			
		def __sub__(self, other):
				result = Vector2(0,0)
				result.x = self.x - other.x
				result.y = self.y - other.y
				return result
		
		def __mul__(self, other):
				result = Vector2(0,0)
				result.x = self.x * other.x
				result.y = self.y * other.y
				return result
			    
		def mag(self):
				result = Vector2(0,0)
				nresult = sqrt((self.x * self.x) + (self.y * self.y))
				return nresult
				
		def norm(self):
				result = Vector2(0,0)
				mresult = sqrt((self.x * self.x) + (self.y * self.y))
				result.x = self.x/mresult
				result.y = self.y/mresult
				return result
				
		def dot(self,other):
				result = Vector2(0,0)
				result.x = self.x * other.x
				result.y = self.y * other.y
				nresult = (self.x * other.x) + (self.y * other.y)
				return nresult
				
		def lerp(self, other, per):
				result = Vector2(0,0)
				result.x = self.x + (per * (other.x - self.x))
				result.y = self.y + (per * (other.y - self.y))
				return result
			    

				
				


class Vector3(object):
		def __init__(self,ax,ay,az):
				self.x = ax
				self.y = ay
				self.z = az
				
		
		def stats(self):
			print(self.x,self.y,self.z)
		
		def __add__(self, other):
				result = Vector3(0,0,0)
				result.x = self.x + other.x
				result.y = self.y + other.y
				result.z = self.z + other.z
				return result
			
		def __sub__(self, other):
				result = Vector3(0,0,0)
				result.x = self.x - other.x
				result.y = self.y - other.y
				result.z = self.z - other.z
				return result
		
		def __mul__(self, other):
				result = Vector3(0,0,0)
				result.x = self.x * other.x
				result.y = self.y * other.y
				result.z = self.z * other.z
				return result
		
		def cross(self,other):
				result = Vector3(0,0,0)
				result.x = (self.y * other.z) - (other.y + self.z)
				result.y = (self.z * other.x) - (other.z + self.x)
				result.z = (self.x * other.y) - (other.x + self.y)
				return result
				
		def mag(self):
				result = Vector3(0,0,0)
				nresult = sqrt((self.x * self.x) + (self.y * self.y) + (self.z * self.z))
				return nresult
				
		def norm(self):
				result = Vector3(0,0,0)
				mresult = sqrt((self.x * self.x) + (self.y * self.y))
				result.x = self.x/mresult
				result.y = self.y/mresult
				result.z = self.z/mresult
				return result

		def dot(self,other):
				result = Vector3(0,0,0)
				result.x = self.x * other.x
				result.y = self.y * other.y
				result.z = self.z * other.z
				nresult = (self.x * other.x) + (self.y * other.y) + (self.z * other.z)
				return nresult
				
		def lerp(self, other, per):
				result = Vector3(0,0,0)
				result.x = self.x + (per * (other.x - self.x))
				result.y = self.y + (per * (other.y - self.y))
				result.z = self.z + (per * (other.z - self.z))
				return result

class Vector4(object):
		def __init__(self,ar,ag,ab,aa):
				self.r = ar
				self.g = ag
				self.b = ab
				self.a = aa
				
		def stats(self):
			print(self.r,self.g,self.b,self.a)
				
		def mag(self):
				result = Vector4(0,0,0,0)
				nresult = sqrt((self.r * self.r) + (self.g * self.g) + (self.b * self.b) + (self.a * self.a))
				return nresult
				
		def norm(self):
				result = Vector4(0,0,0,0)
				mresult = sqrt((self.r * self.r) + (self.g * self.g) + (self.b * self.b) + (self.a * self.a))
				result.r = self.r/mresult
				result.g = self.g/mresult
				result.b = self.b/mresult
				result.a = self.a/mresult
				return result
		
		def hex():
				
				hexc = (255,'#04X')
				return hexc
			
				
		
		

