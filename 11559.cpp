//Author : pakhandi
//
//UVA solution : Event Planning
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

int main()
{
	//freopen("C:\\Users\\DELL\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\DELL\\Desktop\\output.txt","w",stdout);
	int i, j, cases, k=1;
	int n, b, h, w;
	while(cin>>n>>b>>h>>w)
	{
		//cout<<n<<b<<h<<w;
		int p;
		int cost=INT_MAX;
		fl(i,0,h)
		{
			cin>>p;
				fl(k,0,w)
				{
					int temp;
					cin>>temp;
					if(temp>=n)
					{
						cost=min(cost,p*n);
						//cout<<p*n<<" ";
						//cout<<cost<<" ";
					}
				}
		}
		if(cost<=b)
			cout<<cost;
		else
			cout<<"stay home";
		nline;
	}
	return 0;
}

