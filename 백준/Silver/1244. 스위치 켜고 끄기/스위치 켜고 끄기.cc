#include <iostream>
using namespace std;
int arr[101];
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int n, student, gender, num;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }

    cin >> student;
    for(int i=0; i<student; i++){
        cin >> gender >> num;
        if(gender == 1){ // 남학생
            for(int i=1; num*i <= n; i++){
                if(arr[num*i] == 0) arr[num*i] = 1;
                else if(arr[num*i] == 1) arr[num*i] = 0;
            }
        }
        else if(gender == 2){ // 여학생
            for(int i=0; num-i>0 && num+i<=n; i++){
                if(arr[num+i] == arr[num-i]){
                    if(arr[num+i] == 0) arr[num+i] = arr[num-i] = 1;
                    else if(arr[num-i] == 1) arr[num+i] = arr[num-i] = 0;
                }
                else break;
            }
        }
    }

    int count = 0;
    while(n > 20){
        for(int i=count+1; i<=count+20; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        count += 20;
        n -= 20;
    }
    for(int i=count+1; i<=count+n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}