#include <iostream>
using namespace std;

int main()
{
    int num, Reverse=0, Remainder,original;
    cin >> num;
    
    original =num;
    
    while(num > 0)
    {
        Remainder = num % 10;
        Reverse = Reverse * 10 + Remainder;
        num = num/10;
    }
    
    if(original % 10 == 0)
    {
      cout << Reverse;
        
        while(original == 0)
        {
           cout << '0';
           original=original/10;
        }
    }
    else
    {
    cout << Reverse;
    }
    return 0;
}
