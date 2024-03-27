#include <sorting/selectionsort.h>

SelectionSort::SelectionSort(){}


void SelectionSort::selectionsort(std::vector<int> &arr, int index){
    
    while (index < arr.size() - 1){
        int minpos = index;
        for(int i = index + 1 ; i < arr.size(); i++){
            if (arr[i] < arr[minpos]){
                minpos = i;

            }
        }

        std::swap(arr[minpos],arr[index]);
        index +=1;
    }
    





}


SelectionSort::~SelectionSort(){}