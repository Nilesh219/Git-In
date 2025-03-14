#include <iomanip> 
#include <iostream> 
using namespace std; 
int main() 
{ 
 double A = 400; 
 double B = 5045.7895; 
 double C = 65067.26876; 
 // We can use setbase(16) here instead of hex 

 // formatting 
 cout<<"hello"<<endl;
 cout << hex << left << showbase << nouppercase; 
  cout<<"hello1"<<endl;
 // actual printed part 
  cout<<"hello2"<<endl;
 cout << (long long)A << endl; 
 // We can use dec here instead of setbase(10) 
  cout<<"hello 3"<<endl;
 // formatting 
 cout << setbase(10) << right << setw(15) 
 << setfill('_') << showpos 
 << fixed << setprecision(2); 
 // actual printed part 
 cout << B << endl; 
 // formatting 
 cout << scientific << uppercase 
 << noshowpos << setprecision(9); 
 // actual printed part 
 cout << C << endl; 
}