#include<iostream>

using namespace std;

int main()
{
    // cout<<"Hello everyone";
    //input 
    // int age;
    // cout<<"Enter Your age = "<<endl;
    // cin>>age;

    // checking the condition for condititon statement 
    // if(age < 18 && age > 1)
    // {
    //     cout<<"Your age smaller than 18 you can not drive"<<endl;
    // }
    // else if(age == 18)
    // {
    //     cout<<"Your age is 18 You can drive"<<endl;
    // }
    // else if(age < 1)
    // {
    //     cout<<"Your age is 0 you not bron"<<endl;
    // }
    // else
    // {
    //     cout<<"You can dirve"<<endl;
    // }

    // switch(age)
    // {
    //     case 18:
    //         cout<<"your age is 18"<<endl;
    //         break;

    //     case 15:
    //         cout<<"Your age is 15"<<endl;
    //          break;

    //     case 25:
    //         cout<<"Your age is 25"<<endl;
    //          break;

    //     default:
    //         cout<<"You Enter age not present in switch case"<<endl;
    //           break;  
    // }

    // program to print positive numbers entered by user 
    //if the user enters a negative numbers, it is skipped

    // int num;

    // cout<<"Enter The Number to check a number is positive or not = ";
    // cin>>num;

    // if(num >= 0){
    //     cout<<"You Entered positive Number =  "<<num<<endl;
    // }
    

    // program to check Whether an integer is positive or Negative 
    //this program considers 0 as a posotive number 

    int num;

    cout<<"Enter the Number To check numer is positive or negative = ";
    cin>>num;

    if(num >= 0)
    {
        cout<<"You Entered Number is Positive = "<<num<<endl;
    }
    else
    {
        cout<<"You Entered Negative Number = "<<num<<endl;
    }
    
    return 0;
}