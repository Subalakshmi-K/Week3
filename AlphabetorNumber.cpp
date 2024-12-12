#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
      cout << "Alphabet";
    }
    else
    {
      cout << "Not an Alphabet";
    }
    return 0;
}
