#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
	int i;//power
    int m;
	int x,y;
	for(i=1;1;i++){
      m = pow(2,i);
	  if(m>=n)
	  break;
	}
	if(m==n){
       x= pow(2,i)-pow(2,(i-1));
	   cout<<x<<endl;
	}
	else if(m>n){
        x = n - pow(2,i-1)+1;
		y = pow(2,i-1) - pow(2,i-2);
		if(x>y)
		cout<<x<<endl;
		else
		cout<<y<<endl;
	}
    }
	return 0;
}
