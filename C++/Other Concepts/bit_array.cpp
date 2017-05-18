#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    
    /*
    a[0] = S (modulo 2^31)
    for i = 1 to N-1
        a[i] = a[i-1]*P+Q (modulo 2^31)
    */
    
    int N, S, P, Q;
    
    cin >> N >> S >> P >> Q;
    
    vector<int> integer_array(N);
    
    integer_array[0] = S % int(pow(2, 31));
    
    for (int i = 1; i < N; ++i) {
        integer_array[i] = integer_array[i - 1] * P + Q % int(pow(2, 31));
    }
    
    set<int> integer_set(integer_array.begin(), integer_array.end());
    
    cout << integer_set.size() << endl;
    
    return 0;
}
