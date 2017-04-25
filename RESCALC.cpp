#include <iostream>
using namespace std;
//by theprk
//problem link https://www.codechef.com/SEPT16/problems/RESCALC/
//my solution https://www.codechef.com/viewsolution/11383749
int main() {
    int *a,**c,n,t,i,j,k,p,q,flag,ct,max;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	 a=new int [n];
	 c=new int* [n];
	 for(i=0;i<n;i++){
	     cin>>a[i];
	     c[i]=new int [a[i]];
	     for(j=0;j<a[i];j++)
	     cin>>c[i][j];
	 }
	 for(i=0;i<n;i++){p=a[i];flag=0;
	 while(flag==0){ct=0;flag=1;
	 for(k=1;k<7;k++)
	 {
	    for(j=0;j<p;j++)
	    {
	        if(c[i][j]==k){flag=0;
	            ct++;
	            c[i][j]=0;
	            break;
	        }
	    }
	 }if(ct==4)
	 a[i]+=1;
	 else
	 if(ct==5)
	 a[i]+=2;
	 else
	 if(ct==6)
	 a[i]+=4;
	 }    
	 }max=0;
	 for(i=0;i<n;i++)
	 {if(a[i]>max){
	 max=a[i];
	 q=i;}
	     
	 }ct=0;
	 for(i=0;i<n;i++){
	     if(a[i]==max)
	     ct++;
	 }
	 if(ct>1)
	 cout<<"tie";
	 else
	 if(q==0)
	 cout<<"chef";
	 else
	 cout<<q+1;
	 cout<<endl;
	 	}
	return 0;
}
