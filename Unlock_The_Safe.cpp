#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    for (int i = 0; i < N; ++i) cin >> B[i];
    
    int S = 0;
    for (int i = 0; i < N; ++i) {
        int diff_up = (B[i] - A[i] + 9) % 9;
        int diff_down = (A[i] - B[i] + 9) % 9;
        S += min(diff_up, diff_down);
    }
    
    bool possible = false;
    if (K >= S) {
        if (S > 0) {
            if ((K - S) % 2 == 0) {
                possible = true;
            }
        } else {
            if (K == 0) {
                possible = true;
            } else {
                if (K % 2 == 0) {
                    possible = true;
                } else {
                    // Check if we can perform an odd number of full cycles (9 moves)
                    // Since 9 is odd, performing one full cycle changes the parity
                    if (K >= 9) {
                        possible = true;
                    }
                }
            }
        }
    }
    
    cout << (possible ? "YES" : "NO") << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}