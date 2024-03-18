#include <QuicksortLomuto/quicksort.h>
#include <QuicksortHoare/quicksortHoare.h>
#include <QuicksortFat/quicksortFat.h>
#include <BubbleSort/bubblesort.h>



int main(){

    /*******************************************************/
    /*          Merge Sort Bottom Up algorithm             */
    /*******************************************************/

    std::vector<int> mergArr = {7, 8, 1, 0, 6, 10, 34, 5, 73, 12, 44};




    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    /*                                 Bubble Sort  Algorithm                                          */
    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

    std::vector<int> bubblevec = {5, 0, 5, 38, 999, 22, 8, 4, 11, 13, 16, 9};

    std::cout <<"####################### Bubble Sort Algorithm ##########################" << std::endl;

    std::cout << "\nUnsorted array: ";
    for(int i = 0; i < bubblevec.size(); i++){
        std::cout << bubblevec[i] << " ";
    }

    Bubblesort bubble = Bubblesort();
    bubble.bubblesort(bubblevec);
    
    // Print the sorted array
    std::cout << "\nSorted array: ";
    for (int i = 0; i < bubblevec.size(); i++) {
        std::cout << bubblevec[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;




    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    /*                                 Quick Sort Fat Algorithm                                      */
    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/



    std::vector<int> arr3 = {5, 0, 5, 38, 999, 22, 8, 4, 11, 13, 16, 9};
    int hi3 = arr3.size();

    std::cout <<"###################### Quicksort Fat Algorithm #########################" << std::endl;
    
    std::cout << "\nUnsorted array: ";
    for(int i = 0; i < hi3; i++){
        std::cout << arr3[i] << " ";
    }

    QuicksortFat quicksrtfat = QuicksortFat();

    quicksrtfat.quickSortFat(arr3, 0, hi3 - 1);
    
    // Print the sorted array
    std::cout << "\nSorted array: ";
    for (int i = 0; i < arr3.size(); i++) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;





    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    /*                                 Quick Sort Hoare Algorithm                                      */
    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

    std::vector<int> arr2 = {4, 333, 9, 0, 1, 55, 77, 38, 3, 5, 23};
    int hi2 = arr2.size();

    std::cout <<"##################### Quicksort Hoare Algorithm #######################" << std::endl;
    
    std::cout << "\nUnsorted array: ";
    for(int i = 0; i < hi2; i++){
        std::cout << arr2[i] << " ";
    }

    QuickSortHoare quicksrthoare = QuickSortHoare();

    quicksrthoare.quickSortHoare(arr2, 0, hi2 - 1);
    
    // Print the sorted array
    std::cout << "\nSorted array: ";
    for (int i = 0; i < arr2.size(); i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;



    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    /*                                 Quick Sort Lomuto Algorithm                                     */
    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    

    std::vector<int> arr = {7, 8, 1, 0, 6, 10, 34, 5, 73, 12, 44};
    int hi = arr.size();

    std::cout <<"##################### Quicksort Lomuto Algorithm ######################" << std::endl;
    
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