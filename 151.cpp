//Author : pakhandi
//
//UVA solution : Power Crisis
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
	int i, j, cases;
	int n, k;
	cin>>n;
	while(n)
	{
		for(i=1;i<100;i++)
		{
			vector<int> v;
			v.clear();
			fl(j,1,n+1)
				v.PB(j);
			int ind=0;
			while(v.SZ()>1)
			{
				v.erase(v.begin()+ind);
				ind+=i-1;
				if(ind>=v.SZ())
					ind=ind%v.SZ();
			}
			if(v[0]==13)
				break;
		}
		cout<<i;
		cin>>n;
		nline;
	}
	return 0;
}


