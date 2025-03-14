#include<iostream>
#include<cstring>
using namespace std;

int main()
{





    char a[10] = "3i-20";
    char b[10] = "3i+2";
    char c[10];
    char e[10];
    char d[10];
   
    cout<<"Input one is "<<a<<endl;
    cout<<"Input two is "<<b<<endl;


    int img1;
    int img2;
    int real1;
    int real2;
    

    // strcpy(c,a);
    // strrev(c);
    // img1 = stoi(a);
    // real1 = stoi(c);
   
    // strcpy(d,b);
    // strrev(d);
    // img2 = stoi(b);
    // real2 = stoi(d);

    // int addimg = img1+img2;
    // int addreal = real1+real2;
    // cout<<"The answer is "<<endl;
    // cout<<addimg<<"i+"<<addreal<<endl;
    
    
    int i = 0;
    int j = 0;

    while(a[i]!='+'||a[i]!='-')
    {
        i++;
    }
    i= i+1;

    while(a[i]!='\0')
    {
        c[j]=a[i];
        i++;
        j++;
    }
    int k = 0;
    int y = 0;
    while(b)
    real1 = stoi(c);
    cout<<real1<<endl;

}









