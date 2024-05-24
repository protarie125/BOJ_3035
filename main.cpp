#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;
using vs = vector<string>;
using vc = vector<char>;
using vvc = vector<vc>;

ll r, c, zr, zc;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> r >> c >> zr >> zc;
  vs read(r);
  for (auto&& s : read) {
    cin >> s;
  }

  vvc ans(r * zr, vc(c * zc));
  for (auto i = 0; i < r; ++i) {
    for (auto j = 0; j < c; ++j) {
      const auto& x = read[i][j];
      for (auto zi = 0; zi < zr; ++zi) {
        for (auto zj = 0; zj < zc; ++zj) {
          ans[i * zr + zi][j * zc + zj] = x;
        }
      }
    }
  }

  for (const auto& w : ans) {
    for (const auto& x : w) {
      cout << x;
    }
    cout << '\n';
  }

  return 0;
}