#include <iostream>
using namespace std;

long long road[100001];
long long oil[100001];

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    long long n;
    long long cost = 0;
    cin >> n;
    for(int i=0; i<n-1; i++){
        cin >> road[i];
    }

    for(int i=0; i<n-1; i++){
        cin >> oil[i];  
    }
    long long min = oil[0];

    for(int i=0; i<n-1; i++){
        if(min > oil[i]) min = oil[i];
        cost += min*road[i];
    }
    cout << cost << "\n";
    return 0;
}