//Author : pakhandi
//
//UVA solution : Wedding Shopping
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
		vector<vector<int> > mat;
		int money, n;
		cin>>money>>n;
		int arr[100];
		fl(i,0,n)
		{
			int nn;
			cin>>nn;
			arr[i]=nn;
			vector<int> v;
			fl(j,0,nn)
			{
				int temp;
				cin>>temp;
				v.PB(temp);
				
			}
			sort(v.begin(), v.end());
			mat.PB(v);
		}
		int sum=0;
		fl(i,0,n)
		{
			sum+=mat[i][0];
		}
		if(sum>money)
		{
			cout<<"no solution";
			nline;
			continue;
		}
		int dp[205][25];
		fl(i,0,205)
		{
			fl(j,0,25)
				dp[i][j]=-1;
		}
		int l1, l2;
		fl(i,0,money+1)
		{
			fl(j,0,n+1)
			{
				if(j==0)
				{
					dp[i][j]=0;
					continue;
				}
					
				fl(k,0,mat[j-1].SZ())
				{
					int cost=mat[j-1][k];
					//cout<<"*"<<cost<<"#";
					if(cost<=i && dp[i-cost][j-1]!=-1)
					{
						dp[i][j]=max(dp[i][j],dp[i-cost][j-1]+cost);
						/*fl(l1,0,21)
				        {
				        	fl(l2,0,4)
				        	{
				        		cout<<dp[l1][l2]<<" ";
				        	}
				        	nline;
				        }
				        cout<<"------------------------"; nline; */
					}
				}
			}
		}
		/*if(dp[money][n]==-1)
		{
			cout<<"no solution";
			nline;
			continue;
		}*/
		cout<<dp[money][n];
		nline;
	}
	return 0;
}

