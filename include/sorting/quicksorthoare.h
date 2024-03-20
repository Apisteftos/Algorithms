#ifndef QUICKSORTHOARE_H
#define QUICKSORTHOARE_H
#include <iostream>
#include <vector>

class QuickSortHoare{

private:

    int partitionHoare(std::vector<int> &arr, int lo, int hi);

public: 

    QuickSortHoare();

    void quickSortHoare(std::vector<int> &arr, int lo, int hi);

    void swap(int &arr1, int &arr2);

    ~QuickSortHoare();



};




#endif /* QUICKSORTHOARE_H */