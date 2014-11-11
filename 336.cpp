//Author : pakhandi
//
//UVA Solution : A Node Too Far
using namespace std;

#include<bits/stdc++.h>

#define wl(n) while(n--)
#define fl(i,a,b) for(i=a; i<b; i++)
#define rev(i,a,b) for(i=a; i>=b; i--)
#define scan(n) scanf("%d", &n)
#define scans(s) scanf("%s", s)
#define scanc(c) scanf("%c", &c)
#define scanp(f) scanf("%f", &f)
#define print(n) printf("%d\n", n)
#define prints(s) printf("%s\n", s)
#define printc(c) printf("%c\n", c)
#define printp(f) printf("%f\n", f)
#define nline printf("\n")
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define MOD 1000000007
#define ll long long int
#define u64 unsigned long long int

#define PB push_back
#define SZ size

map<int,int> mark_visited;

void BFS(int ini, map<int, vector<int> > graph)
{
	int i;
	queue<int> qu;
	qu.push(ini);
	mark_visited[ini]=0;
	while(!qu.empty())
	{
		int frnt=qu.front();
		qu.pop();
		int limit=graph[frnt].SZ();
		fl(i,0,limit)
		{
			int target=graph[frnt][i];
			//cout<<target; nline;
			if(!mark_visited.count(target))
			{
				mark_visited[target]=1+mark_visited[frnt];
				qu.push(target);
			}
		}
	}
}

int main()
{
	//freopen("C:\\Users\\DELL\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\DELL\\Desktop\\output.txt","w",stdout);
	int i, j, cases, k=0;
	int n;
	while(scan(n) && n)
	{
		map<int, vector<int> > graph;
		int a, b, ttl, ini;
		fl(i,0,n)
		{
			scan(a);  scan(b);
			graph[a].PB(b);
			graph[b].PB(a);
		}
		
		while(scanf("%d %d", &ini, &ttl) && (ini!=0 || ttl!=0))
		{
			int ans=0;
			k++;
			mark_visited.clear();
			BFS(ini, graph);
			map<int,int>::const_iterator it;
			it=mark_visited.begin();
			for( ; it!=mark_visited.end(); it++)
			{
				if(it->second>ttl)
					ans++;
			}
			//Case 1: 5 nodes not reachable from node 35 with TTL = 2.
			//Case 1: 5 nodes not reachable from node 35 with TTL = 2.

			ans+=graph.SZ()-mark_visited.SZ();
			cout<<"Case "<<k<<": "<<ans<<" nodes not reachable from node "<<ini<<" with TTL = "<<ttl<<".";
			nline;
		}
		
	}
	return 0;
}

