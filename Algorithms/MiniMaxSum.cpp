#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <long long> sums(5);
    long long min, max;
    int current_input;
    
    for(int i = 0; i < 5; ++i){
       cin >> current_input;
       for (int j = 0; j < 5; ++j) {
           if (i != j) {
               sums[j] += current_input;
           }
       }
    }
    
    min = sums[0];
    max = sums[0];
    
    for (int i = 1; i < 5; ++i) {
        if (sums[i] > max) {
            max = sums[i];
        }
        else if (sums[i] < min) {
            min = sums[i];
        }
    }
    
    cout << min << " " << max << endl;
    
    return 0;
}
