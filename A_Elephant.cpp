#include <math.h>
#include <iostream>
using namespace std;

int main() {
   long x, n = 0;
   cin >> x;

   for (int i = 5; i > 0; i--) {
      n += x / i;
      x %= i;
   }

   cout << n << endl;

   return 0;
}