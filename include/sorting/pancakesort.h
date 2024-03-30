#ifndef PANCAKESORT_H
#define PANCAKESORT_H
#include <iostream>
#include <vector>

class PancakeSort{

public: 
    PancakeSort();
    void pancakesort(std::vector<int> &arr);
    int maxindex(std::vector<int> &arr, int k);
    void flip(std::vector<int> &arr, int k);
    ~PancakeSort();

};



#endif /* PANCAKESORT_H */