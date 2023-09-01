#include <iostream>

using namespace std;

int main()
{
    /* int a = 3, b = 78, c = 1233;

    cout << "the value of a without setw is : " << a << endl;
    cout << "the value of b without setw is : " << b << endl;
    cout << "the value of c without setw is : " << c << endl;

    cout << "the value of a without setw is : " << setw(4) << a << endl;
    cout << "the value of b without setw is : " << setw(4) << b << endl;
    cout << "the value of c without setw is : " << setw(4) << c << endl;

    */

   //operator precedence

   int a = 3, b = 4;

   //int c = ((a*5)+b);
   int c = ((((a*5)+b)-45)+87);
   cout<<c;
    return 0;
}