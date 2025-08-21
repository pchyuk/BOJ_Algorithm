#include <iostream>
#include <vector>
#include <deque>
#define endl "\n"

using namespace std;

const int MAX = 100001;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    
    /*
    n이 k보다 큰 경우, X + 1이나 2 * X 이동은 동생과의 거리를 더 벌어지게 만듦.
    따라서 X - 1 연산만 수행하는 것이 바람직함.
    */
    if(n >= k)
    {
        // X - 1 연산에 1초가 걸리므로 단순 뺄셈 연산만 수행하면 시간을 구할 수 있음.
        cout << n - k << endl;
        return 0;
    }

    vector<int> time(MAX, -1);
    deque<int> dq;

    dq.push_front(n);
    time[n] = 0;

    while(!dq.empty())
    {
        // 현재 위치를 가져온 후
        int current = dq.front();
        // 큐에서 제거
        dq.pop_front();

        // 순간이동 (2 * X)
        int teleport = current * 2;
        // 순간이동한 위치가 최대값보다 작고, 방문하지 않았다면:
        if(teleport < MAX && time[teleport] == -1)
        {
            // 순간이동은 시간이 소모되지 않음.
            // 순간이동을 한 위치에 도착하는 시간은 current 위치에 도착한 시간과 동일.
            time[teleport] = time[current];
            dq.push_front(teleport);
        }
        
        // 걷기 (X - 1)
        int walk_back = current - 1;
        if(walk_back >= 0 && time[walk_back] == -1)
        {
            time[walk_back] = time[current] + 1;
            dq.push_back(walk_back);
        }
        
        // 걷기 (X + 1)
        int walk_forward = current + 1;
        if(walk_forward < MAX && time[walk_forward] == -1)
        {
            time[walk_forward] = time[current] + 1;
            dq.push_back(walk_forward);
        }

        if(time[k] != -1)
        {
            cout << time[k] << endl;
            return 0;
        }
    }

    return 0;
}