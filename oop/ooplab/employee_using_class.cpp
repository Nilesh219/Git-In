#include<iostream>
using namespace std;


class Employee{
    public:
    int age;
    int salary;
    string name;
    string companyName;
    string designation;
    string phone;
    string addresss;
    int day;
    int year;
    int month;
    int ID;
    

    public:
    
    void setAddress(string address)
    {
        this ->addresss = address;
    }
    string getAddress()
    {
        return addresss;
    }

    int checkBdate()
    {
       
        if(( day<1)||(day>31)||(month<1)||(month>12)
        ||(year<1900)||(year>2023)){
        cout<<"Invalid birthdate"<<endl;
        return 0;
        }
        else{
            cout<<"Valid birthdate"<<endl;
            return 1;
        }
    }

    int getAge()
    {
        return 2023-year;
    }

    void  setPhone(string phone)
    {
        if(phone.length()>10)
        {
            cout<<"Invalid number"<<endl;
           
        }
        this -> phone =phone ;
    }

    string getPhone()
    {
        return phone;
    }

    void setDesignation(string designation)
    {
        this ->designation = designation;
    }

    string getDesignation()
    {
        return designation;
    }

    void setName(string name)
    {
        this ->name = name;
    }

    string getName()
    {
        return name;
    }

   
    void setSalary(int salary)
    {
        this->salary = salary;
    }

    int getSalary()
    {
        return salary;
    }

    void setCompanyName(string companyName)
    {
        this->companyName = companyName;
    }

    string getCompanyName()
    {
        return companyName;
    }

    void setId(int ID)
    {
        this->ID = ID;
    }

    int getID()
    {
        return ID;
    }
};

class Student{
    public:
    int marks;
    string name;
    string address;
    string age;
    int ID;
    int day;
    int year;
    int month;

    public:
    int checkBdate()
    {
       
        if(( day<1)||(day>31)||(month<1)||(month>12)
        ||(year<1900)||(year>2023)){
        cout<<"Invalid birthdate"<<endl;
        return 0;
        }
        else{
            cout<<"Valid birthdate"<<endl;
            return 1;
        }
    }

    int getAge()
    {
       
        return 2023-year;
    }
    void setId(int ID)
    {
        this->ID = ID;
    }

    int getID()
    {
        return ID;
    }
    void setMarks(int marks)
    {   
        
        if(marks <0)
        {
            cout<<"Invalid marks"<<endl;
        }
        this-> marks =marks;
    }
    int getMarks()
    {
       return marks;
    }
    void setAddress(string address)
    {
        this ->address = address;
    }
    string getAddress()
    {
        return address;
    }
    void setName(string name)
    {
        this ->name = name;
    }

    string getName()
    {
        return name;
    }
};

class Person{
    public:
    string name;
    int age;
    int day ;
    int month;
    int year;
    string phone;
    string address;
    public:
    int checkBdate()
    {
       
        if(( day<1)||(day>31)||(month<1)||(month>12)
        ||(year<1900)||(year>2023)){
        cout<<"Invalid birthdate"<<endl;
        }
        else{
            cout<<"Valid birthdate"<<endl;
        }
    }

    int getAge()
    {
       
        return 2023-year;
    }
    
    
    void setAddress(string address)
    {
        this ->address = address;
    }
    string getAddress()
    {
        return address;
    }
    void setName(string name)
    {
        this ->name = name;
    }

    string getName()
    {
        return name;
    }
    void  setPhone(string phone)
    {
        if(phone.length()<0||phone.length()>10)
        {
            cout<<"Invalid number"<<endl;
        }
        else{
        this -> phone =phone ;
        }
    }

    string getPhone()
    {
      return  phone;
    }
};

int main()
{
    //FOR EMPLOYEE
    Employee a;

    a.setCompanyName("Apple");
    a.setId(2003);
    a.setName("Krishna");
    a.setSalary(450000);
    a.setPhone("9022533809");
    cout<<"The name of the employee is :"<<a.getName()<<endl;
    cout<<"The name of the company of the employee is "<<a.getCompanyName()<<endl;
    cout<<"The ID of the employee is "<<  a.getID()<<endl;
    cout<<"The salary of the employee is :"<<a.getSalary()<<endl;
    a.day = -1;
    a.month = 12;
    a.year = 2003;
    a.checkBdate();
    a.setPhone("9370166485");
    cout<<"The phone number of the employee is "<<a.getPhone()<<endl;
    cout<<"The age of the employee is "<<a.getAge();

cout<<endl;
cout<<endl;
    //FOR STUDENT
    Student s;

    s.setName("pratik");
    s.setAddress("Kolhapur");
    s.setId(2000);
    s.setMarks(94);
    s.day = 15;
    s.month = 9;
    s.year = 2003;

    cout<<"The name of the student is :"<<s.getName()<<endl;
    cout<<"The address of the student is "<<s.getAddress()<<endl;
    cout<<"The ID of the student is "<<  s.getID()<<endl;
    cout<<"The age of the student is :"<<s.getAge()<<endl;
    cout<<"The marks of the student are :"<<s.getMarks()<<endl;
    cout<<endl;
    cout<<endl;

    //FOR PERSON

    Person p ;
    
    p.setAddress("Raigad");
    p.setName("Shivaji");
    p.day = 19;
    p.month = 2;
    p.year = 2003;
    p.setPhone("9405265536");
    cout<<"The name of the person is :"<<p.getName()<<endl;
    cout<<"The address of the person is "<<p.getAddress()<<endl;
    cout<<"The age of the person is :"<<p.getAge()<<endl;
    cout<<"The phone number of the person is :"<<p.getPhone()<<endl;
}