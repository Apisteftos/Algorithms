#include "../include/Quicksort/quicksort.h"




int main(){



    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    /*          Quick Sort algorithm                       */
    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    

    std::vector<int> arr = {7, 8, 1, 0, 6, 10, 34, 5, 73, 12, 44};
    int lo = 0;
    int hi = arr.size();

  

    std::cout <<"##################### Quicksort Algorithm ######################" << std::endl;
    
    QuicksortAlg quicksrt = QuicksortAlg();

    quicksrt.quickSort(arr, lo, hi - 1);
    
    // Print the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;


    return 0;
}