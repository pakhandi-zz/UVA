//Author : pakhandi
//
//UVA solution : Beat the Spread
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
	cin>>n;
	wl(n)
	{
		int a, b;
		cin>>a>>b;
		if(b>a)
		{
			cout<<"impossible";
		}
		else if((a-b)%2==0)
		{
			cout<<max((a-b)/2,a-((a-b)/2))<<" "<<min((a-b)/2,a-((a-b)/2));
		//	nline;
		}
		else
			cout<<"impossible";
		nline;
	}
	
	return 0;
}

