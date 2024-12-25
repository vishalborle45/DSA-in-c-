#include <iostream>
using namespace std;
#include "assert.h"
#include<climits>
#include<math.h>

// numeric hollow half pyramid

// 1
// 12
// 1 3
// 1  4
// 12345

//  for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             if(i ==0 || i == n -1 || j ==0 || j == i){
//                 cout<<j+1;
//             }else{
//                 cout<<" ";
//             }
//         }
//             cout<<endl;
//     }

// numeric inverted hollow half pyramid

// 12345
// 2  5
// 3 5
// 45
// 5

// for (int i = 0; i < n; i++)
//     {

//         for (int j = i+1; j <=n; j++)
//         {
//             if(j ==i +1 || i ==0|| j ==n ){
//                 cout<<j;
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

// numeric palindrome equilateral pyramid
//     1
//    121
//   12321
//  1234321
// 123454321

//   int k = n;
//     for (int i = 0; i < n; i++)
//     {
//         int a = 0;
//         for (int j = 0; j < k; j++)
//         {
//             if(j< n-i -1){
//                 cout<<" ";
//             }else{
//                 if(j<n){
//                 a = a +1;

//                 }else{
//                     a= a-1;
//                 }
//                 cout<<a;
//             }
//         }
//         k++;
//         cout<<endl;
//     }

// sodid half diamond

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

//  for(int i = 0 ; i < 2*n -1 ; i++){
//         int counter = 0;
//         if(i<n){
//             counter = i;
//         }else{
//             counter = 2*n-i-2;
//             //counter = n - (i % n) -2;
//         }
//             for(int j = 0 ; j <= counter  ; j++){
//                 cout<<"*";
//         }
//         cout<<endl;
//     }

// fancy pattern  1

// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****

//  for (int i = 0; i < n; i++)
//     {
//         int start = 8 - i;
//         int num = i + 1;
//         int count_num = num;
//         for (int j = 0; j < 17; j++)
//         {
//             if( j ==start && count_num > 0){
//                 cout<<num;
//                 count_num --;
//                 start+= 2;
//             }else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }

// facy patern 2

// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1

// int a =1;
//    for(int i = 0 ; i< n ; i++){
//     for(int j =0 ; j< i+1 ; j++){
//         cout<<a;
//         a++;

//         if(j<i){
//             cout<<"*";
//         }
//     }
//     cout<<endl;
//    }

//    //for second shrinking phase

//    int start = a-n;
//    for(int i  =0 ; i< n ; i++){
//     int b = start;
//     for(int j =0 ; j< n -i; j++){
//         cout<<b;
//         b++;
//         if(j<n-i -1){
//             cout<<"*";
//         }
//     }
//     start = start -(n -i-1) ;
//     cout<<endl;
//    }

// fancy pattern 3

// *
// *1*
// *121*
// *12321*
// *1234321*
// *123454321*
// *12321*
// *121*
// *1*
// *

//  cout<<"*\n";
//     for (int i = 0; i < n; i++)

//     {
//         cout<<"*";
//         int cond = i <= n / 2 ? 2 * i : 2*(n - i -1);
//         for (int j = 0; j <= cond; j++)
//         {
//             if (j < cond / 2)
//             {
//                 cout << j + 1;
//             }
//             else
//             {
//                 cout << cond - j + 1;
//             }
//         }
//         cout<<"*";
//         cout<<endl;
//     }
//     cout<<"*";

// floyd's triangle pattern

// 1
// 23
// 456
// 78910
// 1112131415
// 161718192021
// 22232425262728

//   int count = 1;
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j<i+1 ; j++){
//             cout<<count;
//             count++;
//         }
//         cout<<endl;
//     }

// pascal's triangle pattern

// 1
// 11
// 121
// 1331
// 14641

// for(int i = 1 ; i <= n ; i++){
//     int count = 1;
//     for(int j = 1 ; j<=i ; j++){
//         cout<<count;
//         count = count * (i-j)/j;
//     }
//     cout<<endl;
// }

// butterfly pattern

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *

// for(int i = 0 ; i < 2 * n ; i++){
//         int cond = i <n ? i : 2 *n -i-1 ;
//         int space_count = i< n ? 2*(n-cond-1) : i- cond -1;
//         for(int j= 0 ; j< 2 *n ; j++){
//             if(j<=cond){
//                 cout<<"*";
//             }else if(space_count> 0){

//                 cout<<" ";
//                 space_count --;
//             }else{
//                 cout<<"*";
//             }

//         }
//             cout<<endl;
//     }

// Km to miles

// float ans = n * 0.6213;
//     cout<<ans;

// print all digits of an integer

//  while (n)
//     {
//         int digit = n %10;
//         n = n/10;
//         cout<<" digits are : "<<digit;
//     }

// area of circl

// float pi = 3.14;
//     float ans = pi * n *n;
//     cout<<ans;

// even or odd by both method

// normal method
// if(n %2 ==0){
//     cout<<"even";
// }else{
//     cout<<"odd";
// }

// bitwise method

// if(n&1){
//     cout<<"odd";
// }else{
//     cout<<"even";
// }

// check given number is prime or not
// int fact = 1;
// while(n != 0){
//     fact = fact * n;
//     n = n-1;

// }
// cout<<fact;


//print the prime number from 1 to n

    // for(int i = 2 ; i <= n ; i++){
    //     bool isprime = true;

    //     for (int j = 2; j < i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             isprime = false;
    //             break;
    //         }
    //     }
    //     if(isprime){
    //     cout<<i<<endl;

    //     }

    // }


//reverse integer
    // int reverse =0;
    // int i = 1;
    // if(n >= INT_MAX || n <= INT_MIN ){
    //     return ;
    // }
    // else{
    //     while (n)
    //     {
    //         int digit = n % 10;
    //          reverse = reverse *10 + digit;
    //          i++;
    //          n =n/10;
    //     }

    //     cout<<reverse;
        
    // }



//count set bit
    // int count = 0 ;
    // while (n)

    // {
    //     int bit = n & 1;
    //     if(bit ==1 ){
    //         count++;
    //     }
    //     n = n>>1;
    // }
    // cout<<count;

void solve(int n)
{
    int num = 0;
    for(int i = 0 ; i< n ; i++){
        int digit = 0;
        cin>>digit;

        num = num *10 + digit;
    }
    cout<<num;
    
    

}
int main()
{

    int n;
    cout << "enter the N : " << endl;
    cin >> n;
    solve(n);

    return 0;
}
