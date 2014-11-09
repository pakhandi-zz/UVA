//Author : pakhandi
//
//UVA Solution : Ferry Loading III
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

int ans[10004], arrival[10004];

int main()
{
	//freopen("C:\\Users\\DELL\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\DELL\\Desktop\\output.txt","w",stdout);
	int i, j, cases, k=1;
	
	scan(cases);
	
	wl(cases)
	{
		int n, t, m;
		cin>>n>>t>>m;
		queue<int> left, right;
		
		fl(i,0,m)
		{
			int ttime;
			string str1;
			cin>>ttime>>str1;
			arrival[i]=ttime;
			if(str1=="left")
				left.push(i);
			else
				right.push(i);
		}
		
		int time=0;
		
		while(!left.empty() || !right.empty())
		{
			int flagright=0, flagleft=0;
			int temp=INT_MAX;
			if(!left.empty())
				temp=arrival[left.front()];
			if(!right.empty())
				temp=min(temp,arrival[right.front()]);
			time=max(time,temp);
			
			fl(i,0,n)
			{
				if(left.empty())
					break;
				if(arrival[left.front()]>time)
					break;
				ans[left.front()]=time+t;
				left.pop();
				flagleft=1;
			}
			time+=t;
			
			temp=INT_MAX;
			if(!left.empty())
				temp=arrival[left.front()];
			if(!right.empty())
				temp=min(temp,arrival[right.front()]);
			time=max(time,temp);
			
			fl(i,0,n)
			{
				if(right.empty())
					break;
				if(arrival[right.front()]>time)
					break;
				ans[right.front()]=time+t;
				right.pop();
				flagright=1;
			}
			time+=t;
				
		}
		fl(i,0,m)
		{
			cout<<ans[i];
			nline;
		}
		if(cases)
			nline;
	}
	return 0;
}

