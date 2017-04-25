#include <iostream>
 
using namespace std;
 //Author theprk
 //problem link https://www.codechef.com/JAN17/problems/RESERVOI/
 //my solution on codechef https://www.codechef.com/viewsolution/12571444
char a[1000][1000];
 
int main() {int t,n,m,i,j,flag;
 
	cin>>t;
 
	while(t--)
 
	{
 
	    cin>>n>>m;
 
	   for(i=0;i<n;i++)
 
	   cin>>a[i];
 
	   for(i=0;i<n;i++)
 
	   {flag=0;
 
	       if(a[i][0]=='W' || a[i][m-1]=='W')
 
	   {
 
	       flag=1;
 
	       break;
 
	   }else
 
	       for(j=0;j<m;j++)
 
	       {if(a[i][j]=='W'){
 
	           if(a[i+1][j]=='A' || a[i][j+1]=='A' || a[i][j-1]=='A' || i==(n-1))
 
	           {
 
	               flag=1;
 
	               break;
 
	           }
 
	       }else
 
	           if(a[i][j]=='B'){
 
	           if(a[i+1][j]=='A' /*|| a[i+1][j]='W'*/)
 
	           {
 
	               flag=1;
 
	               break;
 
	           }
 
	           }
 
	       }if(flag==1)
 
	       break;
 
	   }if(flag==1)
 
	   cout<<"no"<<endl;
 
	   else
 
	   cout<<"yes"<<endl;
 
	}
 
	return 0;
 
}
