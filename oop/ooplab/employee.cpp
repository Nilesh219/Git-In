#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;


typedef struct bdate{
    int day;
    int month;
    int year;

}bd;



void setName(string *name,string temp)
{
    int i = 0;
    while(i<temp.length())
    {
        if(temp[i]>'0'&&temp[i]<'9')
        {
            cout<<"Invalid name"<<endl;
        }
        i++;
    }
    *name = temp;
}
string getName(string name)
{
   cout<<name<<endl;
}
void setPhone(string *phone,string temp)
{
    if(temp.length()>10)
    {
        cout<<"Invalid number"<<endl;
    }
    *phone = temp;
}
string getPhone(string phone)
{
    cout<< phone<<endl;
}

void setAddress(string *address,string temp)
{
    *address = temp;
}
string getAddress(string address)
{
    cout<<address<<endl;
}
void setSalary(int *salary,int temp)
{
    if(*salary<0)
    {   cout<<endl;
        cout<<"Invalid salary"<<endl;
    }
    *salary = temp;
}
int getSalary(int salary)
{
    cout<< salary<<endl;
}
void setCompanyName(string *companyName,string temp)
{   int i = 0;
    while(i<temp.length())
    {
        if(temp[i]>'0'&&temp[i]<'9')
        {
            cout<<"Invalid Company name"<<endl;
        }
        i++;
    }
    *companyName = temp;
}
string getCompanyName(string companyName)
{
    cout<<companyName<<endl;
}

int setBdate(struct bdate bd )
{
    string bdate;
    if((bd.day <1)||(bd.day>31)||(bd.month<1)||(bd.month>12)
    ||(bd.year<1900)||(bd.year>2023)){
       return 0;
    }
    else{
        return 1;
    }
}

int getAge(int year)
{
    cout<<2023-year<<endl;
}


//function is used to set designation of employee

void setDesignation(string *designation ,string temp)
{
    *designation = temp;
}

//Function to get designation of employee 
string getDesignation(string designation)
{
    cout<< designation<<endl;
}
void setId(int *Id,int temp)
{
    if(*Id<0)
    {   
        cout<<endl;
        cout<<"Invalid id"<<endl;
    }
    else{
    *Id = temp;
    }
}
int getId(int Id)
{
   cout<<Id<<endl;
}
void setMarks(int *marks, int temp)
{
    if(*marks <0)
    {
        cout<<"Invalid marks"<<endl;
    }
    *marks = temp;
}
int getMarks(int marks)
{
    cout<<marks<<endl;
}
int main()
{ 
    string name;
    int salary;
    salary = 100;

    string phone;
    string address;
    string designation;
    int age;
    string companyName;
    int Id;
    int marks;
    //for employee
    setName(&name,"pratik");
    cout<<"The name of the employee is ";
    getName(name);
    cout<<"The ID of the employee is ";
    setId(&Id,23);
    getId(Id);
    cout<<"The name of company of the employee is ";
    setCompanyName(&companyName,"Microsoft");
    getName(companyName);
    cout<<"The salary of the employee is ";
    setSalary(&salary,54000);
    getSalary(salary);
    cout<<"The designation of the employee is ";
    setDesignation(&designation,"Manager");
    getDesignation(designation);
    cout<<endl;

    //for person
    cout<<"The name of the person is ";
    setName(&name ,"Krishna");
    getName(name);
    cout<<"The address of the person is ";
    setAddress(&address,"Vrindawan");
    getAddress(address);
    cout<<"The age of the person is ";
    struct bdate bd1;
    bd1.year = 2003;
    bd1.day = 15;
    bd1.month = 9;
    getAge(bd1.year);
    cout<<endl;

    //for student
    cout<<"The name of the student is ";
    setName(&name,"Dattatreya");
    getName(name);
    cout<<"The marks obtained are ";
    setMarks(&marks,34);
    getMarks(marks);
    cout<<"The Id of the student is ";
    setId(&Id,234);
    getId(Id);

}















