#include <iostream>

using namespace std;

int main()
{
    /*  int a, b,c;

      cout<<"Entre the value of a : "<<endl;
      cin>>a;

      cout<<"Entre the value of b : "<<endl;
      cin>>b;

      c = a+b;

      cout<<"The sum is c :"<<c; */

    /*float d = 34.4F;
    long double e = 34.4L;

    //cout << "the value of d is " << d << endl
     //    << "the value of is " << e;

    cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4l is "<<sizeof(34.4L)<<endl;

    */

    //******** Reference Variables *********
    float x = 455;
    float y = x;
    cout << x << endl;
    cout << y << endl;

    int a = 45;
    float b = 45.46;

    cout << "The value of a is " << (float)a;
    cout << "The value of a is " << float(a);

    cout << "The value of b is" << (int)b;
    cout << "The value of b is" << int(b)<<endl;

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a + int(b) <<endl;
    cout<<"The expression is "<<a+(int)b<<endl;



    return 0;
}