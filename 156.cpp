//Author : pakhandi
//
//UVA solution : Ananagrams
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
	int i, j, cases, k=1;
	map<string, int> mp;
	map<string, string> mp1;
	char str1[1000];
	cin>>str1;
	while(strcmp(str1,"#")!=0)
	{
		k++;
		char str2[1000];
		strcpy(str2,str1);
		int limit=strlen(str1);
		fl(i,0,limit)
		{
			if(str1[i]>='A' && str1[i]<='Z')
				str1[i]='a'+(str1[i]-'A');
		}
		mp1[str1]=str2;
		sort(str1,str1+limit);
		mp1[str1]=str2;
		if(mp[str1]==0)
			mp[str1]=1;
		else
		{
			mp[str1]=2;
		}
		cin>>str1;
	}
	map<string,int>::const_iterator it;
	vector<string> v;
	for(it=mp.begin(); it!=mp.end(); it++)
	{
		if(it->second==1)
		{
			v.PB(mp1[it->first]);
		}
	}
	sort(v.begin(), v.end());
	fl(i,0,v.SZ())
	{
		cout<<v[i];
		nline;
	}
	return 0;
}

