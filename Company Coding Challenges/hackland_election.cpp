/*
 * Complete the function below.
 */
string electionWinner(vector < string > votes) {
    string winner = "";
    int current_max = 0;
    bool new_winner = false;
    
    unordered_map<string, int> organized_results(votes.size());
    
    for (size_t i = 0; i < votes.size(); ++i) {
        ++organized_results[votes[i]];
        if (organized_results[votes[i]] > current_max) {
            new_winner = true;
        }
        else if (organized_results[votes[i]] == current_max) {
            if (votes[i] > winner) {
                new_winner = true;
            }
        }
        if (new_winner) {
            current_max = organized_results[votes[i]];
            winner = votes[i];
            new_winner = false;
        }
    }
    
    return winner;
}

