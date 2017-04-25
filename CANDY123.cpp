#include <iostream>
using namespace std;

//Author theprk
//problem link https://www.codechef.com/COOK81/problems/CANDY123/
//my solution on codechef https://www.codechef.com/viewsolution/13379736

int main() {ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{int a,b,l,m,i,flag;
	cin>>a>>b;
	l=0; m=0;
	for(i=0;i<1500;i++)
	{
	    if(l<=a)
	    {
	        l+=(1+2*i);
	    }if(l>a) {
	        flag=1;
	        break;
	    }
	    if(m<=b)
	    {
	        m+=(2+2*i);
	    }
	    if(m>b){
	        flag=2;
	        break;
	    }
	}
	  if(flag==2)
	  cout<<"Limak\n";
	  else
	  cout<<"Bob\n";
	}
	return 0;
}
