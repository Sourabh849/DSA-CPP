#include <iostream>
#include <unordered_map>
using namespace std;

int longestSubstring(string s, int k) {
    unordered_map<char, int> m;

    int left = 0, maxlen = 0;

    for(int right = 0; right < s.size(); right++) {
        m[s[right]]++;

        while(m.size() == k) {
            m[s[left]]--;
            if(m[s[left]] == 0) {
                m.erase(s[left]);
            }
            left++;
        }

        maxlen = max(maxlen, right - left + 1);
    }

    return maxlen;
}

int main() {
    string s;
    int k;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter k: ";
    cin >> k;

    int result = longestSubstring(s, k);

    cout << "Longest substring length = " << result;

    return 0;
}