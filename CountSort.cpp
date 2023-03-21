#include <bits/stdc++.h>
using namespace std;


void CountSort(int arr[], const int& size){
    int temp_arr[size], mx = -1e9;
    
    for(int i = 0; i < size; i++){
        temp_arr[i] = arr[i];
        mx = max(arr[i], mx);
    }

    vector<int> freq(mx + 1, 0);
    for(int i = 0; i < size; i++)
        freq[arr[i]]++;

    for(int i = 1; i <= mx; i++)
        freq[i] += freq[i - 1];

    
    for(int i = size - 1; i >= 0; i--){
        arr[freq[temp_arr[i]] - 1] = temp_arr[i];
        freq[temp_arr[i]]--;
    }
}

// int main(){
//     int k[] = {4, 5, 6, 2, 1};
//     CountSort(k, 5);
//     for(int i = 0; i < 5; i++)
//         cout << k[i] << ' ';
// }