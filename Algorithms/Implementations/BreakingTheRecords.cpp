#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, max_score, min_score, current_score;
    int max_record = 0, min_record = 0;
    
    cin >> n;
    
    cin >> current_score;
    // Initialize min and max
    max_score = current_score;
    min_score = current_score;
    
    for (int i = 1; i < n; ++i) {
        cin >> current_score;
        if (current_score > max_score) {
            max_score = current_score;
            ++max_record;
        }
        else if (current_score < min_score) {
            min_score = current_score;
            ++min_record;
        }
    }
    
    cout << max_record << " " << min_record << endl;
    
    return 0;
}
