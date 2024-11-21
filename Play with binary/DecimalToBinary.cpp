#include <iostream>
using namespace std;
// pow return double so there are always make mistakes 
int ReturnPower(int base, int power)
{
    int answer = 1;
    for (int i = 0; i < power; i++)
    {
        answer *= base;
    }
    return answer;
}
int DecimalToBinary(int number)
{
    int answer = 0, i = 0;
    while (number != 0)
    {
        int bit = number & 1;
        // cout << "firstly" << "  " << bit << "  " << answer << endl;
        answer += (ReturnPower(10, i) * bit);
        i++;
        number >>= 1;
        // cout << "  " << answer << endl;
    }
    return answer;
}
int main()
{
    int number;
    cout << "Enter the number = ";
    cin >> number;
    cout << "The number in decimal is " << DecimalToBinary(number);
    return 0;
}
