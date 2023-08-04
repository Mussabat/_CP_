 imp functions
ARRAYS AND STRINGS
	sorting arrays - sort(array,array+n);
	sorting string - sort(s.begin() , s.end())
	finding size of string - str.length();

VECTORS:
	assign() – It assigns new value to the vector elements by replacing old ones
	push_back() – It push the elements into a vector from the back
	pop_back() – It is used to pop or remove elements from a vector from the back.
	insert() – It inserts new elements before the element at the specified position
	erase(v.begin()+i) – It is used to remove elements from a container from the specified position or range.
	swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
	clear() – It is used to remove all the elements of the vector container
	emplace() – It extends the container by inserting new element at position
	emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
	v.reverse(v.begin(),v.end()) - reversing vector
	v.size() - finding size of vector
	v.sort(v.begin(),v.end()) - sorting vectors
	find(v.begin() , v.end() , element) - finding element in given vector in order n
	lower_bound(v.begin() , v.end() , element) - returns pointer pointing to element equal to or greater than the given element
 	upper_bound(v.begin() ,v.end() , element) -returns pointer pointing to element greater than the given element
SETS:
	begin() – Returns an iterator to the first element in the set.
	end() – Returns an iterator to the theoretical element that follows last element in the set.
	size() – Returns the number of elements in the set.
	max_size() – Returns the maximum number of elements that the set can hold.
	empty() – Returns whether the set is empty.
	set.erase(iterator pointing to the element) - ersases the element present at the required index // for finding iterator: auto it = s.find(element)
	set.find(element) - returns iterator pointing to the given element if it is present else return pointer pointing to set.end()
	set.lower_bound(element) - return iterator pointing to element greater than or equal to the given element
	set.upper_bound(element) - return iterator pointing to element greater than the given element
MULTISETS:
	same as sets, the only difference is that it can contain duplicate elements and can sort elements as per requirement
		multiset<ll,greater<ll>> set1; multiset<ll,less<ll>> set2;
DEQUE:
	deque.push_front(element)
	deque.push_back(element)
	deque.pop_back()
	deque.pop_front
MAPS:
     map.insert() – Insert elements with a particular key in the map container. (eg - map.insert({key,element}) or map[key] = element
     map.count() – Returns 1 if the key is present else returns 0
     map.erase()– Used to erase element from the container.
     map.find() –Returns an iterator to the element with key value ‘g’ in the map if found, else returns the iterator to end.
     map.emplace(key , element)– Inserts the key and its element in the map container.
     map.upper_bound()– Returns an iterator to the first element that is equivalent to mapped value with key value ‘g’ or definitely will go after the element with key value ‘g’ in the map
     map.lower_bound()– Returns an iterator to the first element that is equivalent to mapped value with key value ‘g’ or definitely will not go before the element with key value ‘g’ in the map
     map.size() – Returns the number of elements in the map
     map.begin() and end()– begin() returns an iterator to the first element in the map. end() returns an iterator to the theoretical element that follows last element in the map
     map.clear()– Removes all the elements from the map.
     map.at()– at() function is used to return the reference to the element associated with the key k.
     map.swap() function is used to exchange the contents of two maps but the maps must be of same type, although sizes may differ.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/
