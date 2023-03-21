#include <bits/stdc++.h>
using namespace std;

template<typename T>
int partition(T arr[], int l, int r){
    T x = arr[l];
    int pivot = l;
    for(int i = l + 1; i <= r; i++){
        if(arr[i] < x)
            swap(arr[i], arr[++pivot]);
    }
    swap(arr[l], arr[pivot]);
    return pivot;
}

template<typename T>
void QuickSort(T arr[], int N, int l = -1, int r = -1){
    if(r == -1 && l == -1){
        l = 0;
        r = N - 1;
    }

    if(l >= r)
        return;
    int mid = partition(arr, l, r);
    QuickSort(arr, N, l, mid - 1);
    QuickSort(arr, N, mid+1, r);
}

// int main(){
//     string x[] = {"cc", "bb", "aa"};
//     QuickSort(x, 3);
//     for(int i = 0; i < 3; i++)
//         cout << x[i] << ' ';    
// }