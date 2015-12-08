def Pizza(Total,Radius):
		pi = 3.14159265359
		Slice = (2 * pi * Radius) / Total
		fcost = format(Slice, '.2f')
		return fcost