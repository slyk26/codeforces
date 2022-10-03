#include <math.h>
#include <iostream>
#define ll long long

using namespace std;

int main() { 
   string n; 
   int cnt = 0;

   cin >> n;

   for (const char &c: n){
      if(c == '4' || c == '7'){
         cnt++;
      }
   }

   if(cnt == 4 || cnt == 7) {
      cout << "YES";
   } else {
      cout << "NO";
   }

   return 0; 
}