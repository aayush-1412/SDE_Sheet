#include <bits/stdc++.h>
vector<vector<long long int>> printPascal(int n) {
  // Write your code here.
  vector<vector<long long int>> arr;

  for (int i = 0; i < n; ++i) {
    vector<long long int> row;
    for (int j = 0; j <= i; ++j) {
      if (j == 0 || i == j) {
        row.push_back(1);
      } else
        row.push_back(arr[i - 1][j - 1] + arr[i - 1][j]);
    }
    arr.push_back(row);
  }
  return arr;
}
