#include <math.h>
#include <iostream>

using namespace std;

int main() { 
   
   string s;
   long n = 0, lower = 0, upper = 0;

   cin >> s;

   for(auto & c: s) {
      if(c <= 90)
         lower++;
      else 
         upper++;
   }

   if(lower > upper) {
      for (auto & c: s) c = (char)toupper(c);
   } else {
      for (auto & c: s) c = (char)tolower(c);
   }

   cout << s;

   return 0;
}