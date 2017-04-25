#include <iostream>
using namespace std;
 //AUthor theprk
 //problem link https://www.codechef.com/LTIME41/problems/BOUQUET/
 //my solution on codechef https://www.codechef.com/viewsolution/11972424
int main() {int t,i;
long long int a[6],mg,my,mr,og,oy,orr,pg,py,pr,max;
	cin>>t;
	while(t--){
	    cin>>mg>>my>>mr>>og>>oy>>orr>>pg>>py>>pr;
	    a[0]=mg+my+mr;
	    a[1]=og+oy+orr;
	    a[2]=pg+py+pr;
	    a[3]=mg+og+pg;
	    a[4]=my+oy+py;
	    a[5]=mr+orr+pr;
	    max=0;
	    for(i=0;i<6;i++)
	    {
	        if(a[i]>max)
	        max=a[i];
	    }if(max%2==0 && max!=0)
	    max--;
	    cout<<max<<endl;
	    
	}
	return 0;
}
