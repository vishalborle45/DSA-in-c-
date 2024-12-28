#include <iostream>
#include <limits.h>
#include <vector>
#include <map>

using namespace std;

// int search(vector<vector<int>> arr, int row, int col, int target)
// {
//     int min = INT_MAX;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] < min)
//             {
//                 min = arr[i][j];
//             }
//         }
//     }
//     return min;
// }
//     int count = 0;
// for (int i = 0; i < arr.size(); i++)
// {
//     for (int j = 0; j < arr[0].size(); j++)
//     {
//         if(arr[0].size()-i  -1==  j){
//         count = count + arr[i][j];
//         }
//     }
// }
//     cout << "coutnt is " << count;

void solve(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            swap(arr[j][i], arr[i][j]);
        }
    }
}

void print(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

void check(int a[])
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{

    // int arr[2][3];

    // // fill(arr,arr+6, 344);

    // for(int i = 0 ; i< 2 ; i++){
    //     fill(arr[i], arr[i]+3, 34);
    // }

    // int arr[4][4] ={{3,4,3,45},{4,35,3,2},{34,3,4,32},{4,34,2,64}};

    // int row = 4, col = 4;
    // int target = 64;
    // bool a = search(arr, 4, 4 , target);
    // cout<<a<<endl;

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << "  ";
    //     }
    // }

    // vector<vector<int>> arr = {{10, 11, 12},
    //                             {20, 21, 22},
    //                             {30, 31, 32}};

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[0].size(); j++)
    //     {
    //         cout << "Enter the element : " << i << " " << j << endl;
    //         cin >> arr[i][j];
    //     }
    // }

    // int a = search(arr , arr.size(), arr[0].size(), 34);

    // solve(arr);
    // print(arr);

    // int a[] = {1,2,3,4,5,6,7,8,8,10};
    // check(a);

    // for(int i = 0 ; i< arr.size(); i ++){
    //     for(int j = 0 ; j < arr[0].size(); j++){
    //         cout<<arr[i][j];
    //         cout<<endl;
    //     }
    // }

    // column wise
    // row wise
    // diagonal  printing

    // int arr[] = {-1,23,-12,12,-3,23,-22};
    // int low =0;
    // int high = 7-1;
    // while (low < high)
    // {
    //     if(arr[low]< 0){
    //         low++;
    //     }else if(arr[high]>0){
    //         high --;
    //     }else{
    //         swap(arr[low], arr[high]);
    //     }
    // }

    // for(int i = 0 ; i< 7; i++){
    //     cout<<arr[i]<<"  ";
    // }

    // for(int i  =0; i< 5; i++){
    //     int index = abs(arr[i]-1);
    //     if(arr[index]> 0){
    //         arr[index]*=-1;
    //     }

    // }

    // int i = 0;
    // while (i< 5 )
    // {
    //     int index = arr[i] -1;
    //     if(arr[index]!=arr[i]){
    //         swap(arr[index], arr[i]);
    //     }else{
    //         i++;
    //     }
    // }

    // int arr[] = {1,5,3,4,3,5,6};

    // for(int i = 0 ; i< 7 ; i++){
    //     for(int j = i+1 ; j <7;j++){
    //         if(arr[i]==arr[j]){
    //             cout<<i+1;
    //             return 0;
    //         }
    //     }

    // }

    // int hash [100] = {0};

    // for(int i = 0 ; i < 7 ; i++){
    //     hash[arr[i]]++;
    // }

    // for(int i = 0 ; i < 7; i++){
    //     if(hash[arr[i]]>1){
    //         cout<<i+1;
    //         break;
    //     }
    // }
    // common element in 3 soted array

    //  int i =0 ,j =0 ,k=0 ;
    //     vector<int>ans;
    //     int lastadded = INT_MIN;
    //     while(i < arr1.size() && j < arr2.size() && k < arr3.size()){
    //         if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){

    //             if(lastadded != arr1[i]){
    //             ans.push_back(arr1[i]);
    //             lastadded = arr1[i];
    //             }
    //            ++i;
    //            ++j;
    //            ++k;

    //         }else if(arr1[i]<arr2[j]){
    //             ++i;
    //         }else if (arr2[j]< arr3[k]){
    //             ++j;
    //         }else{
    //             ++k;
    //         }
    //     }

    //     return ans;

    // for(int i = 0 ; i < 7 ; i++){

    //     if(arr[i]!=i+1){

    //     cout<<i+1<<" ";
    //     }
    // }

    vector<vector<int>> arr = { {10, 20, 30, 40},
                                {50, 60, 70, 80},
                                {80, 100, 110, 120}
    };


int rowsize = arr.size();
int colsize = arr[0].size();


for(int col = 0 ; col < colsize ; col++){
    if(col%2 ==0){
        for(int row = 0 ; row< rowsize ; row++){
            cout<<arr[row][col]<<" ";
        }
    }else{
        for(int row = rowsize -1 ; row>= 0 ; row--){
            cout<<arr[row][col]<<" ";
        }

    }
}
    return 0;
}
