#include "bubblesort.h"



Bubblesort::Bubblesort(){}


void Bubblesort::swap(int &arr1, int &arr2){

    int tmp = arr1;
    arr1 = arr2;
    arr2 = arr1; 
}




void Bubblesort::bubblesort(std::vector<int> &arr){
    int n = arr.size();
    bool swapped = false;
    while (!swapped){
        int i = 1;
        while (i <= n - 1){
            if (arr[i -1] > arr[i]){
                swap(arr[i - 1], arr[i]);
                swapped = true;
            }
        }
    }
    n--;

}


Bubblesort::~Bubblesort(){}