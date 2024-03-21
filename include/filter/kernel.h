#ifndef KERNEL_H
#define KERNEL_H
#include <iostream>
#include <assert.h>
#include <set>
#include <tuple>
#include <cmath>
#include <opencv2/opencv.hpp>
#include "definition.h"
#define PI 3.1415

class Kernel{

    private:

        KernelSize kernelsize;
        


    public: 

        Kernel(KernelSize ksz);
        void printKernel();
        void setKernelSize(const KernelSize &ksz);
        float GaussianFunction(int x, int y, float sigma);
        float GaussianSum(std::set<std::tuple<int, int>> kernel, float sigma);
        float Normalize(std::set<std::tuple<int, int>> kernel, float sum, float sigma); 
        std::set<std::tuple<int, int>> SizeThreeXThree();
        std::set<std::tuple<int, int>> SizeFiveXFive();
        std::set<std::tuple<int, int>> SizeNineXNine();
        std::set<std::tuple<int, int>> SizeFifteenXFifteen();
        
        ~Kernel();

};



#endif /* KERNEL_H */