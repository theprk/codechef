#include <iostream>
using namespace std;

//Author theprk
//problem link https://www.codechef.com/COOK81/problems/ABREPEAT/
//my solution on codechef https://www.codechef.com/viewsolution/13378489

int a[100001];
int main() {ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{string s;
	    int n,i,j,x;
	    unsigned long long sum,c,ct,k;
	    cin>>n>>k;
	    cin>>s;
	    x=0;
	    for(i=n-1;i>=0;i--)
	    {
	        if(s[i]=='b')
	        x++;
	        a[i]=x;
	    }c=a[0];
	    sum=0;
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='a')
	        {ct=a[i];
	        sum+=c*k*(k-1)/2;
	        sum+=ct*k;
	        }
	    }cout<<sum<<"\n";
	}
	return 0;
}
