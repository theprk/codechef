#include <iostream>
#include<cstring>
using namespace std;

//Author theprk
//problem link https://www.codechef.com/APRIL17/problems/DISHLIFE/
//my solution on codechef https://www.codechef.com/viewsolution/13219918

int pool[100000];
int p[100000];
//int **a;
bool isredundant(int **a,int n)
{int i,j;
bool flag;
  for(i=0;i<n;i++)
  {flag=0;
      for(j=0;j<p[i];j++)
      {
          if(pool[a[i][j]]<=1)
          flag=1;
      }if(!flag)
      return true;
  }return false;
}
bool notcomplete(int k)
{
    for(int i=0;i<k;i++)
    {
        if(pool[i]==0)
        return true;
    }return false;
}
int main() {ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
    int t;
	cin>>t;
	while(t--)
	{int n,k,i,j,z;
	    cin>>n>>k;
	    /*for(i=0;i<k;i++)
	    pool[i]=0;*/
	    memset(pool,0,k*sizeof(int));
	    int **a=new int* [n];
	    for(i=0;i<n;i++)
	    {
	        cin>>p[i];
	        a[i]=new int[p[i]];
	        for(j=0;j<p[i];j++)
	        {
	            cin>>z;
	            a[i][j]=z-1;
	            pool[a[i][j]]++;
	        }
	    }if(notcomplete(k))
	    cout<<"sad"<<"\n";
	    else
	    if(isredundant(a,n))
	    cout<<"some"<<"\n";
	    else
	    cout<<"all"<<"\n";
	}
	return 0;
}
