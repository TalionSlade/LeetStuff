class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0) return false;

    string s = to_string(x);
    int ln = s.length();
    string new_s;

    int i = ln - 1;
    while (i >= 0) {
      new_s.push_back(s[i]);
      i--;
    }
    
    if (s == new_s) return true;
    return false;
  }
};