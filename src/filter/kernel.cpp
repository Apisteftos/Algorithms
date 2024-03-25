#include <filter/kernel.h>

Kernel::Kernel(KernelSize ksz): kernelsize(ksz){};


void Kernel::printKernel(){
    switch (kernelsize)
    {
    case KernelSize::ThreeXThree:
        std::cout << "--------------------------3x3 Kernel------------------------" << std::endl;
        break;
    case KernelSize::FiveXFive:
        std::cout << "--------------------------5x5 Kernel------------------------" << std::endl;
        break;
    case KernelSize::NineXNine:
        std::cout << "--------------------------9x9 Kernel------------------------" << std::endl;
        break;
    case KernelSize::FifteenXFifteen:
        std::cout << "--------------------------15x15 Kernel----------------------" << std::endl;
    default:
        std::cerr << "Error: Unknown kernel size " << std::endl;
        assert(false);
        break;
    }
}



void Kernel::setKernelSize(const KernelSize &ksz){
    kernelsize = ksz;
}


std::set<std::tuple<int, int>> Kernel::SizeThreeXThree(){

    std::set<std::tuple<int, int>> CoorPoints;

    for(int x = -1; x <= 1; ++x){
        for(int y = -1; y <= 1; ++y){
            CoorPoints.insert(std::make_tuple(x,y));
        }
    }


    return CoorPoints;
}

std::set<std::tuple<int, int>> Kernel::SizeFiveXFive(){

    std::set<std::tuple<int, int>> CoorPoints;

    for(int x = -2; x <= 2; ++x){
        for(int y = -2; y <= 2; ++y){
            CoorPoints.insert(std::make_tuple(x,y));
        }
    }

    return CoorPoints;
}

std::set<std::tuple<int, int>> Kernel::SizeNineXNine(){

    std::set<std::tuple<int, int>> CoorPoints;

    for(int x = -4; x <= 4; ++x){
        for(int y = -4; y <= 4; ++y){
            CoorPoints.insert(std::make_tuple(x,y));
        }
    }

    return CoorPoints;

}


std::set<std::tuple<int, int>> Kernel::SizeFifteenXFifteen(){

    std::set<std::tuple<int, int>> CoorPoints;

    for(int x = -7; x <= 7; ++x){
        for(int y = -7; y <= 7; ++y){
            CoorPoints.insert(std::make_tuple(x,y));
        }
    }

    return CoorPoints;

}



float Kernel::GaussianFunction(int x, int y, float sigma)
{

    float gaussian = (1 / (2 * PI * std::pow(sigma, 2))) * std::exp(-(std::pow(x, 2) + std::pow(y,2))/(2* std::pow(sigma, 2)));

    return gaussian;
}


float Kernel::GaussianSum(std::set<std::tuple<int, int>> kernel, float sigma){
    float sum = 0.0f;
    for(const auto & point: kernel){
        int point0 = std::get<0>(point);
        int point1 = std::get<1>(point);
        float gaussian = GaussianFunction(point0, point1, sigma);
        sum += gaussian;
    }

}


float Kernel::Normalize(std::set<std::tuple<int, int>> kernel, float sum, float sigma){
    float norm_gaussian = 0.0f;
    for(const auto & point: kernel){
        int point0 = std::get<0>(point);
        int point1 = std::get<1>(point);
        float gaussian = GaussianFunction(point0, point1, sigma);
        norm_gaussian =  gaussian/sum;
        std::cout << norm_gaussian << std::endl;
    }


    return norm_gaussian;
}






Kernel::~Kernel(){}

