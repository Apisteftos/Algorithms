#include <filter/convolution.h>
#include <opencv2/opencv.hpp>


Convolution::Convolution():Kernel(KernelSize::ThreeXThree){}


std::vector<std::vector<int>> Convolution::Image(){

    cv::Mat image = cv::imread("IMG_0986.jpg", cv::IMREAD_COLOR);
    cv::cvtColor(image, image, cv::COLOR_BayerBG2BGR);


    return image;
}




void Convolution::convolutionWindow(const std::vector<std::vector<int>>& arr, int row, int col, int kernel_size, float gaus_val){
    for (size_t i = row; i < row + kernel_size; i++) {
        for (size_t j = col; j < col + kernel_size; j++) {
            std::cout << gaus_val * arr[i][j] << " " ;
        }
        std::cout << std::endl;
    }

}




Convolution::~Convolution(){}