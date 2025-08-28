#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> p(m);

    for(int i=0; i<m; i++){
        cin >> p[i].first;
        p[i].second = i + 1;
    }

    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());

    // for(int i=0; i<m; i++){
    //     cout << p[i].first << " " << p[i].second << "\n";
    // }

    int sum = 0, cnt = 0;
    vector<int> v;

    for(int i=0; i<m; i++){
        if(sum + p[i].first <= 2*n){
            sum += p[i].first;
            cnt++;
            v.push_back(p[i].second);
        }
        if(sum >= n && sum <= 2*n) break;
    }

    cout << cnt << "\n";
    for(int i=0; i<cnt; i++){
        cout << v[i] << "\n";
    }
    
    return 0;
}