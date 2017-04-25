#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;
 
int main() {int t,i,l,m,flag;
char *a;
	cin>>t;
	while(t--)
	{flag=0;
	a=new char[12346];
	    cin>>a;
	    l=strlen(a);
	   m =ceil(float(l)/2);
	    for(i=0;i<m;i++)
	    {
	        if(a[i]!=a[l-i-1])
	        {
	            if(a[i]!='.' && a[l-i-1]!='.'){
	                flag=1;
	                break;
	            }
	            
	                else
	                if(a[i]=='.')
	                a[i]=a[l-i-1];
	                else
	                if(a[l-i-1]=='.')
	                a[l-i-1]=a[i];
	            
	        }else
	            if(a[i]=='.' && a[l-i-1]=='.')
	                a[i]=a[l-i-1]='a';
	    }if(flag==1)
	        cout<<-1<<endl;
	        else
	        cout<<a<<endl;
	        delete []a;
	}
	return 0;
}
