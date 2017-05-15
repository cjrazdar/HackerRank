#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    int a_score = 0, b_score = 0;
    
    if (a0 > b0) {
       ++a_score;
    }
    else if (a0 < b0) {
       ++b_score;
    }
    
    if (a1 > b1) {
       ++a_score;
    }
    else if (a1 < b1) {
       ++b_score;
    }
    if (a2 > b2) {
       ++a_score;
    }
    else if (a2 < b2) {
       ++b_score;
    }
    
    vector < int > scores (2);
    scores[0] = a_score;
    scores[1] = b_score;
    
    return scores;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    cout << result[0] << " " << result[1] << endl;
    
    return 0;
}