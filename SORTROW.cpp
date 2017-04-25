#include <iostream>
#include<cstdlib>
using namespace std;
//Author theprk
//problem link https://www.codechef.com/MARCH17/problems/SORTROW/
//my solution on codechef https://www.codechef.com/viewsolution/12980898
int compare(const void *a,const void *b){
    return(*(int*)a-*(int*)b);
}
int main() {
	    int n,i,j;
	    cin>>n;
	    int **a=new int* [n];
	    for(i=0;i<n;i++)
	    a[i]=new int[n];
	    for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	    cin>>a[i][j];
	    for(i=0;i<n;i++)
	    qsort(a[i],n,sizeof(int),compare);
	    for(i=0;i<n;i++)
	   { for(j=0;j<n;j++)
	    cout<<a[i][j]<<" ";
	    cout<<endl;}
	return 0;
}
