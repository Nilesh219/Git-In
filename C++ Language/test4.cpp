#include <iostream>

using namespace std;

int sum(int a);
int a = 8;

int main()
{
    int a = 5, b = 7;
    a = 10;
    float pi = 3.14;
    bool is_ture = false;
    char c = 'N';

    sum(a);
    cout << "This test4 for a value is " << a << " \n. The b value is " << b;
    cout << " \n. The value of pi is " << pi;
    cout << "\n . The value is bool is " << is_ture;
    cout << " \n. The letter is c is " << c;

    return 0;
}

sum(int a)
{
    a = 12;
}