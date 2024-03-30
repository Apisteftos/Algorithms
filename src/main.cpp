#include <sorting/quicksortlomuto.h>
#include <sorting/quicksorthoare.h>
#include <sorting/quicksortfat.h>
#include <sorting/bubblesort.h>
#include <sorting/selectionsort.h>
#include <sorting/insertionsort.h>
#include <sorting/heapsort.h>
#include <sorting/countingsort.h>
#include <sorting/pancakesort.h>
#include <filter/convolution.h>
#include <filter/lowpass.h>
#include <helper/helperfun.h>



int main(){

    Helper help;


    //@TODO optimize the code in main call each algorithm with args



    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    /*                                       Low Pass Filter                                           */
    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/








    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    /*                                       Gaussian Filter                                           */
    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

    float sigma = 1.0f;
    const int stride = 1;
    std::vector<float> norm_gaussian;
    //Convolution conv;
    Kernel kernel = Kernel(KernelSize::ThreeXThree);
    kernel.printKernel();
    std::cout << std::endl;
    std::set<std::tuple<int, int>> threeXthreeKernel = kernel.SizeThreeXThree();


    float sum = kernel.GaussianSum(threeXthreeKernel, sigma);   
    float normalize =  kernel.Normalize(threeXthreeKernel, sum, sigma);
    







    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    /*                                Merge Sort Bottom Up Algorithm                                   */
    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

 

    std::vector<int> mergArr = {7, 8, 1, 0, 6, 10, 34, 5, 73, 12, 44};

    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    /*                                Counting Sort Algorithm                                          */
    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

    std::vector<int> panckarr = {38, 4, 1, 5, 6, 3, 133, 98, 12, 13, 53, 72, 3};
    std::cout <<"##################### Pancake Sort Algorithm ########################" << std::endl;
    help.unsortArray(panckarr);
    PancakeSort pancake;
    pancake.pancakesort(panckarr);
    help.sortArray(panckarr);




    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    /*                                Counting Sort Algorithm                                          */
    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

    std::vector<int> countarr = {19, 23, 1, 0, 6, 3, 48, 80, 3, 35, 91};
    std::cout <<"##################### Counting Sort Algorithm ########################" << std::endl;
    help.unsortArray(countarr);
    CountingSort countstr;
    countstr.countingsort(countarr, 91);
    help.sortArray(countarr);


    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    /*                                Heap Sort Algorithm                                              */
    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

    std::vector<int> heaparr = {19, 23, 1, 0, 6, 3, 48, 80, 3, 35, 91};
    std::cout <<"####################### Heap Sort Algorithm #########################" << std::endl;
    help.unsortArray(heaparr);
    HeapSort heapsrt = HeapSort();
    heapsrt.heapsort(heaparr);
    help.sortArray(heaparr);



    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    /*                                Insertion Sort Algorithm                                         */
    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

    std::vector<int> insarr = {3, 1, 1, 0, 6, 23, 75, 27, 92, 85, 73};
    std::cout <<"###################### Insertion Sort Algorithm #########################" << std::endl;
    help.unsortArray(insarr);
    InsertionSort insertsort = InsertionSort();
    insertsort.insertionsort(insarr);
    help.sortArray(insarr);





    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    /*                                Selection Sort Algorithm                                         */
    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


    std::vector<int> selectsort = {5, 2, 13, 93, 444, 22, 1, 4, 7, 33, 14, 7, 55};

    std::cout <<"###################### Selection Sort Algorithm #########################" << std::endl;
    help.unsortArray(selectsort);
    SelectionSort slcSort = SelectionSort();
    slcSort.selectionsort(selectsort, 0);
    help.sortArray(selectsort);


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
    /*                                 Quick Sort Fat Algorithm                                        */
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

    std::cout <<"##################### Quicksort Hoare Algorithm ########################" << std::endl;
    
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