def Binary_search_function(ar1, lowest_element, last_element,searched_element):
	while lowest_element <= last_element:
		mid_element = lowest_element + (last_element - lowest_element) // 2
		if ar1[mid_element] == searched_element:
			return mid_element
		elif ar1[mid_element] < searched_element:
			lowest_element = mid_element+ 1

		else:
			last_element = mid_element - 1
	return -1
ar1 = [15,18,24,32,35,39,44,47,52,53,57,59]
searched_element = 10
final_result = Binary_search_function(ar1, 0, len(ar1)-1, searched_element)
if final_result != -1:
	print("found at index % d" % final_result)
else:
	print("not found")
