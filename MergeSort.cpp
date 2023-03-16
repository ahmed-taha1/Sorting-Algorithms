#include <bits/stdc++.h>
using namespace std;


template<typename T>
void merge(T* data, int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int k = l, i = 0, j = 0;
    vector<T> L(n1), R(n2);
    for(int i = 0; i < n1; i++)
        L[i] = data[l + i];ta
    for(int i = 0; i < n2; i++)
        R[i] = data[mid + i + 1];

    while (i < n1 && j < n2){
        if(L[i] <= R[j]){
            data[k++] = L[i++];
        }
        else{
            data[k++] = R[j++];
        }
    }
    while (i < n1)
    {
        data[k++] = L[i++];
    }
    while (j < n2)
    {
        data[k++] = R[j++];
    }
}

template<typename T>
void merge_sort(T* data, int l, int r){
    if(l < r){
        int mid = l + (r - l) / 2;
        merge_sort(data, mid + 1, r);
        merge_sort(data, l, mid);
        
        merge(data, l, mid, r);
    }
}


int main(){
    int u[7] = {7,4,2,6,8,2,4};
    string g[4] = {"ahmed", "moha", "taa", "ha"};
    int l = 0, r = 6;
    merge_sort(u, l, r);
    for(int i = 0; i < 7; i++)
        cout << u[i] << " ";
    
    cout << '\n';
    merge_sort(g, 0, 3);
    
    for(int i = 0; i < 4; i++)
        cout << g[i] << " ";
}