#include <iostream>
using namespace std;
#include "assert.h"

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


//fancy pattern 3

*
*1*
*121*
*12321*
*1234321*
*123454321*
*12321*
*121*
*1*
*


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



void print_pattern(int n)
{ 
    
   
}
int main()
{

    int n;
    cout << "enter the N : " << endl;
    cin >> n;
    assert(n <= 9);
    print_pattern(n);

    return 0;
}
