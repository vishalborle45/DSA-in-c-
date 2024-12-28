#include<iostream>
#include<vector>
using namespace std;


void print(vector<int> arr){
    for(auto it : arr){
        cout<<it<<" ";
    }
}
int main(){


    // int n;
    // cin>>n;
    // int *arr = new int[n];
    

    // for(int i = 0 ; i< n ; i++){
    //     cin>>arr[i];
    //     cout<<endl;
    // }

    //  for(int i = 0 ; i< n ; i++){
    //     cout<<arr[i];
    //     cout<<endl;
    // }

    vector<int>arr({2,43,3,4,2,3,23});


    arr.push_back(2222);

    // arr.pop_back();
    // cout<<arr.front();
    // cout<<arr.back();

    vector<int>arr2(arr);

    arr2.clear();
    arr2.push_back(22);
    print(arr2);



    

    // cout<<arr;


    return 0;
}