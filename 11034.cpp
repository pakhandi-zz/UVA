//Author : pakhandi
//
//UVA Solution : Ferry Loading IV
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
	
	wl(cases)
	{
		int l, m;
		cin>>l>>m;
		l*=100;
		queue<int> left, right;
		
		fl(i,0,m)
		{
			int tlen; string str1;
			
			cin>>tlen>>str1;
			//arrival[i]=ttime;
			if(str1=="left")
				left.push(tlen);
			else
				right.push(tlen);
		}
		
		int time=0;
		int currlen=0;
		int ans=0;
		
		while(!left.empty() || !right.empty())
		{
			int flagright=0, flagleft=0;
			
			currlen=0;
			while(1)
			{
				if(left.empty())
					break;
				if(left.front()+currlen<=l)
				{
					currlen+=left.front();
					flagleft=1;
					left.pop();
				}
				else
					break;
			}
			ans++;
			if(right.empty() && left.empty())
				break;
			
			currlen=0;
			while(1)
			{
				if(right.empty())
					break;
				if(right.front()+currlen<=l)
				{
					currlen+=right.front();
					flagright=1;
					right.pop();
				}
				else
					break;
			}
			ans++;
			if(left.empty() && right.empty())
				break;
			
		}
		cout<<ans;
		nline;
		//if(cases)
		//	nline;
	}
	return 0;
}

