#include<iostream>
using namespace std;

int main(){
    float num1,num2,r;
    char z;

    cout <<"enter value num1"<<endl;
    cin>>num1;

    cout <<"enter opretor:+,-,*,/,%:";
    cin >>z;

    cout <<"enter value num2"<<endl;
    cin >>num2;
    if(z=='+')
              r = num1 + num2;
        else if (z=='-')
        {
            r = num1 - num2;
        }
        else if (z=='*')
        {
            r = num1 * num2;
        }
        else if (z=='/')
        {
            r = num1 / num2;
        } 
        else if (z=='%')
        {
                r =  num1 /num2;
                cout<<r; 
        }
        
           cout << num1 << z << num2 <<endl <<"-----" << endl <<'=' <<r;
        
         
    return 0;
}