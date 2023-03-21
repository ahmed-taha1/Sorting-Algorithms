#include <bits/stdc++.h>
using namespace std;

template<typename T>
void ShellSort(T* arr, const int& size){
    for (int gap = size/2; gap > 0; gap /= 2){
        for (int i = gap; i < size; i ++){
            T temp = arr[i];
            int j;
            for(j = i; j >= gap && arr[j - gap] > temp; j-=gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
}

// int main(){
//     int u[] = {3, 4, 16, 1, 22};
//     ShellSort(u, 5);
//     for(int i = 0; i < 5; i++)
//         cout << u[i] << ' ';
// }