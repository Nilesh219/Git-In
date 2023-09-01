# object oriented programming using python
# class is template
class Employee:
    def __init__(self, ename, esalary): #constructor
        self.name = ename
        self.salary = esalary

Nilesh = Employee("Nilesh", "150000")
print(Nilesh.name)
print(Nilesh.salary)
        
