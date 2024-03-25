#ifndef CONVOLUTION_H
#define CONVOLUTION_H
#include "kernel.h"
#include <iostream>
#include <vector>



class Convolution : public Kernel
{
    Convolution();
    std::vector<std::vector<int>> Image();
    void convolutionWindow(const std::vector<std::vector<int>>& arr, int row, int col, int kernel_size, float gaus_val);
    ~Convolution();
    
};





#endif /* CONVOLUTION_H */