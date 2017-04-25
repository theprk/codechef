#include <iostream>
using namespace std;
//Author theprk
//problem link https://www.codechef.com/MARCH17/problems/BANDMATR/
//my solution on codechef https://www.codechef.com/viewsolution/12981701
int a[500][500];
int main() {
	int t;
	cin>>t;
	while(t--){int n,i,j,ct,b;
	    ct=0,b=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	    {cin>>a[i][j];
	    if(a[i][j]!=0)
	    ct++;}
	    if((ct-n)>0)
	    {ct-=n;
	    b++;}
	    for(i=n-1;i>0;i--){
	        if((ct-2*i)>0)
	        {ct-=2*i;
	        b++;}
	        else
	        break;
	    }if(ct>0)
	    b++;
	    if(b>0)
	    b--;
	    cout<<b<<endl;
	    
	}
	return 0;
}
