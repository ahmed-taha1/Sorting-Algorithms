#include <iostream>

using namespace std;
template<typename T>
void selectionSort(T* arr , int size){
    for (int i = 0; i < size ; ++i) {
        /// selecting min from the part to the right since all element before are already sorted
        int mnIdx = i;
        for (int j = i+1 ;j <size; ++j) {
            if(arr[j] < arr[mnIdx])
                mnIdx = j;
        }
        swap(arr[i],arr[mnIdx]);
    }
}

// int main() {
//     int arr[] = {9,7,8,5,4,3,2,-1,1};
//     selectionSort(arr,9);
//     for (int i = 0; i < 9; ++i) {
//         cout<<arr[i]<<" ";
//     }    return 0;
// }
