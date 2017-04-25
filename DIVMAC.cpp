#include <iostream>
 
#include <cmath>
 
#include<cstdio>
 
using namespace std;
 
int b[1000000],a[100000];
 
 //by theprk
 //problem link https://www.codechef.com/SEPT16/problems/DIVMAC/
 //my solution https://www.codechef.com/viewsolution/11481923
 int prime(int n){
 
    if (n==0 || n==1) return n;
 
    if (n%2==0) return 2;
 
    if (n%3==0) return 3;
 
    if (n%5==0) return 5;
 
    for (int i = 7; (i*i) <= n; i += 30 ) {
 
        if ( n % i == 0 ) {
 
            return i;
 
        }
 
        if ( n % ( i+4 ) == 0) {
 
            return i+4;
 
        }
 
        if ( n % ( i+6 ) == 0) {
 
            return i+6;
 
        }
 
        if ( n % ( i+10 ) == 0) {
 
            return i+10;
 
        }
 
        if ( n % ( i+12 ) == 0) {
 
            return i+12;
 
        }
 
        if ( n % ( i+16 ) == 0) {
 
            return i+16;
 
        }
 
        if ( n % ( i+22 ) == 0) {
 
            return i+22;
 
        }
 
        if ( n % ( i+24 ) == 0) {
 
            return i+24;
 
        }
 
    }
 
    return n;
 
}
 
inline int max(int p, int q){
 
    if (p>q) return p;
 
    else return q;
 
}
 
int readint () {
 
	bool minus = false;
 
	int result = 0;
 
	char ch;
 
	ch = getchar();
 
	while (true) {
 
		if (ch == '-') break;
 
		if (ch >= '0' && ch <= '9') break;
 
		ch = getchar();
 
}
 
	if (ch == '-') minus = true; else result = ch-'0';
 
	while (true) {
 
		ch = getchar();
 
		if (ch < '0' || ch > '9') break;
 
		result = result*10 + (ch - '0');
 
	}
 
	if (minus)
 
		return -result;
 
	else
 
		return result;
 
}
 
 
 
 
 
inline int Mid(int s, int e) {  return s + (e -s)/2;  }
 
 
int getmax(int *st, int s, int e, int l, int r, int i)
 
{
if(st[i]==1)
return 1;
 
 
    if (l <= s && r >= e)
 
        return st[i];
 
 
    if (e < l || s > r)
 
        return 0;
 
 
    int mid = Mid(s, e);
 
    return max(getmax(st, s, mid, l, r, 2*i+1),
 
           getmax(st, mid+1, e, l, r, 2*i+2));
 
}
 
 
int update(int *st, int s, int e, int l, int r, int i)
 
{
if(st[i]==1)
return st[i];
if (e < l || s > r)
 
        return st[i];
 
 
if(s==e){
 
        a[b[i]]/=st[i];
 
        st[i]=prime(a[b[i]]);
 
        return st[i];
 
    }
 
        
 else{
 
    int mid = Mid(s, e);
 
    st[i]= max(update(st, s, mid, l, r, 2*i+1),
 
    update(st,mid+1, e, l, r, 2*i+2));
 
           //st[i]=max(st[i],up);
 
     return st[i];
 
 }
 
}
 
 
 
int constructST(int s, int e, int *st, int i)
 
{
 
    if (s == e)
 
        {st[i] = prime(a[s]);
 
        b[i]=s;
 
        return st[i];}
 
 
    int mid = Mid(s, e);
 
    st[i] =  max(constructST(s, mid, st, i*2+1),
 
              constructST(mid+1, e, st, i*2+2));
 
    return st[i];
 
}
 
 
 
 
int *construct(int n)
 
{
 
 
    int h = (int)(ceil(log2(n))); 
 
 
    int max_size = 2*(int)pow(2, h) -1;
 
    int *st = new int[max_size];
 
 
    constructST(0, n-1, st, 0);
 
 return st;
 
}
 
int main()
 
{ios_base::sync_with_stdio(false);cin.tie(0);
    int t,n,m,i,j,*st,l,r,z,ty;
 
    t=readint();
 
    while(t--){
 
        n=readint();
 
        m=readint();
 
        for(i=0;i<n;i++)
 
        a[i]=readint();
 
        st=construct(n);
 
        for(i=0;i<m;i++){
 
            ty=readint();
 
            l=readint();
 
            r=readint();
 
            if(ty==0)
 
                z= update(st,0,n-1,l-1,r-1,0);
 
                
                
                else
 
            if(ty==1)
 
            cout<<getmax(st,0,n-1,l-1,r-1,0)<<" ";
 
        }cout<<"\n";
 
        
    }
 
    return 0;
 
}
