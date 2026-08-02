#include <iostream>
#include <string>

using namespace std;

int main() {
    string text, pattern;

    cout << "Enter the main string: ";
    cin >> text;
    cout << "Enter the string to check: ";
    cin >> pattern;

    int n = static_cast<int>(text.length());
    int m = static_cast<int>(pattern.length());

    if (m > n || text.find(pattern) == string::npos) {
        cout << "Not Present\n";
    } else if (text.rfind(pattern, 0) == 0 && m < n) {
        cout << "Proper Prefix\n";
    } else if (text.rfind(pattern, 0) == 0) {
        cout << "Prefix\n";
    } else if (text.compare(n - m, m, pattern) == 0 && m < n) {
        cout << "Proper Suffix\n";
    } else if (text.compare(n - m, m, pattern) == 0) {
        cout << "Suffix\n";
    } else {
        cout << "Substring\n";
    }

    return 0;
}
