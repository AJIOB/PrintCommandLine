#include <iostream>
using namespace std;

int main (int argc, const char *argv[]) {
  for (int number = 1; number < argc; ++number) {
    cout << argv[number] << endl;
  }
  return 0;
}
