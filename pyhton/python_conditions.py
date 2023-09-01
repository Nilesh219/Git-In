# age = input("Enter age = ")
# age = int(age)
# # print(type(age))

# if(age > 18):
#     print("You can drive a car")
# elif(age == 18):
#     print("You are teenager you can drive")
# else:
    # print("You can not drive a car")

# Loops:
# Scenario: you have to print numbers between 1 to 1000
# for i in range(0, 1000):
#     print(i)

# li = [1, 77, "Nilesh"]
# for item in li:
#     print(item)

# Quiz : use for loop to iterate dictionary, set and tuples
# Tuples
# a = ("Nilesh", "Akash", "Joshua")
# for name in a:
#     print(name)

# set
# s1 = {2, 2, 3, 4, 5, 7, 7, 8, 10}
# for Numbers in s1:
    # print(Numbers)

# Dictionary
# infoDict = {"Name " : "Nilesh",
#             "class ": "SY",
#             "Rollno": "21uai021",
#             "dob"   : "16/05/2003"}

# for Information in infoDict:
#     print(infoDict)

i = 0
# while(i < 100): #it will print 0 - 99 
#     print(i)
#     i = i+1

# while(i < 100): #it will print 0 - 100 
#     print(i + 1)
#     i = i+1

# while(i < 100): #it will print 0 - 99
#     print(i)
#     if i == 78:
#         break
#     i = i+1

while(i < 100): #it will print 0 - 100 
    i = i+1
    if i == 72:
        continue # it will skip the 72
    print(i)
