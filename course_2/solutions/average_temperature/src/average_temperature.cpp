#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
  unsigned int n;
  cin >> n;
  vector<int64_t> temperatures(n);
  int64_t sum = 0;
  for (int64_t& temperature : temperatures) {
    cin >> temperature;
    sum += temperature;
  }

  int64_t average = sum / n;
  vector<int64_t> result_indices;
  for (int64_t i = 0; i < n; ++i) {
    if (temperatures[i] > average) {
      result_indices.push_back(i);
    }
  }

  cout << result_indices.size() << endl;
  for (int64_t result_index : result_indices) {
    cout << result_index << " ";
  }
  cout << endl;

  return 0;
}