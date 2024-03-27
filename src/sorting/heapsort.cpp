#include <sorting/heapsort.h>



HeapSort::HeapSort(){}


void HeapSort::heapsort(std::vector<int> &arr){

int count = arr.size();
int start = std::floor(count/ 2);
int end = count;

while (end > 1){
    if (start > 0){
        start -= start;
    } else {
        end -=end;
        std::swap(arr[end], arr[0]);
    }

    int root = start;
    while (root < end){
        int child = root;

        if ( child + 1 && arr[child] < arr[child +1]){
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