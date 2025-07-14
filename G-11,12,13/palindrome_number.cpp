#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int x = n;
    int num = 0;
    while (n != 0)
    {                    
        int rem = n % 10;
        num = num * 10 + rem;
        n = n / 10;
    }
  
    return x == num;
}

int main()
{
    int n;
    cin >> n;
    
    cout << isPalindrome(n);
    return 0;
}