#include <iostream>
using namespace std;
 //Author theprk
 //problem link https://www.codechef.com/NOV16/problems/CPERM/
 //my solution on codechef https://www.codechef.com/viewsolution/12045872
int main() {int t,n,m;
long long s,x;
	cin>>t;
	while(t--){s=2;
	    cin>>n;
	    m=n-2;
	    x=2;
	    while(m>0){
	        if(m & 1)
	        s=(s*x)%1000000007;
	        m>>=1;
	        x=(x*x)%1000000007;
	    }s-=2;
	    cout<<s<<endl;
	}
	return 0;
}
