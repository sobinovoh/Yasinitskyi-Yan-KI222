#include <iostream>
#include <cmath>
#include <clocale>
#include "ModulesYasinitskiy.h"

using namespace std;

int main() {
  char a, b;
  int x, y, z;

  setlocale(LC_ALL, "");

  cout << "\u00A9 Yasinitskiy Yan" << endl;

  cout << " Введіть x: ";
  cin >> x;
  cout << " Введіть y: ";
  cin >> y;
  cout << " Введіть z: ";
  cin >> z;
  cout << " Введіть a: ";
  cin >> a;
  cout << " Введіть b: ";
  cin >> b;

  cout << boolalpha << (a + 1 > abs(b - 2)) << endl;

  cout << "x = " << dec << x << " У шістнадцятковій системі: " << hex << x << endl;
  cout << "y = " << dec << y << " У шістнадцятковій системі: " << hex << y << endl;
  cout << "z = " << dec << z << " У шістнадцятковій системі: " << hex << z << endl;

  cout << "s = " << s_calculation(x, y, z) << endl;
}
