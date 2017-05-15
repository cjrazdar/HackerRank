#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n, sum = 0, temp;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> temp;
            // Middle of matrix value is ignored
            if (i == (n - 1 - i)) { 
                continue;
            }
            // Primary Diag Values
            else if (j == i) {
                sum += temp;
            }
            // Secondary Diag Values
            else if (j == (n - 1 - i)) {
                sum -= temp;
            }
        }
    }
    cout << abs(sum) << endl;
    
    return 0;
}
