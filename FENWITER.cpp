#include <iostream>
#include<cstring>
using namespace std;
 //author theprk
 //problem link https://www.codechef.com/OCT16/problems/FENWITER/
 //my solution https://www.codechef.com/viewsolution/11842393
int main() {int ct,c,d,flag,n,t,i;
char l1[1001],l2[1001],l3[1001],l4[1001];
	cin>>t;
	while(t--){c=d=ct=flag=0;
	    cin>>l1>>l2>>l3>>n;
	    
	    strcpy(l4,l2);
	    for(i=strlen(l3)-1;i>=0;i--){
	        if(l3[i]=='0')
	        {
	            flag=1;
	            l3[i]='1';
	            break;
	        }
	        else if(l3[i]=='1')
	        l3[i]='0';
	    }
	    	    if(flag==0){for(i=strlen(l2)-1;i>=0;i--){
	        if(l2[i]=='0')
	        {
	            flag=1;
	            l2[i]='1';
	            break;
	        }
	        else if(l2[i]=='1')
	        l2[i]='0';
	    }
	        
	    }
	    if(flag==0){for(i=strlen(l1)-1;i>=0;i--){
	        if(l1[i]=='0')
	        {
	            flag=1;
	            l1[i]='1';
	            break;
	        }
	        else if(l1[i]=='1')
	        l1[i]='0';
	    }
	        
	    }
	    for(i=0;i<strlen(l1);i++)
	    if(l1[i]=='1')
	   ct++;
	    for(i=0;i<strlen(l2);i++)
	    if(l2[i]=='1')
	    c++;
	    for(i=0;i<strlen(l3);i++)
	    if(l3[i]=='1')
	    ct++;
	    if(c>0)
	    for(i=0;i<strlen(l4);i++)
	    if(l4[i]=='1')
	    d++;
	    ct=ct+c+(n-1)*d;
	    if(ct==0)
	    cout<<1<<endl;
	    else
	    cout<<ct<<endl;
	    
	}
	return 0;
}
