#include <iostream>
using namespace std;

bool Ispalindrome(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {

        if (str[i] != str[n - i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{

    string str = "racecar";
    cout << "palindrome: " << (Ispalindrome(str)) << endl;

    return 0;
}