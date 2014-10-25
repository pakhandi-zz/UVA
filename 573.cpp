//Author : pakhandi
//
//UVA solution : The Snail
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
	double h, u, d, f;
	cin>>h>>u>>d>>f;
	while(h)
	{
		double curr=u;
		double g=((1.0*f)/100.0)*(1.0*u);
		int flag=0;
		for( i=1; ; )
		{
			if(curr-d<0)
			{
				flag=-1;
				break;
			}
			if(curr>h)
			{
				flag=1;
				break;
			}
			i++;
			curr-=d;
			if(curr<=0)
			{
				flag=-1;
				break;
			}
			u=u-g;
			if(u<0)
				u=0;
			curr=(curr+u);
		}
		if(flag==1)
			cout<<"success on day "<<i;
		else
			cout<<"failure on day "<<i;
		nline;
		cin>>h>>u>>d>>f;
	}
	return 0;
}

