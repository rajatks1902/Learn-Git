#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for( int i=0;i<n;i++)
#define int  long long int
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
typedef vector<int>     vi;
typedef pair<int, int>  pii;

void solve() {
  string s;
  cin>>s;
  int k;
  cin>>k;
  int t=0;
  string st="";
  string s1[s.size()-k+1];
  int p=0;
    for(int i=0;i<s.size()-k+1;i++)
    {
         string str=s.substr(i,k);
         //cout<<str<<endl;
        s1[p]=str;
        p++;
    }
    for(int i=0;i<s.size()-k+1;i++)
    {
        int c=0;
        string str=s1[i];

         for(int j=0;j<str.size();j++)
         {
    if(str.at(j)=='a'|| str.at(j)=='e'||str.at(j)=='i'||str.at(j)=='o'||str.at(j)=='u')
    c++;
         }
         if(c>t){
         t=c;
         st=str;
         }
    }
    if(t==0)
    cout<<"Not found!";
    else {
    cout<<st;
    }
    }
      
  

  
  
int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    solve();

    return 0;
}