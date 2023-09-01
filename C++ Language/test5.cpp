#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Entre num1 value : \n"; //'<<' is called insertion operator
    cin >> num1;                     //'>>' is called Extraction operator

    cout << "Entre num2 value : \n";
    cin >> num2;

    cout << "The sum is : \n"
         << num1 + num2;

    return 0;
}