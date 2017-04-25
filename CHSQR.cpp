#include <iostream>
using namespace std;
 //Author theprk
 //problem link https://www.codechef.com/NOV16/problems/CHSQR/
 //my solution on codechef https://www.codechef.com/viewsolution/12038530
int main() {int n,m,k,t,i,j;
	cin>>t;
	while(t--){
	    cin>>n;
	    m=n/2+1;
	    for(i=0;i<n;i++){
	        for(j=0;j<n;j++){
	            if((i+j)<m)
	            k=m-i-j;
	            else
	            k=m+n-i-j;
	            if(k<=0)
	            k+=n;
	            cout<<k<<" ";
	        }cout<<endl;
	    }
	}
	return 0;
}
