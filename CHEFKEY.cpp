#include <iostream>
using namespace std;
 //author theprk
 //problem link https://www.codechef.com/OCT16/problems/CHEFKEY/
 //my solution https://www.codechef.com/viewsolution/11715657
int main() {int t,ct,n,m,c,i,x,y;
	cin>>t;
	while(t--){ct=0;
	    cin>>n>>m>>c;
	    if(m<n){
	        x=m;
	        y=n;
	    }
	    else{
	        x=n;
	        y=m;
	    }
	    
	    for(i=1;i<=x;i++){
	        if(c%i==0 && c/i<=y)
	        ct++;
	    }
	    cout<<ct<<endl;
	}
	return 0;
}
