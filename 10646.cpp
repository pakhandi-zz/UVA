//Author : pakhandi
//
//UVA solution : What is The Card?
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
	cin>>cases;
	wl(cases)
	{
		vector<string> v;
		string str1;
		fl(i,0,52)
		{
			cin>>str1;
			v.PB(str1);
		}
		int ind=0, y=0, x=0;
		fl(i,0,3)
		{
			string temp=v[ind];
			char ch=temp[0];
			if(ch>='A')
				x=10;
			else
			{
				int val=int(ch-'0');
				x=val;
			}
			y+=x;
			ind+=(10-x)+1;
		}
		cout<<"Case "<<k<<": ";k++;
		cout<<v[ind+y-1];
		nline;
	}
	return 0;
}

