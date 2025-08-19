
// Replace Code with code you want to test 

/* nish - l**de ka spec */
#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;

#define nishUwU    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);                                             
#define sz(v)      (int)v.size()
#define all(v)     v.begin(),v.end()
#define ff         first
#define ss         second
#define gcd(a,b)   __gcd(a,b)
#define lcd(a,b)   a*(b/gcd(a,b))
#define add(a,b)   a = (a % mod + b % mod) % mod
#define sub(a,b)   a = (a % mod - b % mod + mod) % mod
#define mul(a,b)   a = ((a % mod) * (b % mod)) % mod
#define div(a,b)   a = ((a%mod) * mpow(b, mod - 2)) % mod

#ifdef NSHU
#include "nish.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif
const int mod = 1e9+7;

ll inf = 1e15;

void nishhere(ll tc){
    ll n,md,l;cin>>n>>md>>l; 
    vector<vector<ll>> moves(l,vector<ll>(md,0)); 
    vector<ll> v(n); 
    for(auto &i: v)
        cin>>i;
    for(ll i=0;i<l;i++){
        for(ll curr=0;curr<md;curr++){
            ll cnt = 0;
            for(ll j=0;j<n;j++){
                if(j%l==i){
                    if(v[j]%md<curr){
                        cnt += abs((v[j]%md) - curr);
                    }else if(v[j]%md > curr){
                        cnt += (md - v[j]%md) + curr;
                    } 
                }
            }
            moves[i][curr] = cnt;
        }
    }
    // now likho dp likdo bsdk 
    // dp[i][curr_mod] --> yeh bata rhi hai ji -> ith i%len ke liye abhi tk ka mod hai wo rha hai curr_mode
    vector<vector<ll>> dp(l+2, vector<ll> (md,inf));
    dp[0][0] = 0;
    for(ll i=0;i<l;i++){
        for(ll curr = 0; curr < md; curr++){
            for(ll bna =0 ; bna < md ; bna++){
                dp[i+1][(curr + bna) % md] = min(dp[i+1][(curr + bna) % md], dp[i][curr] + moves[i][bna]); 
            }
        }
    }
    cout << dp[l][0] << "\n";
}   




int main() {
clock_t time_req = clock();
nishUwU


#ifdef NSHU 
freopen("issue.txt", "w", stderr); 
#endif

ll hurray = 1 ; 

// cin>>hurray;

for(ll tc = 1 ; tc <=  hurray ; tc++){
// cout<< "Case #"<<tc<<": "; 
nishhere(tc);
}


#ifdef NSHU
    cerr << "Time : " << fixed << setprecision(6) << ((double)(clock() - time_req)) / CLOCKS_PER_SEC << endl;
#endif

    return 0;
}

