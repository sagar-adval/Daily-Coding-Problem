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
#define MxN 1e6

int arrSize, targetSum;


int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cout << setprecision(20) << fixed;
    int t = 1;
    // cin >> t;
    while (t--) {
        cin >> arrSize >> targetSum;
        int arr[arrSize];
        f(i, 0, arrSize) cin >> arr[i];
        usi values;
        int flag = 0;
        f(i, 0, arrSize) {
            int temp = targetSum - arr[i];

            if (values.find(temp) != values.end()) {
                cout << "Possible" << endl;
                cout << arr[i] << " " << temp;
                flag = 1;
                break;
            }


            values.insert(arr[i]);
        }
        if (!flag) cout << "Impossible" << endl;


    }
    return 0;
}

