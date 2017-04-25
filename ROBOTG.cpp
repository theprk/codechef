#include <iostream>
#include<cstring>
using namespace std;
//Author theprk
//problem link https://www.codechef.com/COOK80/problems/ROBOTG/
//my solution on codechef https://www.codechef.com/viewsolution/13128140
char s[10];
int main() {ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n,m,cr,cu,i,maxr,minr,maxu,minu,cn,cm;
	    cin>>n>>m;
	    cr=0;
	    cu=0;
	    minr=0;
	    maxr=0;
	    minu=0;
	    maxu=0;
	    cin>>s;
	    for(i=0;i<strlen(s);i++){
	       if(s[i]==85)
	       {cu++;
	       if(cu>maxu)
	       maxu=cu;}
	       else
	       if(s[i]==68)
	       {cu--;
	       if(cu<minu)
	       minu=cu;}
	       else
	       if(s[i]==82)
	       {cr++;
	       if(cr>maxr)
	       maxr=cr;}
	       else
	       if(s[i]==76)
	       {cr--;
	       if(cr<minr)
	       minr=cr;}
	    }
	    cn=maxu-minu;
	    cm=maxr-minr;
	    if(cn<n && cm<m)
	    cout<<"safe";
	    else
	    cout<<"unsafe";
	    cout<<"\n";
	}
	return 0;
}
