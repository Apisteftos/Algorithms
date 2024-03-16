#include "../include/Quicksort/quicksort.h"




int main(){

    /*******************************************************/
    /*          Merge Sort Bottom Up algorithm             */
    /*******************************************************/


    std::vector<int> mergArr = {7, 8, 1, 0, 6, 10, 34, 5, 73, 12, 44};



    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    /*          Quick Sort algorithm                       */
    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    

    std::vector<int> arr = {7, 8, 1, 0, 6, 10, 34, 5, 73, 12, 44};
    int hi = arr.size();

    std::cout <<"##################### Quicksort Algorithm ######################" << std::endl;
    
    std::cout << "\nUnsorted array: ";
    for(int i = 0; i < hi; i++){
        std::cout << arr[i] << " ";
    }


    QuicksortAlg quicksrt = QuicksortAlg();

    quicksrt.quickSort(arr, 0, hi - 1);
    
    // Print the sorted array
    std::cout << "\nSorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;


    return 0;
}