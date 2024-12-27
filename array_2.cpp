#include <iostream>

using namespace std;
#include <algorithm>



// pair<int, int> twosum(int arr[], int size, int target){
//     pair<int,int> ans = make_pair(-1,-1);

//     for(int i = 0 ; i< size ; i++){
//         for(int j= 0 ; j < size ; j++){
//             if(i==j){
//                 continue;
//             }
//             if(arr[i] + arr[j]==target){
//                 ans.first= arr[i];
//                 ans.second = arr[j];
//                 return ans;
//             }
//         }

//     }

//     return ans;

// }

int printalltriplet(int arr[] , int n){
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j= 0 ; j< n ; j++){
            for(int k = 0 ; k < n ; k++){
                cout<<arr[i]<<" ,"<<arr[j]<<" ,"<<arr[k];
                cout<<endl;
                count++;
            }

        }
    }
    cout<<count;
    return 0;
}


void rotatearray(int arr[], int size , int shift){
    int finalshift = shift % size;

    if(shift ==0){
        return ;
    }

    int temp [10000];
    int index = 0;
    
    for(int i = size-finalshift ; i < size ; i++){
        temp[index] = arr[i];
        index++;
    }

    for(int i = size-1 ; i >=0 ; i--){

        if(i-finalshift >= 0){
            arr[i] = arr[i-finalshift];

        }
 
    

    }

    for(int i = 0 ; i< finalshift ; i++){
        arr[i]= temp[i];
    }
}
int main()
{
    // duch national flag algo
    // sort 0,1,2

    // int arr[6] = {0, 1, 0, 0, 1 , 1};

    // int middle = 0;
    // int end = 5 - 1;
    // int start = 0;
    // while (middle <= end)
    // {
    //     if (arr[middle] == 0)
    //     {
    //         swap(middle, end);
    //         start++;
    //         middle++;
    //     }
    //     else if (arr[middle] == 1)
    //     {
    //         middle++;
    //     }
    //     else{
    //             swap(middle, end);
    //             end--;
    //         }
    // }




    // for(int i= 0 ; i< 6 ; i ++){
    //     arr[i]= ~arr[i];
    //     arr[i]= arr[i]&1;
    // }

    // int start = 0;
    // int end = 6-1;
    // while(start<=end){
    //     if(arr[start]==1){
    //         swap(arr[start], arr[end]);
    //         end--;            
    //     }else{
    //         start++;
    //     }
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int arr[6]={10,20, 30, 40,50, 60};

    // for(int i =0 ; i< 4 ; i++){
    //     for(int j= 4-1 ; j>=i  ; j--){
    //         cout<<arr[i]<<", "<<arr[j];
    //         cout<<endl;
    //     }
    // }
    // int target = 20;
    // pair<int, int> p = twosum(arr,4,target);
    int n = 6;

    for(int i = 0 ;  i< n ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    int shift = 2;
    rotatearray(arr, n, shift);

    for(int i = 0 ;  i< n ; i++){
        cout<<arr[i]<<" ";
    }


    // if(p.first == -1 && p.second ==-1){
    //     cout<<"not found \n";
    // }else{
    //     cout<<p.first<<" "<<p.second;
    // }




    return 0;
}