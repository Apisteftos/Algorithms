#include <sorting/countingsort.h>



CountingSort::CountingSort(){}


void CountingSort::countingsort(std::vector<int> &input, int k){

    std::vector<int> count(k + 1, 0);
    std::vector<int> output(input.size());

    for(int i = 0; i < input.size(); i++){
        int j = input[i];
        count[j]++;
    }

    for(int i = 1; i <= k; i++){
        count[i] += count[i-1];
    }

    for( int i = input.size() - 1; i>=0; i-- ){
        int j = input[i];
        count[j]--;
        output[count[j]] = input[i];
    }


    for (int i = 0; i < input.size(); i++) {
            input[i] = output[i];
    }

}


CountingSort::~CountingSort(){}