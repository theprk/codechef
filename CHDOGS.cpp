#include <iostream>
#include<iomanip>
using namespace std;
 //author theprk
 //problem link https://www.codechef.com/OCT16/problems/CHDOGS/
 //my solution https://www.codechef.com/viewsolution/11719144
int main() {float v,s,x,y;
int a,t;
	cin>>t;
	while(t--){
	    cin>>a>>v;
	    x=2*a;
	    y=3*v;
	    s=x/y;
	    if(s<0.0000001)
	    cout<<"0.0000001"<<endl;
	    else
	     cout<<fixed<<setprecision(7)<<s<<endl;
	   
	}
	return 0;
}
 
