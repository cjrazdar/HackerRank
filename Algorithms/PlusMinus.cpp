#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    float n, current_element;
    float pos = 0, neg = 0, zer = 0;
    float pos_ratio, neg_ratio, zer_ratio;
    cin >> n;
    for(float i = 0; i < n; ++i){
       cin >> current_element;
       if (current_element < 0) {
           ++neg;
       }
       else if (current_element > 0) {
           ++pos;
       }
       else {
           ++zer;
       }
    }
    pos_ratio = pos / n;
    neg_ratio = neg / n;
    zer_ratio = zer / n;
    cout << pos_ratio << endl 
        << neg_ratio << endl 
        << zer_ratio << endl;
    return 0;
}
