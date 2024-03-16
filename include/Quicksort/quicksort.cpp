#include "quicksort.h"

QuicksortAlg::QuicksortAlg(){}


void QuicksortAlg::swap(int &arr1, int &arr2){

    int temp = arr1;
    arr1 = arr2;
    arr2 = temp;
}



void QuicksortAlg::quickSort(std::vector<int> arr, int lo, int hi){
    if (lo < hi ){

        int p = partition(arr, lo, hi);
        quickSort(arr, lo, p - 1);
        quickSort(arr, p +1, hi);
    }

    
  


}

int QuicksortAlg::partition(std::vector<int> arr, int lo, int hi){

    int i = lo - 1;

    for (int j = lo; j <= hi - 1;){
        if (arr[j] <= arr[hi]){

            i +=1;
            swap(arr[i], arr[j]);

        }
        j +=1;
    }

    i +=1;
    swap(arr[i], arr[hi]);

    return i;

}


QuicksortAlg::~QuicksortAlg(){}