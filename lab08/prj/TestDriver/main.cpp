#include "ModulesYasinitskiy.h"
#include <iostream>
#include <clocale>
#include <limits>

using namespace std;

bool test(int x, int y, int z, float s) {
  if ((s != NAN && s_calculation(x, y, z) == s) || (isnan(s) && isnan(s_calculation(x, y, z))))
    return true;
  else
    cout << " Очікуваний результат: " << s << " Отриманий результат: " << s_calculation(x, y, z) << endl;
    return false;
}

int main() {
  int x[5] = {10, 0, 4, 4, 5};
  int y[5] = {2, 1, 1, 0, 7};
  int z[5] = {5, 1, 1, 0, 2};
  float s[5] = {9.49993801116943359375, NAN, 2.0536382198333740234375, 1, 2128.04345703125};

  cout.precision(std::numeric_limits<double>::digits10);

  setlocale(LC_ALL, "");

  for (int i = 0; i < 5; i++) {
    test(x[i], y[i], z[i], s[i])
    ? cout << "Test " << i << " (x = " << x[i] << ", y = " << y[i] << ", z = " << z[i] << ", s = " << s[i] << ") " << " passed"
    : cout << "Test " << i << " (x = " << x[i] << ", y = " << y[i] << ", z = " << z[i] << ", s = " << s[i] << ") " << " failed";
    cout << endl;
  }

  return 0;
}
