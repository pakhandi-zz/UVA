//Author : pakhandi
//
//UVA solution : Rat Attack
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

int mat[1100][1100];

int main()
{
	//freopen("C:\\Users\\DELL\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\DELL\\Desktop\\output.txt","w",stdout);
	int i, j, cases, k=1;
	cin>>cases;
	wl(cases)
	{
		int d, n;
		cin>>d>>n;
		fl(i,0,1100)
		{
			fl(j,0,1100)
				mat[i][j]=0;
		}
		fl(i,0,n)
		{
			int x, y, val;
			cin>>x>>y>>val;
			int startx=x-d, endx=x+d+1, starty=y-d, endy=y+d+1;
			fl(j,startx,endx)
			{
				if(j<0 || j>1025)
					continue;
				fl(k,starty,endy)
				{
					if(k<0 || k>1025)
						continue;
					mat[j][k]+=val;
				}
			}
		}
		/*fl(i,0,10)
		{
			fl(j,0,10)
			{
				cout<<mat[i][j]<<" ";
			}
			nline;
		}*/
		int maxn=-1, ax, ay;
		fl(i,0,1025)
		{
			fl(j,0,1025)
			{
				if(mat[i][j]>maxn)
				{
					maxn=mat[i][j];
					ax=i; ay=j;
				}
			}
		}
		cout<<ax<<" "<<ay<<" "<<maxn;
		nline;
	}
	return 0;
}

