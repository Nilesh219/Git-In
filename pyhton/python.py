# name1 = "Nilesh"
# name2 = 'Nilesh'
# name3 = '''Nilesh
#        is a good  boy'''

# print(name1)
# print(name2)
# print(name3)

# print(name1[0])
# print(name1[5])
# print(name1[6]) # It give error string index out of range

# print(name1[2:4])
# print(name1[3:5])

# name = "   Nilesh   "
# print(name)
# print(name.strip()) # strip function cancelles the gap bettwen Nilesh

# namen = "Nilesh" 
# print(len(namen)) # len can gice us length of string

# var = namen.lower() # It convert string into lowercase
# print(var)

# var = namen.upper() # It convert string into upercase
# print(var)

# var = namen.replace("i", "s")
# print(var)

# var = namen.replace("il", "s")
# print(var)

# namenew = "Nilesh, joshua, Rahul"
# var = namenew.replace(",", '')
# var = namenew.replace(", ", '\n')
# print(var)

str1 = "This is a "
namenew1 = "Nilesh"
namenew2 = "joshua"
str2 = "This is not a"
print(str1+namenew1) # String catconitation


temp = "This is a {} and he is a good boy named {}".format(namenew1,namenew2)
print(temp)


temp = "This is a {1} and he is a good boy named {0}".format(namenew1,namenew2)
print(temp)

temp = f"This is a {namenew1} and he is a good boy named {namenew2}"
print(temp)