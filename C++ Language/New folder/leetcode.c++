#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin>>array[i];
    }
    for(int i = 0; i < n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    int target[0];
    cin>>target[0];
    
    int i = 0;
    while(i < n){
        if(target[0] == array[i]){
            cout<<array[i];
            break;
        }
        else{
            i++;
        }
        
    }
    
    for(int i = 0; i < n; i++){
        
    }
    
    

    


}
