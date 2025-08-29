#include <iostream>

using namespace std;

int T, N;
int Sticker[3][100001];
int DP[3][100001];

int m_max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        cin >> N;

        for (int j = 1; j <= 2; ++j)
        {
            for (int k = 1; k <= N; ++k)
                cin >> Sticker[j][k];
        }

        DP[1][0] = 0;
        DP[2][0] = 0;

        DP[1][1] = Sticker[1][1];
        DP[2][1] = Sticker[2][1];

		for (int j = 2; j <= N; ++j)
        {
			DP[1][j] = m_max(DP[2][j-1], DP[2][j-2]) + Sticker[1][j];
			DP[2][j] = m_max(DP[1][j-1], DP[1][j-2]) + Sticker[2][j];
		}
		
        cout << m_max(DP[1][N], DP[2][N]) << "\n";
    }

    

    return 0;
}