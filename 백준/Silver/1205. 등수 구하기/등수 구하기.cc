#include <iostream>
using namespace std;

int score[51];
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int n, new_score, p, rank = 1;
    cin >> n >> new_score >> p;
    if(n==0){
        cout << "1\n";
        return 0;
    }

    for(int i=0; i<n; i++){
        cin >> score[i];
    }

    for(int i=0; i<p; i++){
        if(new_score > score[i] || score[i] == 0){
            cout << rank << "\n";
            return 0;
        }
        else if(new_score < score[i]) rank++;
    }
    cout << "-1\n";
    return 0;
}