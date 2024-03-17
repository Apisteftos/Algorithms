#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include <iostream>
#include <vector>

class Bubblesort{



public:
    Bubblesort();

    
    void bubblesort(std::vector<int> &arr);

    void swap(int &arr1, int &arr2);

    ~Bubblesort();




};


#endif /* BUBBLESORT_H */