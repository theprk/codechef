#include <iostream>
using namespace std;
 //by theprk
 //problem link https://www.codechef.com/COOK74/problems/TALAZY/
 //my solution https://www.codechef.com/viewsolution/11557444
int main() {int t,n,b,x,y;
long long m,ti;
	cin>>t;
	while(t--){ti=0;
	    cin>>n>>b>>m;
	    x=n;
	    while(x){
	       if(x%2==0)
	       y=x/2;
	       else
	       y=(x+1)/2;
	       x-=y;
	       ti+=y*m;
	       if(x!=0)
	       ti+=b;
	       m*=2;
	       
	    }cout<<ti<<endl;
	}
	return 0;
}
