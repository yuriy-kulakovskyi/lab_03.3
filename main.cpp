// Lab_03_3.cpp
// Кулаковський Юрій
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 9

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double x, y;

  cout << "x = "; cin >> x;

  if (x <= - 7 || x > 4)
    y = 0;
  else
    if (x > -7 && x <= -3)
      y = x + 7;
    else
      if (x > -3 && x <= -2)
        y = 4;
      else
        if (x > -2 && x <= 2)
          y = pow(x, 2);
        else
          if (x > 2 && x <= 4)
            y = 2 * x - 4;

  cout << endl;
  cout << "y = " << y << endl;

  cin.get();
  return 0;
}
