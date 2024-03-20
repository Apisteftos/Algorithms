#include "sorting/quicksorthoare.h"


QuickSortHoare::QuickSortHoare(){}


void QuickSortHoare::swap(int &arr1, int &arr2){
    int temp = arr1;
    arr1 = arr2; 
    arr2 = temp;
}


void QuickSortHoare::quickSortHoare(std::vector<int> &arr, int lo, int hi){

    if (lo >= 0 && hi >=0 && lo < hi){
        int p = partitionHoare(arr, lo, hi);
        quickSortHoare(arr, lo, p);
        quickSortHoare(arr, p + 1, hi);
        
    }

}


int QuickSortHoare::partitionHoare(std::vector<int> &arr, int lo, int hi){
    int pivot = arr[lo + (hi - lo) / 2];
    int i = lo - 1;
    int j = hi + 1; 

    while (true){
        do {
            i++;
        } while (arr[i] < pivot);
        
        do {
            j--;
        } while ( arr[j] > pivot);
        
        if (i >= j){
            return j;
        }

        swap(arr[i], arr[j]);

    }
    
}


QuickSortHoare::~QuickSortHoare(){}

