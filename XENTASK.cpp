#include <iostream>
using namespace std;
//Author theprk
//problem link https://www.codechef.com/MARCH17/problems/XENTASK/
//my solution on codechef https://www.codechef.com/viewsolution/12977742
int a[20001],b[20001];
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,i,x,y;
	    x=0;
	    y=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    cin>>b[i];
	    
	    for(i=0;i<n;i++)
	    {
	        if(i%2==0){
	            x+=a[i];
	            y+=b[i];
	        }
	        else
	        {
	            x+=b[i];
	            y+=a[i];
	        }
	    }
	   x<y ? cout<<x : cout<<y;
	    cout<<endl;
	}
	return 0;
}
