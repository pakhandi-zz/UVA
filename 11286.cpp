//Author : pakhandi
//
//UVA solution : Conformity
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
	while(n)
	{
		int arr[5];
		vector<string> v;
		map<string,int> mp;
		mp.clear();
		fl(i,0,n)
		{
			fl(j,0,5)
			{
				cin>>arr[j];
				//cout<<arr[j]<<" ";
			}
			//nline;
			sort(arr,arr+5);
			char str1[10000];
			str1[0]='\0';
			fl(j,0,5)
			{
				char st[10];
				sprintf(st,"%d",arr[j]);
				//cout<<st<<" "<<"*";;
				strcat(str1,st);
			}
			//cout<<str1;
			
			mp[str1]++;
		}
		map<string,int>::const_iterator it;
		int maxn=-1;
		for(it=mp.begin(); it!=mp.end(); it++)
		{
			//cout<<it->first<<" "<<it->second; nline;
			if(it->second>maxn)
				maxn=it->second;
		}
		int ans=0;
		for(it=mp.begin(); it!=mp.end(); it++)
		{
			if(it->second==maxn)
				ans+=it->second;
		}
		cout<<ans; nline;
		cin>>n;
	}
	
	return 0;
}

