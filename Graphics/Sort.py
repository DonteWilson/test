#Defines bubble sort and generates through the random items in Sweep.py
def bubble_sort(items):
	#scanes through the range of items and puts them in a descending order.
	for i in range(len(items)):
		for j in range(len(items)-1-i):
			if items[j] > items[j+1]:
				items[j], items[j+1] = items[j+1], items[j]
				
#Defines the insertion sort and generates through the random items in Sweep.py	
def insertion_sort(items):
	#scans through the range of items and puts them in a descending order.
	for i in range(1, len(items)):
		j = i
		while j > 0 and items[j] < items[j -1]:
			items[j], items[j-1] = items[j-1], items[j]
			j -= 1

