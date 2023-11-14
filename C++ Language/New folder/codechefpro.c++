
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        
        int ls = m - n;
        int ls2 = n - m;
        int rs;
        int ts;
        int tls;
        int tls2;
        if(n == ls){
            rs =  n;
            cout<<rs<<endl;
        }
        else if(m == 0){
            ts = n * 2;
            cout<<ts<<endl;
        }
        else if(n != 0){
            rs = n;
            tls = ls2 + m;
            tls2 = tls + rs;
            cout<<tls2;
        }
        
       
        
    }
}
