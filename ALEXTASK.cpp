#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;
//Author theprk
//problem link https://www.codechef.com/NOV16/problems/ALEXTASK/
//my solution on codechef https://www.codechef.com/viewsolution/12029146
int gcd(int a,int b){int temp;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }return a;
}
int main() {ios_base::sync_with_stdio(false);cin.tie(0);
    int t,flag,i,j,n,a[500];
long long min,h;
	cin>>t;
	while(t--){min=LLONG_MAX; flag=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++){
	        h=((long long)a[i]*a[j])/gcd(a[i],a[j]);
	        if(min-h>0)
	        min=h;
	    }
	}cout<<min<<"\n";
	}
	return 0;
}
