#include <iostream>
#include <unordered_map>

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    int n;
    std::cin >> n;

    std::unordered_map<int, int> counts;
    for (int i = 0; i < n; i++) {
      int x;
      std::cin >> x;
      counts[x]++;
    }

    bool found = false;
    for (const auto& p : counts) {
      if (p.second >= 3) {
        std::cout << p.first << std::endl;
        found = true;
        break;
      }
    }

    if (!found) {
      std::cout << -1 << std::endl;
    }
  }

  return 0;
}
