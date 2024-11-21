#include <iostream>
#include <math.h>
using namespace std;
int BinaryToDecimal(int number)
{
    int answer = 0, i = 0;
    while (number != 0)
    {
        int bit = number % 10;
        if (bit)
        {
            answer += pow(2, i);
        }
        i++;
        number /= 10;
    }
    return answer;
}
int main()
{
    int number;
    cout << "Enter the number = ";
    cin >> number;
    cout << "The number in decimal is " << BinaryToDecimal(number);
    return 0;
}
