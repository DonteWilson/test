import math
from math import *
class Vector(object):
		def init(self,ax,ay,az):
				self.x = ax
				self.y = ay
				self.z = az
		
		def stats(self):
			print(self.x,",",self.y,",",self.z)
		
		def add(self, other):
				result = Vector(0,0,0)
				result.x = self.x + other.x
				result.y = self.y + other.y
				result.z = self.z + other.z
				return result
			
		def sub(self, other):
				result = Vector(0,0,0)
				result.x = self.x - other.x
				result.y = self.y - other.y
				result.z = self.z - other.z
				return result
			
		def mag(self, other):
				result = Vector(0,0,0)
				result.x = self.x ^ 2
				result.y = self.y ^ 2
				result.z = self.z ^ 2
				nresult = sqrt(result.x + result.y + result.z)
				return nresult
