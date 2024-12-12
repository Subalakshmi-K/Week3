#include <iostream>
using namespace std;

int main()
{
   int num, sum = 0, Remainder;
   cin >> num;
   
   while(num>0)
   {
      Remainder = num%10;
      sum = sum + Remainder;
      num=num/10;
   }
    cout << sum;
   return 0;
}
