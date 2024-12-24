#include <iostream>

using namespace std;

// square pattern

//     for(int i = 0 ; i < side ; i++){
//           for(int j = 0; j< side ; j++){
//              cout<<"* ";
//           }
//           cout<<endl;
//      }

// rectangle

//         for(int i = 0 ; i < row ; i ++){
//             for(int j = 0 ; j < col ; j++){
//                  cout<<"* ";
//             }
//             cout<<endl;
//         }

// hollow rectangle

// for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++){
//             if(i ==0 || i == row-1){
//                 cout<<"* ";
//             }else{
//                 if(j ==0 || j == col-1){
//                     cout<<"* ";
//                 }else{
//                     cout<<"  ";
//                 }
//             }
//         }
//         cout<<endl;
//     }

// holllow square

//  for (int i = 0; i < side; i++)
//     {
//         for (int j = 0; j < side; j++)
//         {
//             if (i == 0 || i == side - 1)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 if (j == 0 || j == side-1)
//                 {
//                     cout << "* ";
//                 }
//                 else
//                 {
//                     cout << "  ";
//                 }
//             }
//         }
//         cout << endl;
//     }

// half pyramid
//  for(int i= 0; i< side ; i ++){
//      for(int j = 0 ; j <= i ; j++){
//          cout<<"* ";
//      }
//      cout<<endl;
//     }

// inverted half pyramid

// for(int i = 0 ; i < side ; i ++){
//     for(int j = 0 ; j < side -i; j++){
//         cout<<"* ";
//     }
//     cout<<endl;
//    }

// hollow half pyramid

// for( int i = 0; i < side ; i ++){
//      for (int j = 0 ; j <=i ; j++){
//         if(i ==0 || i == side -1){
//         cout<<"* ";
//         }else{
//             if(j==0 || j ==i){
//                 cout<<"* ";
//             }else{
//             cout<<"  ";

//             }
//         }
//      }
//      cout<<endl;
//    }

// invertd half hollow pyramid

//  for(int i = 0 ; i < side ; i ++){
//     for (int j = 0 ; j < side - i; j++){
//         if(i ==0 || i ==side -1 || j== 0 || j ==side - i -1){
//             cout<<"* ";
//         }else{

//          cout<<"  ";
//         }
//     }
//     cout<<endl;
//    }

// numeric half pyramid
// for(int i = 0 ; i < side ; i ++){
//     for (int j = 0 ; j < i +1 ; j++){
//         cout<<j+1<<" ";
//     }
//     cout<<endl;
//    }

// full pyramid

// for(int i = 0; i < N ; i++){
//     for(int j = 0 ; j < N-i -1; j++){
//         cout<<" ";
//     }
//     for(int k =0 ; k< i +1; k++){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }


//inverted full pyramid

// for(int i = 0; i < N ; i++){
//         for(int j = 0; j < i ; j++){
//             cout<<" ";
//         }
//         for(int k =0; k < N -i; k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

// diamond pattern

// for(int i = 0; i < N ; i++){
//         for(int j = 0; j < N-i -1; j++){
//             cout<<" ";
//         }
//         for(int k = 0; k< i+1 ; k++){
//             cout<<"* ";
//         }
        
//         cout<<endl;
//     }

//     for(int i =0 ; i< N ; i++){
//         for(int j =0; j< i; j++){
//             cout<<" ";
//         }
//         for(int k= 0; k< N -i; k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }


//hollow full pyramid

//  for(int i = 0 ; i< N ; i++){
//         for(int j = 0; j< N -i -1; j++){
//             cout<<" ";
//         }
//         for(int k = 0 ; k< i +1 ; k++){
//             if(i==0 || k==0 || k == i|| i==N-1){

//             cout<<"* ";
//             }else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }


//inverted  hollow pyramid

// for(int i = 0; i < N ; i++){
//     for(int j  =0; j < i ; j++){
//         cout<<" ";
//     }
//     for(int j = 0; j< N -i; j++){
//         if(j==0||i==0|| i==N-1||j==N-i-1){
//             cout<<"* ";
//         }else{
//             cout<<"  ";
//         }
//     }
//     cout<<endl;
//    }

// hollow diamond

// for(int i = 0 ; i< N ; i++){
//         for(int j = 0; j< N -i -1; j++){
//             cout<<" ";
//         }
//         for(int k = 0 ; k< i +1 ; k++){
//             if(i==0 || k==0 || k == i){

//             cout<<"* ";
//             }else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }

//     for(int i = 0; i < N ; i++){
//     for(int j  =0; j < i ; j++){
//         cout<<" ";
//     }
//     for(int j = 0; j< N -i; j++){
//         if(j==0 || i==N-1||j==N-i-1){
//             cout<<"* ";
//         }else{
//             cout<<"  ";
//         }
//     }
//     cout<<endl;
//    }

//mixed pyramid

// //part 1
//     for(int i = 0; i< N ; i++){
//         //I. stars
//         for(int j= 0; j< N-i; j++){
//             cout<<"*";
//         }

//         //II. spaces
//         for(int j = 0; j< 2*i +1; j++){
//             cout<<" ";
//         }


//          //III. stars
//         for(int j= 0; j< N-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     //part 2

//     for(int i =0; i< N ; i++){
//         //I. stars
//         for(int j  =0 ; j <  i +1; j++){
//             cout<<"*";
//         }

//         //II.space
//         for(int j =0 ; j < 2 *(N -i)-1; j++ ){
//             cout<<" ";
//         }

//         //II. stars
//         for(int j  =0 ; j <  i +1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }


//fancy 12 pattern

//  for(int i = 0 ; i< N ; i++){
//         for(int j = 0 ; j < 2*i +1; j++){
//             if(j%2==0){
//                 cout<<i+1;
//             }else{

//             cout<<"*";
//             }

//         }
//         cout<<endl;
//     }


// full fancy pattern

// for(int i = 0 ; i< N ; i++){
//         for(int j = 0 ; j < 2*i +1; j++){
//             if(j%2==0){
//                 cout<<i+1;
//             }else{

//             cout<<"*";
//             }

//         }
//         cout<<endl;
//     }
//     N = N-1;
//     for(int i = 0 ; i < N ; i++){
//         for(int j = 0;  j< 2* (N -i)-1; j++){
//             if(j%2==0){
//                 cout<<N-i;
//             }else{

//             cout<<"*";
//             }
//         }
//         cout<<endl;
//     }


void print_pattern(int N)
{
    for(int i = 0 ; i < N ;  i++){
        char a = 'A';
        for(int j = 0 ; j< i+1 ; j++){
            cout<<a;
            a = a +1;
        }
        a--;
        while (a >'A')
        {
            a--;
            cout<<a;
        }
        
        cout<<endl;
    }
    
}

int main()
{
    int N;
    cout << "enter the vaule N : " << endl;
    cin >> N;
    print_pattern(N);

    return 0;
}