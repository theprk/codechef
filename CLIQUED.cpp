#include <bits/stdc++.h>
using namespace std;

//Author theprk
//problem link https://www.codechef.com/APRIL17/problems/CLIQUED/
//my solution on codechef https://www.codechef.com/viewsolution/13285809

bool pool[100000];
#define MAX 1000000000000000
typedef pair<long long,long long> ipair;
int k,x;
class Graph
{
    int n;
    list<pair<int,int> > *adjacent;
    public: Graph(int n);
    void addedge(int a,int b, int wt);
    void dijkstra(int s);
    void dijkstra1(int s);
};
Graph::Graph(int n){
    this->n=n;
    adjacent=new list<pair<int,int> > [n];
}
void Graph::addedge(int a,int b,int wt)
{
    adjacent[a].push_back(make_pair(b,wt));
    adjacent[b].push_back(make_pair(a,wt));
}
void Graph:: dijkstra(int s)
{int a,b,j,w;
bool flag=0;
memset(pool,0,n);
    priority_queue<ipair, vector<ipair>, greater<ipair> > p;
    vector <long long> di(n,MAX);
    p.push(make_pair(0,s));
    di[s]=0;
    while(!p.empty())
    {
        a=p.top().second;
        p.pop();
        if(pool[a])
        continue;
        else
        pool[a]=true;
        
        
        if(a<k && !flag){
            for(j=0;j<k;j++)
            if(di[j]>di[a]+x)
            {di[j]=di[a]+x;
            if(!adjacent[j].empty())
                p.push(make_pair(di[j],j));
            } flag=1;
        }
        list<pair<int,int> >::iterator i;
        for(i=adjacent[a].begin(); i!=adjacent[a].end(); i++)
        {b=(*i).first;
        w=(*i).second;
        if(di[b]>di[a]+w)
        {
          di[b]=di[a]+w;
          p.push(make_pair(di[b],b));
        }
            
        }
    }
    for(j=0;j<n;j++)
    cout<<di[j]<<" ";
}
void Graph:: dijkstra1(int s)
{int a,b,j,w;
memset(pool,0,n);
    priority_queue<ipair, vector<ipair>, greater<ipair> > p;
    vector <long long> di(n,MAX);
    p.push(make_pair(0,s));
    for(j=0;j<k;j++)
    {di[j]=x;
    if(!adjacent[j].empty())
                p.push(make_pair(di[j],j));
    }
    di[s]=0;
    while(!p.empty())
    {
        a=p.top().second;
        p.pop();
        if(pool[a])
        continue;
        else
        pool[a]=true;
        
        list<pair<int,int> >::iterator i;
        for(i=adjacent[a].begin(); i!=adjacent[a].end(); i++)
        {b=(*i).first;
        w=(*i).second;
        if(di[b]>di[a]+w)
        {
          di[b]=di[a]+w;
          p.push(make_pair(di[b],b));
        }
            
        }
    }
    for(j=0;j<n;j++)
    cout<<di[j]<<" ";
}
int main() {ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
//	    cout<<"testcase "<<t<<endl;
	    int n,m,s,u,v,w,i;
	    cin>>n>>k>>x>>m>>s;
	    Graph g(n);
//	    cout<<"input taken"<<endl;
	    s--;
	    for(i=0;i<m;i++)
	    {
	        cin>>u>>v>>w;
	        g.addedge(u-1,v-1,w);
	    }
//	    cout<<"starting dijkstra\n";
if(s<k)
g.dijkstra1(s);
else
	    g.dijkstra(s);
//	    cout<<"fisinshed dijkstra\n";
	    cout<<"\n";
	}
	return 0;
} 
