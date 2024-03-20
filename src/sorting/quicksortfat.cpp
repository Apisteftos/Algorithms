#include "quicksortFat.h"


QuicksortFat::QuicksortFat(){}

void QuicksortFat::swap(int &arr1, int &arr2){

    int temp = arr1;
    arr1 = arr2;
    arr2 = temp;
}



void QuicksortFat::quickSortFat(std::vector<int> &arr, int lo, int hi){
    if (lo >= 0 && lo < hi ){

        std::pair<int, int> pair = partitionFat(arr, lo, hi);
        int lt = pair.first;
        int gt = pair.second;
        quickSortFat(arr, lo, lt - 1);
        quickSortFat(arr, gt + 1, hi);
            
    }
}


std::pair<int, int> QuicksortFat::partitionFat(std::vector<int> &arr, int lo, int hi){
    int pivot = arr[(lo + hi) / 2];
    int lt = lo;
    int eq = lo;
    int gt = hi;

    while (eq <= gt){
        if (arr[eq] < pivot){
            swap(arr[eq], arr[lt]);
            lt++;
            eq++;
        } else if (arr[eq] > pivot)
        {
            swap(arr[eq], arr[gt]);
            gt--;
        } else if (arr[eq] == pivot)
        {
            eq++;
        }
        
        
    }

    return {lt, gt};
}



QuicksortFat::~QuicksortFat(){}
