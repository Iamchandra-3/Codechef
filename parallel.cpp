#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
while (t--)
{
    ll n;
    cin >> n;
    vector<ll> v;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll y;
        cin >> y;
        v.push_back(y);
        sum += y;
    }
    ll you = sum;
    ll max = 0;
    vector<pair<ll, ll>> op;

    for (ll i = 0; i < n; i++)
    {
        max += v[i];
        op.push_back({max, you - max});
    }
    sort(op.begin(), op.end(), [&](pair<ll, ll> &a, pair<ll, ll> &b)
         { return abs(a.first - a.second) < abs(b.first - b.second); });
    if (op[0].first > op[0].second)
    {
        cout << op[0].first << endl;
    }
    else
    {
        cout << op[0].second << endl;
    }

}
}