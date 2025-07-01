
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    
    int x;
    cin >> x;
    v.erase(v.begin() + x - 1);  // Erase element at position x (1-based to 0-based)
    
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);  // Erase range [a,b) (1-based to 0-based)
    
    cout << v.size() << endl;
    for (int num : v) {
        cout << num << " ";
    }
    
    return 0;
}
