#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int start = 0;
    int end = s.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (s[start] != s[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not a Palindrome";

    return 0;
}
