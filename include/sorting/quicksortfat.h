#ifndef QUICKSORTFAT_H
#define QUICKSORTFAT_H
#include <iostream>
#include <vector>

class QuicksortFat{

private:

    std::pair<int, int> partitionFat(std::vector<int> &arr, int lo, int hi);

public: 

    QuicksortFat();

    void quickSortFat(std::vector<int> &arr, int lo, int hi);

    void swap(int &arr1, int &arr2);

    ~QuicksortFat();

};




#endif /* QUICKSORTFAT_H */