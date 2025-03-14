
#include <iostream>
using namespace std;
class Box
{
 private:
 int length;
 public:
 Box (){
length =5;
 }
 friend int incementLength (Box); //friend function
};

int incementLength (Box b)
{
 b. length +=10;
 return b.length;
}
int main ()
{
    Box b;
    cout <<" Length of box:"<< incementLength(b)<<endl;
    return 0;
}
