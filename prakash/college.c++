#include<iostream>
using namespace std;

int main(){
    int a,b,c,max;
    cout<<"enter three value "<<endl;
    cin>>a>>b>>c;
    // compare a and c 
    if(a>b){
    
        if(a>c){
          max=a;
            cout<<"max value a"<<a;
      }else{
         max=c;
         cout<<"max value c"<<c;
      }
    }else{
        // compare b and c
        if(b>c){
          max=b;
            cout<<"max value b"<<b; 
        }
        else{
          max=c;  
            cout<<"max value c"<<c; 
        }
    }
    return 0; 

}