#include <iostream>
using namespace std;
 //by theprk 
 //problem link https://www.codechef.com/LTIME40/problems/LTM40AB/
 //my solution https://www.codechef.com/viewsolution/11608585
int main() {std::ios::sync_with_stdio(false);
    int t,flag,a,b,c,d,i,in,j;
long long ct;
	cin>>t;
	while(t--){flag=0;
	ct=0;
	    cin>>a>>b>>c>>d;
	    for(i=a;i<=b;i++){
	        if(i<d)
	        {
	            if(i<c)
	            in=d-c+1;
	            else
	            in=d-i;
	        }
	        else
	        break;
	        ct+=in;
	    }cout<<ct<<endl;
	}
	return 0;
}
