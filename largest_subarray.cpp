#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for( int i=0;i<n;i++)
//#define int  unsigned long long 
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
typedef vector<int>     vi;
typedef pair<int, int>  pii;
 const int n=1e6;


void solve() {
    int n;
    cin>>n;
    vi v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.pb(a);
    }
    vi v1;
    v1=v;
    sort(all(v1));
    int x=v1[0];
    int y=v1[n-1];
    if(v==v1)
        cout<<"0"<<endl;
    else if(v[0]==y && v[n-1]==x)
        cout<<"3"<<endl;
    else if(v[0]!=x && v[n-1]!=y)
        cout<<"2"<<endl;

    else
        cout<<"1"<<endl;

}
int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}