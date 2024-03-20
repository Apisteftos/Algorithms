#include "sorting/bubblesort.h"



Bubblesort::Bubblesort(){}




void Bubblesort::bubblesort(std::vector<int> &arr){
    int n = arr.size();
    bool swapped = false;
    do {
        swapped = false;
        for (int i = 1; i <= n - 1; i++) {
            if (arr[i - 1] > arr[i]) {
                std::swap(arr[i - 1], arr[i]);
                swapped = true;
            }
        }
        n--;
        
    } while (swapped);
    

}


Bubblesort::~Bubblesort(){}