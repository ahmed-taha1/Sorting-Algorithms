#include <bits/stdc++.h>
#include <thread>
#include <chrono>
#include "SortingLib.h"
using namespace std;



void random_gen(int arr[],const int& N);

unsigned int millis_since_midnight();


int main(){
    // change N it to change the sample size
	const int N = 50000;
    int arr[N];

    // generate random numbers and fill it into the array
    random_gen(arr, N);

    // print before sort
    for(int i = 0; i < N; i++)
        cout << arr[i] << ' ';
    cout << '\n';

    // get the time before sorting
    int start = millis_since_midnight();
    

    /** applay sort algorithm **/
    // SortingLib::ShellSort(arr, N);
    // SortingLib::insertionSort(arr, N);
    // SortingLib::BubbleSort(arr, N);
    // SortingLib::CountSort(arr, N);
    // SortingLib::selectionSort(arr, N);
    // SortingLib::QuickSort(arr, N);
    SortingLib::merge_sort(arr, N);

    // get the time after sorting
    int end = millis_since_midnight();


    // print after sort
    for(int i = 0; i < N; i++)
        cout << arr[i] << ' ';
    cout << '\n';



    // get the diffrance between the time and print it
    int difference = end - start;
    cout << "time is: " << difference << " ms";
}







void random_gen(int arr[],const int& N){

    srand((unsigned) time(NULL));

	for(int i = 0; i < N; i++){
		int random = (rand() % 100001);
		arr[i] = random;
	}
    
}


unsigned int millis_since_midnight(){
    std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
    time_t tnow = std::chrono::system_clock::to_time_t(now);
    tm *date = std::localtime(&tnow);
    date->tm_hour = 0;
    date->tm_min = 0;
    date->tm_sec = 0;
    auto midnight = std::chrono::system_clock::from_time_t(std::mktime(date));
    return std::chrono::duration_cast<std::chrono::milliseconds>(now - midnight).count();
}