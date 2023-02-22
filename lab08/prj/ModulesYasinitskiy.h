#include <cmath>

float s_calculation(int x, int y, int z) {
  if (x > 3)
    return pow(3*sin(sqrt(12*x+log10(x-3))), y)+(z/(float)x);
  else
    return NAN;
}
