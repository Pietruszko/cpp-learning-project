#include <fmt/core.h>
#include <string>
#include <vector>
int main(int argc, char *argv[]) {
  fmt::print("Hello {}\n", "Spok");
  fmt::print("Hello {}\n", "Pipu");
  std::pmr::string pmr = "pmr";
  std::string normal = "normal";
  fmt::print("Hello {}\n", pmr);
  fmt::print("Hello {}\n", normal);
  std::vector<int> v = {1, 2, 3, 4};
  for (int i : v) {
    fmt::print("{} ", i);
  }
  fmt::print("\n");
  v.push_back(5);
  v.push_back(6);
  for (int i : v) {
    fmt::print("{} ", i);
  }
  fmt::print("\n");
  return 0;
}
