#include <iostream>
#include<cstring>
using namespace std;
//Author theprk
//problem link https://www.codechef.com/LTIME43/problems/SUPVIL/
//my solution on codechef https://www.codechef.com/viewsolution/12378899
int main() {char s[16];
int t,n,i,l,su,v,flagv,flags;
	cin>>t;
	while(t--){flagv=flags=0;
	su=v=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>s;
	        l=strlen(s);
	        if(s[l-1]=='n' && s[l-2]=='a' && s[l-3]=='m')
	        su++;
	        else
	        v++;
	        if(su==(v+2) && flagv==0)
	        flags=1;
	        else
	        if(v==(su+3) && flags==0)
	        flagv=1;
	    }
	    if(flags==1)
	    cout<<"superheroes"<<endl;
	    else
	    if(flagv==1)
	    cout<<"villains"<<endl;
	    else
	    cout<<"draw"<<endl;
	}
	return 0;
}
