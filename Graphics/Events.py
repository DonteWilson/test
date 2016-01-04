from Maths import *

#will be used to keep track of the events of the program.
#stores information on key usage
class _EventHandler():
	def __init__(self):
		self.UpFlag 	= False
		self.DownFlag 	= False
		self.LeftFlag 	= False
		self.RightFlag 	= False
	
	def ParseInput(self, m_Key):
		if (m_Key == 'Up') and not(self.UpFlag):
			self.OnKeyDown(m_Key)
		elif (self.UpFlag):
			self.OnKeyUp('Up')
			
		if (m_Key == 'Down') and not(self.DownFlag):
			self.OnKeyDown(m_Key)
		elif (self.DownFlag):
			self.OnKeyUp('Down')
			
		if (m_Key == 'Left') and not(self.LeftFlag):
			self.OnKeyDown(m_Key)
		elif (self.LeftFlag):
			self.OnKeyUp('Left')
			
		if (m_Key == 'Right') and not(self.RightFlag):
			self.OnKeyDown(m_Key)
		elif (self.RightFlag):
			self.OnKeyUp('Right')
	
	def OnKeyDown(self, m_Key):
		if (m_Key == 'Up'):
			self.UpFlag = True
		if (m_Key == 'Down'):
			self.DownFlag = True
		if (m_Key == 'Left'):
			self.LeftFlag = True
		if (m_Key == 'Right'):
			self.RightFlag = True
	
	def OnKeyUp(self, a_Key):
		if (m_Key == 'Up'):
			self.UpFlag = False
		if (m_Key == 'Down'):
			self.DownFlag = False
		if (m_Key == 'Left'):
			self.LeftFlag = False
		if (m_Key == 'Right'):
			self.RightFlag = False
