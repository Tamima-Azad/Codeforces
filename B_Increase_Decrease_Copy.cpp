#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n + 1),c(n+1);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            c[i]=a[i];
        }
        
        for (int i = 0; i < n + 1; i++) {
            cin >> b[i];
        }
        
        
        long long total_operations = 1;
        for (int i = 0; i < n; i++) {
            total_operations += abs(a[i] - b[i]);
        }
        
        int min_cost = INT_MAX;
        for (int i = 0; i < n; i++) {
            min_cost = min(min_cost, abs(a[i] - b[n]));
        }
        
        cout << total_operations + min_cost << endl;
    }
    
    return 0;
}
