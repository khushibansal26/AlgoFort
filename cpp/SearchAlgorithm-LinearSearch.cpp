/* Search Algorithm- Linear search  */

#include<iostream>
using namespace std;

int linearSearch(int key,int *arr,int imin,int imax){
    for(int i=imin;i<=imax;i++){
        if(arr[i]==key)
            return i;
            }
        return -1;
}

int main(){
    int*a=NULL;
    int num,key,position;
    cout<<"hw mny elements: ";
    cin>>num;
    a=new int; // if pgm crashes,use=> a=new int [num];
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    cout<<"Enter element to search: ";
    cin>>key;
    position=linearSearch(key,a,0,num-1);
    if(position==-1)cout<<"not found\n";
    else cout<<key <<" found at "<<"position : "<<position+1<<endl;

    return 0;
}

