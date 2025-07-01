class Solution {
public:
    int minAddToMakeValid(string s) {
        int moves = 0, tally = 0;

        for (char ch : s) {
            if (ch == '(') {
                tally++;
            } else if (ch == ')' && tally > 0) {
                tally--;
            } else {
                moves++;}}
        
        return tally + moves;}
};