#include <bits/stdc++.h>
#define new '\n';
#define yes "YES\n"
#define no "NO\n"
#define pb(a) push_back(a)
#define ll long long int
#define vi vector<ll>
#define vii vector<vector<ll>>
#define nil -1
#define test << " ** "
#define sz(x) (x).size()
#define all(x) (x).begin(), (x).end()
#define For(i, j, n) for (int i = j; i <= n; i++)
#define Forr(i, n, j) for (int i = n; i >= j; i--)
#define PI 3.14159265358979323846264338327950
using namespace std;

void cp()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const int N = 1e4+10;
long double radi[N];
int n,f;
long double esp = 1e-6;

bool perfect(double vol){
    int ct_f = 0;
    
    for(int i = 0; i<n;i++){
        int x = radi[i]/vol;
        ct_f = ct_f + x;
    }

    return ct_f>=(f+1);
}
void icpc(){
    int t;

    cin >> t;
    while(t--){
        cin >> n >> f;

        For(i,0,n-1){
            cin >> radi[i];
            radi[i] = PI*radi[i]*radi[i];
        }
        sort(radi,radi+n);
        // For(i,0,n-1) cout << radi[i] << " ";
        // cout << new;
        double l = PI, r = PI*(10000)*(10000),mid;

        while(r-l>esp){
            mid = l+(r-l)/2;
    
            if(perfect(mid)){ l = mid;}
            else{ r = mid;}
        }
        //cout <<fixed << setprecision(4);
        if(perfect(r)){ cout << fixed << setprecision(4)<< r << new;}
        else{ cout << fixed << setprecision(4)<< l << new;}

    }
}
int main()
{
    cp();
    icpc();
}
