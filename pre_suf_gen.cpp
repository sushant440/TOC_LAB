#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();

    // 1. All Prefixes
    cout << "\nPrefixes:\n";
    for (int i = 1; i <= n; ++i) {
        cout << str.substr(0, i) << "\n";
    }

    // 2. All Suffixes
    cout << "\nSuffixes:\n";
    for (int i = 0; i < n; ++i) {
        cout << str.substr(i) << "\n";
    }

    // 3. All Substrings
    cout << "\nSubstrings:\n";
    for (int i = 0; i < n; ++i) {
        for (int len = 1; len <= n - i; ++len) {
            cout << str.substr(i, len) << "\n";
        }
    }

    // 4. Total Number of Substrings
    int total = n * (n + 1) / 2;
    cout << "\nTotal non-empty substrings: " << total << "\n";
    cout << "Total including empty string: " << total + 1 << "\n";

    return 0;
}