class Solution {
 public:
  int numberOfAlternatingGroups(vector<int>& colors, int k) {
    const int n = colors.size();
    int ans = 0;
    int alternating = 1;

    for (int i = 0; i < n + k - 2; ++i) {
      if (colors[i % n] == colors[(i - 1 + n) % n]) {
        alternating = 1;
      } else {
        alternating += 1;
      }

      if (alternating >= k) {
        ++ans;
      }
    }

    return ans;
  }
};
