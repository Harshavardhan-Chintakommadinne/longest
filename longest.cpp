#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to find the longest common substring
void longestCommonSubstring(const string &s1, const string &s2) {
    int n = s1.size();
    int m = s2.size();

    // DP table initialized with zeros
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    int maxLen = 0;
    int endIndex = 0; // End index of substring in s1

    // Fill DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLen) {
                    maxLen = dp[i][j];
                    endIndex = i - 1; // store last character index of substring
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    // Print DP table
    cout << "DP Table:" << endl;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    // Extract substring
    string lcs = s1.substr(endIndex - maxLen + 1, maxLen);
    cout << "\nLongest Common Substring: " << lcs << endl;
    cout << "Length: " << maxLen << endl;
}

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if (s1.size() != s2.size()) {
        cout << "Error: Strings must be of equal length!" << endl;
        return 1;
    }

    longestCommonSubstring(s1, s2);

    return 0;
}
