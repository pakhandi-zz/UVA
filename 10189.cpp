//Author : pakhandi
//
//UVA solution : Minesweeper
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
	int n, m;
	cin>>n>>m;
	while(n!=0 && m!=0)
	{
		char v[105][105];
		int mat[105][105];
		fl(i,0,105)
			fl(j,0,105)
				mat[i][j]=0;
		fl(i,0,n)
		{
			cin>>v[i];
		}
		//int limit=v[0].SZ();
		fl(i,0,n)
		{
			//string str1=v[i];
			fl(j,0,m)
			{
				if(v[i][j]=='*')
				{
					mat[i][j]=-1;
					continue;
				}
				
				if(i-1>=0 && j-1>=0)
				{
					if(v[i-1][j-1]=='*')
						mat[i][j]+=1;					
				}
				if(i-1>=0)
				{
					if(v[i-1][j]=='*')
						mat[i][j]+=1;					
				}
				if(i-1>=0 && j+1<m)
				{
					if(v[i-1][j+1]=='*')
						mat[i][j]+=1;					
				}
				if(j-1>=0)
				{
					if(v[i][j-1]=='*')
						mat[i][j]+=1;					
				}
				if(j+1<m)
				{
					if(v[i][j+1]=='*')
						mat[i][j]+=1;					
				}
				if(i+1<n && j-1>=0)
				{
					if(v[i+1][j-1]=='*')
						mat[i][j]+=1;					
				}
				if(i+1<n)
				{
					if(v[i+1][j]=='*')
						mat[i][j]+=1;					
				}
				if(i+1<n && j+1<m)
				{
					if(v[i+1][j+1]=='*')
						mat[i][j]+=1;					
				}
				
			}
		}
		cout<<"Field #"<<k<<":"; k++;nline;
		fl(i,0,n)
		{
			fl(j,0,m)
			{
				if(mat[i][j]==-1)
					cout<<"*";
				else
					cout<<mat[i][j];
			}
			nline;
		}
		
		cin>>n>>m;
		if(n!=0)
			nline;
	}
	return 0;
}

