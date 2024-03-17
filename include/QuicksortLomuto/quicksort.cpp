#include "quicksort.h"

QuicksortAlg::QuicksortAlg(){}


void QuicksortAlg::swap(int &arr1, int &arr2){

    int temp = arr1;
    arr1 = arr2;
    arr2 = temp;
}



void QuicksortAlg::quickSort(std::vector<int>& arr, int lo, int hi){
    if (lo < hi ){

        int p = partition(arr, lo, hi);
        quickSort(arr, lo, p - 1);
        quickSort(arr, p +1, hi);
            
    }
}



int QuicksortAlg::partition(std::vector<int>& arr, int lo, int hi){
    int pivot = arr[hi];
    int i = lo - 1;
    for (int j = lo; j <= hi - 1; j++) {
        if (arr[j] <= pivot){

            i++;
            swap(arr[i], arr[j]);
        }
    }


    swap(arr[i + 1], arr[hi]);
    return i + 1;

}


QuicksortAlg::~QuicksortAlg(){}