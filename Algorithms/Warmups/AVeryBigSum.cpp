#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    long long sum = 0, current_element;
    cin >> n;
    for(int i = 0; i < n; ++i){
       cin >> current_element;
       sum += current_element;
    }
    cout << sum;
    return 0;
}
