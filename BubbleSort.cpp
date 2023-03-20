#include <iostream>
using namespace std;
template<typename T>
void BubbleSort(T* arr , int size){
    for (int i = 0; i <size; ++i) {
        bool flag = true;
        for (int j = 0; j < size-1 ; ++j) {
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag)
            break;
    }
}
int main() {
    int arr[] = {9,7,8,5,4,3,2,-1,1};
    BubbleSort(arr,9);
    for (int i = 0; i < 9; ++i) {
        cout<<arr[i]<<" ";
    }    return 0;
}
