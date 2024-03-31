#include <iostream>
using namespace std;

char mine[10][10];
char board[10][10];

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n, boom = 0;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> mine[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
            if(board[i][j] == 'x' && mine[i][j] == '*') boom = 1;
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j] == 'x'){
                int count = 0;
                for(int x=i-1; x<=i+1; x++){
                    for(int y=j-1; y<=j+1; y++){
                        if(x>=0 && x<n && y>=0 && y<n && mine[x][y] == '*') count++;
                    }
                }
                if(boom == 0) board[i][j] = count + '0';
                else if(boom == 1){
                    if(mine[i][j] == '*');
                    else mine[i][j] = count + '0';
                }
            }
            
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(boom == 0) cout << board[i][j];
            else if(boom == 1) cout << mine[i][j];
        }
        cout << "\n";
    }
    return 0;
}