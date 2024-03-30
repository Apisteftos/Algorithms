#include <sorting/pancakesort.h>



PancakeSort::PancakeSort(){}


void PancakeSort::pancakesort(std::vector<int> &arr){
    int n = arr.size();
    while(n > 1){
        int mxidx = maxindex(arr, n);
        if( mxidx != n-1){
            if(mxidx != 0){
                flip(arr, mxidx);
            }
            flip(arr, n - 1);
        }
        n -=1;
    }


}


int PancakeSort::maxindex(std::vector<int> &arr, int k){
    int index = 0;
    for(int i = 0; i < k; i++){
        if (arr[i] > arr[index]){
            index = i;
        }
    }

    return index;

}


void PancakeSort::flip(std::vector<int> &arr, int k){
    int left = 0;
    while (left < k){
        std::swap(arr[k], arr[left]);
        k-=1;
        left +=1;
    }


}


PancakeSort::~PancakeSort(){}