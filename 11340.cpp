//Author : pakhandi
//
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
	char str1[1000006];
	map<char,int> mp;
	map<char,int>::const_iterator it;
	scan(n);

	wl(n)
	{
		int m;
		scan(m);
		mp.clear();
		fl(i,0,m)
		{
			char ch; int x;
			cin>>ch>>x;
			mp[ch]=x;
		}
		int l;
		scan(l);
		unsigned long long ans=0;
		getchar();
		fl(i,0,l)
		{
			gets(str1);
			int limit=strlen(str1);
			fl(j,0,limit)
			{
				ans+=mp[str1[j]];
			}
		}
		
		printf("%.2lf", ans / 100.0);
		cout<<"$";
		nline;
		
		/*if(ans<10)
			cout<<"0.0"<<ans<<"$";
		if(ans<100)
			cout<<"0."<<ans<<"$";
		else
		{
			int f=ans/100;
			int b=ans%100;
			cout<<f<<"."<<b<<"$";
		}*/
		//nline;
		
	}
	
	return 0;
}

