#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define ld long double

#define vi vector<int>
#define pii pair<int,int>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define si set<int>
#define usi unordered_set<int>

#define all(x) x.begin(), x.end()
#define ff first
#define ss second
#define mp make_pair

#define f(i, a, b) for(int i=a;i<b;i++)
#define fr(i, a, b) for(int i=a;i>=b;i--)
#define pb emplace_back
#define minv(a) *min_element(all(a))
#define maxv(a) *max_element(all(a))
#define sumv(a) accumulate(all(a),0)
#define lb lower_bound
#define ub upper_bound

#define MOD 1000000007
#define PI 3.14159265358979



void productArray(int arr[], int n)
{

    if (n == 1) {
        cout << 0;
        return;
    }

    int i, temp = 1;
    int prod[n];

    memset(prod, 1, n);

    f(i, 0, n) {
        prod[i] = temp;
        temp *= arr[i];
    }
    temp = 1;
    fr (i, n - 1, 0) {
        prod[i] *= temp;
        temp *= arr[i];
    }
    f(i, 0, n)
    cout << prod[i] << " ";

    return;
}


int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cout << setprecision(20) << fixed;
    int t = 1;
    // cin >> t;
    while (t--) {

        int n;
        cin >> n;
        int arr[n];
        f(i, 0, n) cin >> arr[i];
        productArray(arr, n);

    }
    return 0;
}

