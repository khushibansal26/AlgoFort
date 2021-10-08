#include<iostream>
using namespace std;

int main(){
    int num1,num2,hcf=0;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Factors of "<<num1<<": ";
    for(int i=1;i<=num1;i++){
        if(num1%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<"Factors of "<<num2<<": ";
    for(int i=1;i<=num2;i++){
        if(num2%i==0){
            cout<<i<<" ";
        }
    }
    fflush(stdin);
    int min = (num1<num2)?num1:num2;
    for(int i=0;i<=min;i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;
        }
    }
    cout<<hcf;
    return 0;
}
