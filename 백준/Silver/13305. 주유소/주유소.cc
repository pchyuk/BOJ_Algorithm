#include <iostream>
using namespace std;

int road[100001];
int oil[100001];

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n, sum = 0, min = 1000000000;
    int cost = 0;
    cin >> n;
    for(int i=0; i<n-1; i++){
        cin >> road[i];
        sum += road[i];
    }
    for(int i=0; i<n-1; i++){
        cin >> oil[i];
        if(min > oil[i]) min = oil[i];
    }
    cin >> oil[n-1];
    for(int i=0; sum != 0; i++){
        if(oil[i] == min){
            cost += oil[i]*sum;
            sum = 0;
        }
        else {
            cost += oil[i]*road[i];
            sum -= road[i];
        }
    }
    cout << cost << "\n";
    return 0;
}