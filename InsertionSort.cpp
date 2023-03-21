#include <iostream>

using namespace std;

template<typename T>
void insertionSort(T* arr ,int size){
    for (int i = 1; i < size ; ++i) { // check each element
        T current = arr[i];
        int j ;
        for (j = i-1; j >= 0 ; --j) {  // check all the elements before it to see if they are bigger
            if(arr[j] <= current)
                break; /// since all the elements before the current index are already sorted
            arr[j+1] = arr[j];
           /// arr[j] = current;  ///could do  it here but Alot of useless assignments
        }
        arr[j+1] = current;
    }
}

// int main() {
//     int arr[] = {9,7,8,5,4,3,2,-1,1};
//     insertionSort(arr,9);
//     for (int i = 0; i < 9; ++i) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
