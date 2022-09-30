#include <iostream>

using namespace std;

int main() {

  int v[] = {3, 4, 5, 7, 1};

  cout << v[2] << "\n";
  cout << *(2 + v) << "\n";
  cout << 2[v] << "\n";

  return 0;
}