#include <iostream>
using namespace std;

int main()
{
    int num, Product=1, Remainder,original;
    cin >> num;
    
    original =num;
    
    while(num > 0)
    {
        Remainder = num % 10;
        Product = Product * Remainder;
        num = num/10;
    }
    
    if(original % 10 == 0)
    {
      cout << '0';
    }
    else
    {
      cout << Product;
    }
return 0;
}
