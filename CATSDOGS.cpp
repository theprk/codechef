#include <iostream>
using namespace std;
 //Author theprk
 //problem link https://www.codechef.com/JAN17/problems/CATSDOGS/
 //my solution on codechef https://www.codechef.com/viewsolution/12447097
int main() {int t;
long long int c,d,l,r;
	cin>>t;
	while(t--)
	
	{
	   cin>>c>>d>>l;
	   r= (c<=2*d) ? 0 : c-2*d;
	   if(l>=4*(d+r) && l<=4*(c+d) && l%4==0)
	   cout<<"yes"<<endl;
	   else
	   cout<<"no"<<endl;
	}
	return 0;
}
