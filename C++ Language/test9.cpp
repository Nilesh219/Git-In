#include <iostream>

using namespace std;
int main()
{
    // selection stucture ture or flase
    int age;

    cout << "type you age : ";
    cin >> age;

   /* if (age < 18)
    {
        cout << "you can not come to my party : " <<endl;
    }
    
        else if(age == 18)
        {
            cout << "your are childern you have pass of that : " <<endl;
        }
    else
    {
        cout << "you can come to my party " <<endl;
    }

   */

  switch (age)
  {
      case 18 :
      cout<<"your age is 18"<<endl;
      break;

      case 22 :
      cout<< "your age is 22"<<endl;
      break;

      case 2 :
      cout<< "your age is 2"<<endl;
      break;

      default:
      cout<<"No special case"<<endl;
      break;

  }

   
    return 0;

} 