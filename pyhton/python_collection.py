
'''python Collection 

1. List 
2. tuple
3. set
4. Dictionary
'''

# 1. List
# lst = [1, 4, 56, 34, 58, 67]
# print(lst)
# var = type(lst)
# var = len(lst)
#print(var)

# lst.append(100) #it insert the element form back 
# lst.insert(1,100)# 100 is element and insert at index no 1
# lst.pop() #it will pop element form back

# lst[2] = 45
# var = lst[2]
# lst.remove(56)
# lst.clear() #it will clear all the list 
# del lst[3] #it will delete the element from list
# del lst

# var = lst[1:4] # it will give 4-1 = 3 index element take form index 1 to 3
# var = lst
# print(lst)
# print(var)
# ------------------------------------------------------------------------------------------------------------
# 2. tuple
# a = ("Nilesh", "Akash", "joshua")
# a = list(a); # it will covert tuple into list 
# var = type(a); # it will it's type 
# print(var);

# Cannot do this in tuple we can't change the values it will be fixied
# a[0] = "Navman"
# print(a)
#-------------------------------------------------------------------------------------------------------------
# Set
# s1 = {2, 2, 2, 2, 2, 7, 3, 2, 1, 2, 2, 12, 7, 6, 3, 12}

# print(len(s1))
# s1.add(4444)
# s1.update([12, 12, 423, 3423, 634, 123, 432, 23])
# s1.remove(1)
# s1.remove(1545) # it will be not contain because of that  it will giv error 
# s1.discard(1545)

# Like list you can use : .pop, .clear, del

# union --> it combin two subset and form the new set with both set elements
# set2 = {1, 2, 3}
# set3 = {4, 5, 6}
# union_set = set2.union(set3)
# print(union_set)

# and.. intersection --> it two subset will be common element get and form new set will get that comman element
# set4 = {1, 2, 3}
# set5 = {3, 4, 5}
# intersection_set = set4.intersection(set5)
# print(intersection_set)

# differnce :  Returns a new set containing elements that are in the first set but not in the second set.
# set6 = {1, 2, 3}
# set7 = {3, 4, 5}
# difference_set = set6.difference(set7)
# print(difference_set)

# symmetric_difference: Returns a new set containing elements that are in either of the sets, but not in both.
# python
# set8 = {1, 2, 3}
# set9 = {3, 4, 5}
# symmetric_difference_set = set8.symmetric_difference(set9)
# print(symmetric_difference_set)

# s1.pop()
# s1.clear()
# del s1
# print(s1)
#-------------------------------------------------------------------------------------------------------------
# # 3. Dictionary
# nileshDict = {"Name ": "Nilesh",
#               "class": "SY c",
#               "Marks": 85.0,
#               "Hours In school": 6
#               }

# nileshDict["Marks"] = 34
# print(nileshDict["Marks"])
# nileshDict.pop("Marks")
# del, clear, pop update
# nileshDict.clear()
# del nileshDict["class"], nileshDict["Name "] 
# nileshDict.update({"Roller Number": "21UAI021)"})
# print(nileshDict)
#-------------------------------------------------------------------------------------------------------------