
// Replace the Code Below with the one you want to test

    #include <bits/stdc++.h>
    using namespace std;
    #ifndef ONLINE_JUDGE
    #include "debug1.cpp"
    #define debug(...) std::cerr << __LINE__ << ": [", __DEBUG_UTIL__::printer(#__VA_ARGS__, __VA_ARGS__)
    #define debugArr(arr, size) std::cerr << __LINE__ << ": [", __DEBUG_UTIL__::printerArr(#arr, arr,size)
    #endif
    #ifndef ONLINE_JUDGE
    #include "debug.h"
    #else
    #define dbg(x...)
    #endif
    using std::cout;
    using std::cin;
    #define endl '\n'    
    #define Endl '\n'    
    #define ll long long
    #define loop(i,a,b) for(long long i=a;i<b;i++)
    #define roop(i,a,b) for(long long i=a-1;i>=b;i--)
    #define all(p) p.begin(),p.end()
    #define pb(p) push_back(p);
    long long pop_count(long long a){int res=0;while(a){res+=(a&1),a>>=1;}return res;}
    template<class T> using _pq = priority_queue<T>;
    template<class T> using _pqr = priority_queue<T, vector<T>, greater<T>>;
    template<class T> void So(vector<T> &v) {sort(v.begin(),v.end());}
    template<class T> void Sore(vector<T> &v) {sort(v.begin(),v.end(),[](T x,T y){return x>y;});}
    #include <ext/pb_ds/assoc_container.hpp>
    #include <ext/pb_ds/tree_policy.hpp>
    using namespace __gnu_pbds;
    #include<iostream>
    template <class T> using OrderSet = tree<T, null_type, 
    less<T>, rb_tree_tag,tree_order_statistics_node_update>;
    ll lcm(ll a, ll b){return (a/__gcd(a,b)*b);}
    const ll INF= LONG_LONG_MAX;


void solve(ll tc);

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve(0);
    
    return 0;
}

ll calc(ll val,ll m)
{
    if(val%m==0) return 0;
    return m-val%m;
}

void solve(ll tc)
{   
    ll n,m,l,sum=0;  
    cin>>n>>m>>l;
    vector<ll> vec(n);
    loop(i,0,n) cin>>vec[i];
    if(l==1)
    {
        ll ans=0;
        for(auto &i:vec)ans+=calc(i,m);
        cout<<ans;
        return;
    }
    for(int i=0;i<l;i++)
    {
        sum+=vec[i];
    }
    ll ans=calc(sum,m);
    ll av=ans;
    dbg(ans,av);
    for(int i=l;i<min(n,2*l-1);i++)
    {
        sum+=vec[i];
        sum-=vec[i-l];
        ll req=calc(sum,m);
        if(av>req)
        {
            av=req;
        }
        else 
        {
            ans+=req-av;
            sum+=req-av;
            vec[i]+=req-av;
        }
        dbg(i,ans,av);
        
    }
    for(int i=2*l-1;i<n;i++){
        sum+=vec[i];
        sum-=vec[i-l];
        ll x=calc(sum,m);
        ans+=x;
        sum+=x;
        vec[i]+=x;
        
    }
    dbg(vec);
    cout<<ans<<endl;
   


    
}

 