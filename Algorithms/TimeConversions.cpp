#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string time;
    cin >> time;
    
    string hour = time.substr(0,2);
    string category = time.substr(8);
    
    int hour_num = stoi(hour);
    
    cout << setfill('0') << setw(2);
    
    if (category.compare("AM") == 0) {
        if (hour_num == 12) {
            cout << 0;
        }
        else {
            cout << hour_num;
        }
    }
    else {
        if (hour_num == 12) {
            cout << hour_num;
        }
        else {
            cout << hour_num + 12;
        }
    }
    
    cout << time.substr(2,6) << endl; 
    return 0;
}
