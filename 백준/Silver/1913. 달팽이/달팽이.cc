#include <iostream>
using namespace std;
int snail[1000][1000];
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n, rotate = 1, count = 1;
    cin >> n;

    int center = (n+1)/2;
    int x = center;
    int y = center;
    snail[x][y] = 1;

    while(x>=1 && x<=n && y>=1 && y<=n){
        if(rotate % 2 == 1){
            for(int i=0; i<rotate; i++) snail[--x][y] = ++count;
            for(int i=0; i<rotate; i++) snail[x][++y] = ++count;
            rotate++;
        }
        else {
            for(int i=0; i<rotate; i++) snail[++x][y] = ++count;
            for(int i=0; i<rotate; i++) snail[x][--y] = ++count;
            rotate++;
        }
    }

    int find;
    int a, b;
    cin >> find;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(find == snail[i][j]){
                a = i;
                b = j;
            }
            cout << snail[i][j] << " ";
        }
        cout << "\n";
    }
    
    cout << a << " " << b << "\n";
    return 0;
}