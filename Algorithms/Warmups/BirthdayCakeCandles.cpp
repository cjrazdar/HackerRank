#include <iostream>

using namespace std;

int main(){
    int n, candle_height, num_candles;
    int max_candle_height = 0;
    cin >> n;
    
    for(int i = 0; i < n; ++i){
       cin >> candle_height;
       if (candle_height == max_candle_height) {
           ++num_candles;
       }
       else if (candle_height > max_candle_height) {
           num_candles = 1;
           max_candle_height = candle_height;
       }
    }
    cout << num_candles;
    return 0;
}
