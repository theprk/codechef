#include <iostream>
#include<cstring>
using namespace std;
 
int main() {int t,i,c0,c1;
char *a;
	cin>>t;
	while(t--)
	{c0=c1=0;
	    a=new char[100001];
	    cin>>a;
	    for(i=0;i<strlen(a);i++)
	    {
	        if(a[i]=='0')
	        c0++;
	        else
	        c1++;
	    }
	    if(c0==1 || c1==1)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	    delete []a;
	}
	return 0;
}
