/* Search Algorithm- Binary search  */

/*Note: used only for a SORTED ARRAY*/

#include<iostream>
using namespace std;

int binarySearch(int key,int *arr,int imin,int imax){
   int imid;
   while(imin<=imax){
        imid=(imin+imax)/2;
        if(arr[imid]==key)
            return imid;
        else if(key>arr[imid]){
            imin=imid+1;
        }
        else{
            imax=imid-1;
        }
    }
    return -1;
}

int main()
{
    int num,key,loc;
    cout<<"hw mny elements: ";
    cin>>num;
    int *a=new int[num];
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    cout<<"Enter element to search: ";
    cin>>key;
    loc=binarySearch(key,a,0,num-1);

    if(loc==-1)
        cout<<"not found\n";
    else cout<<key<<" found at position: "<<loc+1<<endl;

    return 0;
}


