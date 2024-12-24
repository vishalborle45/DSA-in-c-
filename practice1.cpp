#include <iostream>
#include <math.h>

int decimal_to_binary(int n)
{

    int binaryNo = 0;
    int i = 0;
    while (n > 0)
    {
        int rem = n % 2;
        binaryNo = rem * pow(10, i++) + binaryNo;
        n = n / 2;
    }
    return binaryNo;
}

int decimal_binary_and(int n)
{
    int binary = 0;
    int i = 0;

    while (n > 0)
    {
        int rem = n & 1;
        binary = rem * pow(10, i++) + binary;
        n = n >> 1;
    }
    return binary;
}

int binary_to_decimal(int n){
    int decimal  = 0;
    int i =0;
    while (n > 0){
        int rem = n %2;
        decimal = rem * pow(2 , i++) + decimal;
        n = n /10;
    }
    return decimal;
}
int main()
{

    int answer = binary_to_decimal(100000);
    std::cout << answer;
    return 0;
}