class Solution {
public:
  int numJewelsInStones(string jewels, string stones) {
    unordered_set<char> jw(jewels.begin(), jewels.end());
    return accumulate(stones.begin(), stones.end(), 0, [&](const int x, const char y) {
      return x + jw.count(y);
    });
  }
};