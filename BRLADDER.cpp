#include <iostream>
using namespace std;

//Author theprk
//problem link https://www.codechef.com/LTIME46/problems/BRLADDER/
//my solution on codechef https://www.codechef.com/viewsolution/13160041
 
int main() {ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){int x,y,a,b,flag;
	flag=0;
	    cin>>x>>y;
	    if(x<y){
	      a=x;
	      b=y;
	    }
	    else
	    {
	        a=y;
	        b=x;
	    }
	    if(a%2!=0)
	    {
	        if(b==(a+1) || b==(a+2))
	        flag=1;
	    }
	    else{
	        if(b==(a+2))
	        flag=1;
	    }
	    if(flag==1)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	    }
	return 0;
}
