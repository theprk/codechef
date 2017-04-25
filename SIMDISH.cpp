#include <iostream>
using namespace std;

//Author theprk
//problem link https://www.codechef.com/APRIL17/problems/SIMDISH/
//my solution on codechef https://www.codechef.com/viewsolution/13215261

int main() {
	int t;
	cin>>t;
	while(t--){int i,j,ct=0;
	    string a[4];
	    string b[4];
	    for(i=0;i<4;i++)
	   cin>>a[i];
	   for(i=0;i<4;i++)
	   cin>>b[i];
	   for(i=0;i<4;i++)
	   for(j=0;j<4;j++)
	   {
	       if(a[i]==b[j])
	       {ct++;
	       break;}
	   }
	   if(ct>=2)
	   cout<<"similar"<<"\n";
	   else
	   cout<<"dissimilar"<<"\n";
	}
	return 0;
}
