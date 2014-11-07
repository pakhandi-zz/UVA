//Author : pakhandi
//
//UVA solution : Parenthesis Balance
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
	scan(cases);
	getc(stdin);
	wl(cases)
	{
		char str1[200];
		stack<char> st;
		//st.clear();
		gets(str1);
		//puts(str1);
		int limit=strlen(str1);
		int flag=1;
		fl(i,0,limit)
		{
			if(str1[i]=='(' || str1[i]=='[')
			{
				st.push(str1[i]);
				continue;
			}
			if(str1[i]==')' || str1[i]==']')
			{
				if(st.empty())
				{
					flag=0;
					break;
				}
			}
			if(str1[i]==')')
			{
				if(st.top()=='(')
				{
					st.pop();
					continue;
				}
				else
				{
					flag=0;
					break;
				}
			}
			if(str1[i]==']')
			{
				if(st.top()=='[')
				{
					st.pop();
					continue;
				}
				else
				{
					flag=0;
					break;
				}
			}
		}
		if(!st.empty())
			flag=0;
		if(flag)
			cout<<"Yes";
		else
			cout<<"No";
		nline;
	}
	return 0;
}

