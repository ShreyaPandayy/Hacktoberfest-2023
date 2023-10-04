def selectionSort(head):
	
	temp = head
	
	# Traverse the List
	while (temp):
		
		minn = temp
		r = temp.next
		
		# Traverse the unsorted sublist
		while (r):
			if (minn.data > r.data):
				minn = r
			
			r = r.next
			
		# Swap Data
		x = temp.data
		temp.data = minn.data
		minn.data = x
		temp = temp.next
	
# This code is contributed by shubhamsingh10
