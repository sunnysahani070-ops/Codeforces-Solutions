#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    if (cin >> s) {
        int n = s.length();
        
        for (int i = 1; i < n; ++i) {
            // If the current character matches the previous one
            if (s[i] == s[i - 1]) {
                char replacement = 'a';
                
                // Find a character that doesn't match the previous or the next character
                while (replacement == s[i - 1] || (i + 1 < n && replacement == s[i + 1])) {
                    replacement++;
                }
                
                s[i] = replacement; // Apply the replacement
            }
        }
        
        cout << s << "
";
    }
    
    return 0;
}