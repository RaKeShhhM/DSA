//856 -> stack string, O(n) time, O(n) space
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for (char ch : s) {
            if (ch == '(') {
                st.push(0);
            }
            else {
                int innerScore = st.top();
                st.pop();

                int score;

                // ()
                if (innerScore == 0)
                    score = 1;

                // (A)
                else
                    score = 2 * innerScore;

                // AB
                st.top() += score;
            }
        }

        return st.top();
    }
};