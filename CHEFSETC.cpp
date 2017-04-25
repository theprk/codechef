#include <iostream>
using namespace std;
 //Author theprk
 //problem link https://www.codechef.com/COOK77/problems/CHEFSETC/
 //my solution on codecehf https://www.codechef.com/viewsolution/12298550
int main() {
	int t,a[4],i,j,k,flag;
	cin>>t;
	while(t--)
	{flag=0;
	   for(i=0;i<4;i++) 
	   cin>>a[i];
	   for(i=0;i<4;i++)
	   {
	       for(j=i;j<4;j++){
	           k=a[i]+a[j];
	           if(k==0){
	               flag=1;
	               break;
	           }
	       }if(flag==1)
	       break;
	   }if(a[0]+a[1]+a[3]==0 || a[0]+a[2]+a[3]==0)
	   flag=1;
	   if(a[0]+a[1]+a[2]==0 || a[1]+a[2]+a[3]==0 || a[0]+a[1]+a[2]+a[3]==0)
	   flag=1;
	   if(flag==1)
	   cout<< "Yes"<<endl;
	   else
	   cout<<"No"<<endl;
	}
	return 0;
}
