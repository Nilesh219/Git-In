#include<iostream>
using namespace std;

class ComplexNumber
{
	private:
		int  real;
		int imaginary;
	public:
	friend ostream& operator << ( ostream& ost, const ComplexNumber &cn);
	friend istream& operator >> ( istream& ist, ComplexNumber &cn);
};

ostream& operator << ( ostream& ost, const ComplexNumber &cn)
{
	ost << "Complex Number=" << cn.real <<"+" << cn.imaginary << "i" << endl;
}

istream& operator >> ( istream& ist, ComplexNumber &cn)
{
	cout << "Enter Real Part" << endl; 
	ist >> cn.real;
	cout << "Enter imaginary Part" << endl;
	ist >> cn.imaginary;
}

int main()
{

	ComplexNumber compnum;
	cin >> compnum;
	cout << compnum;
	return(0);
}
