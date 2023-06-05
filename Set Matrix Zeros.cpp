#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix) {
  // Write your code here.
  int n = matrix.size();
  int m = matrix[0].size();
  vector<pair<int, int>> v;
  int i, j;
  int modified = -1;
  for (i = 0; i < n; ++i) {
    for (j = 0; j < m; ++j) {
      if (matrix[i][j] == 0) {
        v.push_back(make_pair(i, j));
        modified = 1;
      }
    }
  }

  if (modified != -1) {
    for (auto it : v) {
      for (i = 0; i < n; ++i)
        matrix[i][it.second] = 0;
      for (j = 0; j < m; ++j)
        matrix[it.first][j] = 0;
    }
  }
}
