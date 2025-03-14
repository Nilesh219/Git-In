#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a = "34i+34";
    string b = "44i+45";
    string e;
    string f;
    int c = stoi(a);
    cout<<c<<endl;
    int d = stoi(b);
    cout<<d<<endl;
    string s = to_string(d);
    cout<<"s is "<<s<<endl;
    cout<<c+d<<"i"<<endl;
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    cout<<a[4]<<endl;
    int i = 0;
    int j = 0;
    int iind =0;
    // while(a[i]!='\0')
    // {
    //     cout<<"hi1"<<endl;
    //     if(a[i]=='+')
    //     {cout<<"hi2"<<endl; 
    //         i=i+1;
    //         e[j]= a[i];
    //         i++;
    //         j++;
    //     }
    //     else{
    //         cout<<"hi3"<<endl;
    //         i++;
    //     }
    // }
     while(a[i]!='\0')
    {
       
        if(a[i]=='+')
        {
            iind = i;
            i++;
        }
        i++;
    }
   // i = i-42;
   
   
  
    // int j = 0;
    // while(a[i]!='\0')
    // {
    //     e[j]= a[i];
    //     i++;
    //     j++;
    // }
    cout<<"e is "<<e<<endl;

}