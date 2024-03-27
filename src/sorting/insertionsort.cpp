#include <sorting/insertionsort.h>


InsertionSort::InsertionSort(){}

void InsertionSort::insertionsort(std::vector<int> &arr){

for(int i = 1; i <= arr.size() - 1; i++){
    int sortvalue = arr[i];
    int j = i;
    while (j > 0 && arr[j - 1] > sortvalue){
        arr[j] = arr[j-1];
        j -=1;

    }
    arr[j] = sortvalue;
}


}



InsertionSort::~InsertionSort(){}