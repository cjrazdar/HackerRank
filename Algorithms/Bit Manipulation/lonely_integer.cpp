#include <iostream>
using namespace std;

int main() {
    int lonely_int = 0;
    int num_inputs, temp_int;
    
    cin >> num_inputs;
    
    for (int i = 0; i < num_inputs; ++i) {
        cin >> temp_int; 
        
        lonely_int ^= temp_int;
    }
    
    cout << lonely_int << endl;
    
    return 0;
}
