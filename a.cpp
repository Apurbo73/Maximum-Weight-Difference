#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector < int > weights(N);
        int totalWeight = 0;

        for (int i = 0; i < N; ++i) {
            cin >> weights[i];
            totalWeight += weights[i];
        }

        sort(weights.begin(), weights.end());

        int kidWeight1 = 0;
        for (int i = 0; i < K; ++i) {
            kidWeight1 += weights[i];
        }

        int kidWeight2 = 0;
        for (int i = 0; i < K; ++i) {
            kidWeight2 += weights[N - 1 - i];
        }

        int diff1 = abs((totalWeight - kidWeight1) - kidWeight1);
        int diff2 = abs((totalWeight - kidWeight2) - kidWeight2);

        cout << max(diff1, diff2) << '\n';
    }

    return 0;
}