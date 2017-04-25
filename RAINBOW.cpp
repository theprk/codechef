#include <iostream>
using namespace std;

//Author theprk
//problem link https://www.codechef.com/COOK80/problems/RAINBOW/
//my solution on codechef https://www.codechef.com/viewsolution/13131952

int a[50][50];
bool b[50];
int main() {ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){a[0][0]=0; int count=0; bool flag=1;
	    int n,i,j,x,k,ct;
	    cin>>n;
	    for(i=0;i<n;i++)
	    b[i]=1;
	    for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	    cin>>a[i][j];
	    while(flag==1){flag=0;
	    for(i=0;i<n;i++)
	    {x=0; ct=0;
	    if(b[i]==1){
	        for(j=0;j<n;j++)
	    {
	        if(a[i][j]!=0 && ct==0)
	        {x=a[i][j];
	        ct++;}
	        if(a[i][j]!=0 && ct==1 && a[i][j]!=x)
	        ct++;
	    }if(ct<2)
	        {flag=1; b[i]=0;
	            for(k=0;k<n;k++)
	            a[k][i]=0;
	        }}if(flag==1)
	        break;
	    }}for(i=0;i<n;i++)
	    if(b[i]==1)
	    count++;
	    cout<<count<<"\n";
	}
	return 0;
}
