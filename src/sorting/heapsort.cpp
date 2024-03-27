#include <sorting/heapsort.h>



HeapSort::HeapSort(){}


void HeapSort::heapsort(std::vector<int> &arr){

int count = arr.size();
int start = std::floor(count/ 2);
int end = count;

while (end > 1){
    if (start > 0){
        start -= 1;
    } else {
        end -= 1;
        std::swap(arr[end], arr[0]);
    }

    int root = start;
    while (2 * root + 1 < end){
        int child = 2 * root + 1;

        if ( child + 1 < end && arr[child] < arr[child + 1]){
            child += 1;
        }

        if (arr[root] < arr[child]){
            std::swap(arr[root], arr[child]);
            root = child;
        } else{
            break;
        }

    }
}




}


HeapSort::~HeapSort(){}