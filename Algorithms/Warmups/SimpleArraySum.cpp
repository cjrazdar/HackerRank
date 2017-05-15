#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n, element, sum = 0;
    cin >> n;
    for(int i = 0; i < n ; ++i){
        cin >> element;
        sum += element;
    }
    cout << sum;
    return 0;
}