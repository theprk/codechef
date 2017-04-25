#include <iostream>
#include<cstdlib>
using namespace std;
//Author theprk
//problem link https://www.codechef.com/MARCH17/problems/EXTRAN/
//my solution on codechef https://www.codechef.com/viewsolution/12980518

int ar[100001];
int compare(const void *a,const void *b){
    return(*(int*)a-*(int*)b);
}
int main() {
	int t;
	cin>>t;
	while(t--){int n,i,c=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    cin>>ar[i];
	    qsort(ar,n,sizeof(int),compare);
	    if((ar[1]-ar[0])!=1)
	    c=ar[0];
	    else
	    if((ar[n-1]-ar[n-2])!=1)
	    c=ar[n-1];
	    else
	    for(i=1;i<n;i++){
	        if((ar[i]-ar[i-1])!=1)
	        {
	            c=ar[i];
	            break;
	        }
	    }cout<<c<<endl;
	}
	return 0;
}
