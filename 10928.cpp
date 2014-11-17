//Author : pakhandi
//
//UVA Solution : My Dear Neighbours
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

vector<pair<int, int> > pr;

int main()
{
	//freopen("C:\\Users\\DELL\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\DELL\\Desktop\\output.txt","w",stdout);
	int i, j, cases, k=1;
	scan(cases);
	wl(cases)
	{
		
		int n;
		pr.clear();
		cin>>n;
		getchar();
		stringstream temp;
		temp.clear();
		fl(i,0,n)
		{
			int arr=0;
			
			string inp;
			inp.clear();
			getline(cin,inp);
			temp.clear();
			temp << inp;
			
			while(temp >> j)
				arr++;
				
			pr.PB(make_pair(arr,i+1));
		}
		sort(pr.begin(), pr.end());
		int minn=pr[0].first;
		cout<<pr[0].second;
		fl(i,1,n)
		{
			if(pr[i].first==minn)
				cout<<" "<<pr[i].second;
			else
				break;
		}
		nline;
	}
	return 0;
}

