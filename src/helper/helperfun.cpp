#include <helper/helperfun.h>


Helper::Helper(){}


void Helper::unsortArray(std::vector<int> &arr){

    std::cout << "\nUnsorted Array: ";
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " ";
    }

}


void Helper::sortArray(std::vector<int> &arr){

    std::cout << "\nSorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
}


Helper::~Helper(){}