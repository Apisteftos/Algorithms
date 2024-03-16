#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
#include <array>
#include <vector>


class QuicksortAlg{

private: 

   
    int partition(std::vector<int> arr, int lo, int hi);


public: 

    QuicksortAlg();

    
    
    void quickSort(std::vector<int> arr, int lo, int hi);

    void swap(int & arr1, int & arr2);


    ~QuicksortAlg();


};

#endif /* QUICKSORT_H */