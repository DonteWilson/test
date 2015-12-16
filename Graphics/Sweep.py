import Sort
#imports random numbers into my program.
import random
from Sort import *
#generates random numbers between -50 and 100
random_items = [random.randint(-50, 100) for c in range(32)]
#implements insertion sort method
print ("Insertion Sort\n")
#Before result
print 'Before: ', random_items
insertion_sort(random_items)
#After result of the before
print 'After: ', random_items


print(" ")
random_items = [random.randint(-50, 100) for c in range(32)]
#implements bubble sort method
print ("Bubble Sort\n")
#Before result of the random items
print 'Before: ', random_items
#prints space between the two
print(" ")
bubble_sort(random_items)
#After result of the before. // random items.
print 'After: ', random_items

print(" ")
random_items = [random.radint(-50, 100) for c in range(32)]
#implements merg sort method


