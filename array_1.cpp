#include <iostream>
using namespace std;
#include <limits.h>

int solve(int arr[], int size)
{
    // for(int i = 0 ; i< size ; i++){
    //     if(arr[i]==target){
    //         cout<<"element found at indez  : "<<i<<endl;
    //     }
    // }

    // int max = INT_MIN;

    // for(int i =0 ; i< size ; i ++){
    //     if(arr[i]>max){
    //         max = arr[i];
    //     }
    // }
    // cout<<max;
    // return 0;

    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[i] << " ";
            break;
        }
        else
        {
            cout << arr[i] << " ";
            i++;
            cout << arr[j] << " ";
            j--;
        }
    }

    return 0;
}

int main()
{
    int arr[] = {3, 3, 423, 5, 34, 34, 5, 34, 45};
    int size = 9;
    // solve( arr, size);

    int a = 10; 
    int b = 5;

    // a = a -b;
    // b = a + b;
    // a = b-a;

    // a= a^b;
    // b= a^b;
    // a = b^a;


  
    int right = size -1;
    for(int left = 0 ; left < right  ; left++){
        arr[left] = arr[left] ^arr[right];
        arr[right] = arr[left] ^arr[right];
        arr[left] = arr[left] ^arr[right];
        right--;


    }

    for(int i =0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}