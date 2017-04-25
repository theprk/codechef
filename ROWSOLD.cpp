#include <iostream>
#include<cstring>
using namespace std;

 //Author theprk
//problem link https://www.codechef.com/APRIL17/problems/ROWSOLD/
//my solution on codechef https://www.codechef.com/viewsolution/13225715

int main() {ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{long long ct=0;
	  int  o=0,pickup=0,mov=0;
	  string s;
	    cin>>s;
	    int n=s.length();
	    if(s[n-1]=='1')
	    o++;
	    for(int i=n-2;i>=0;i--)
	    {
	        if(s[i]=='1')
	        {
	            if(s[i+1]=='0')
	            pickup++;
	            mov=n-1-o-i;
	            o++;
	            ct+=pickup;
	        ct+=mov;
	        }
	    }cout<<ct<<"\n";
	}
	return 0;
}
