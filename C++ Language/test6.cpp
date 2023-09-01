#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 7;

    cout << "operators in c++" << endl;
    cout << "following types of operators in c++" << endl;

    // Arithematic Operator

    cout << "the value of a+b is : " << a + b<<endl;
    cout << "the value of a-b is : " << a - b<<endl;
    cout << "the value of a*b is : " << a * b<<endl;
    cout << "the value of a/b is : " << a / b<<endl;
    cout << "the value of a%b is : " << a % b<<endl;
    cout << "the value of a++ is : " << a++<<endl;
    cout << "the value of a-- is : " << a--<<endl;
    cout << "the value of ++a is : " << ++a<<endl;
    cout << "the value of --a is : " << --a<<endl;



   //Assignment Operator -->  using to assign value to variables

   //int = 5, b=9
   //char d ='g'


   //compersion operators --> 

   cout<<"the vaue of a==b is :"<<(a==b)<<endl;
   cout<<"the vaue of a!=b is :"<<(a!=b)<<endl;
   cout<<"the vaue of a>=b is :"<<(a>=b)<<endl;
   cout<<"the vaue of a<=b is :"<<(a<=b)<<endl;
   cout<<"the vaue of a>b is :"<<(a>b)<<endl;
   cout<<"the vaue of a<b is :"<<(a<b)<<endl;

   //Logical operators

   cout<<"the vaue of ((a==b)&&(a<b) is :"<<((a==b)&&(a<b))<<endl;
   cout<<"the vaue of ((a==b)&&(a<b) is :"<<((a==b)||(a<b))<<endl;
   cout<<"the vaue of (!(a==b)) is :"<<(!(a==b))<<endl;





    return 0;

}