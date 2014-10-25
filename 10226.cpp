//Author : pakhandi
//
//UVA solution : Hardwood Species
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
	int n;
	char str1[100];
	map<string,int> mp;
	map<string,int>::const_iterator it;
	scan(n);
	n++;
	int nn=n;
	getchar();
	wl(n)
	{
		mp.clear();
		int c=0;
		while(gets(str1) && *str1)
		{
			if(str1[0]=='\0')
				break;
			mp[str1]++;
			c++;
		}
		double pre=100.0/(1.0*c);
		for(it=mp.begin(); it!=mp.end(); it++)
		{
			cout<<it->first;
			cout<<" ";
			double ans=(1.0*(it->second))*pre;
			printf("%0.4lf",ans);
			nline;
		}
		if(n==0)
			break;
		if(nn!=n+1 && n!=0)
			puts("");
	}
	//getchar();
	
	return 0;
}

