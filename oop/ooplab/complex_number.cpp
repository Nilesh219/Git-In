#include<iostream>

using namespace std;

class complex{
    public:

    int real;
    int imag;

    public:
    void setValue()
    {
        cin>>real;
        cin>>imag;
    }


    void display()
    {
        if(imag<0){
            cout<<"a-ib: "<<real<<imag<<"i"<<endl;
        }
        else{
        cout<<"a+ib: "<<real<<"+"<<imag<<"i"<<endl;
        }
    }

    void sum(complex c1, complex c2)
    {
        real = c1.real+c2.real;
        imag = c1.imag+c2.imag;
    }
};

int main()
{
    complex c1,c2,c3;
    cout<<"enter real and imaginary part for 1st no."<<endl;
    c1.setValue();

    cout<<"enter real and imaginary part for 2nd no"<<endl;
    c2.setValue();

    c3.sum(c1,c2);
    c3.display();

    return 0;

}

// #include <iostream>
// #include <string>
// #include <complex>
// using namespace std;

// int main() {
//     string num1, num2;
//     cout << "Enter first imaginary number in the form of a+bi: ";
//     cin >> num1;
//     cout << "Enter second imaginary number in the form of a+bi: ";
//     cin >> num2;

//     // Parse the real and imaginary parts of the first number
//     size_t plus_pos = num1.find("+");
//     size_t i_pos = num1.find("i");
//     double real1 = stod(num1.substr(0, plus_pos));
//     double imag1 = stod(num1.substr(plus_pos + 1, i_pos - plus_pos - 1));

//     // Parse the real and imaginary parts of the second number
//     plus_pos = num2.find("+");
//     i_pos = num2.find("i");
//     double real2 = stod(num2.substr(0, plus_pos));
//     double imag2 = stod(num2.substr(plus_pos + 1, i_pos - plus_pos - 1));

//     // Create complex numbers from the real and imaginary parts
//     complex<double> num1_complex(real1, imag1);
//     complex<double> num2_complex(real2, imag2);

//     // Add the two complex numbers
//     complex<double> sum = num1_complex + num2_complex;

//     cout << "Sum = " << real(sum) << "+" << imag(sum) << "i" << endl;
//     cout<<"The position of plus is "<<plus_pos<<endl;
//     return 0;
// }


