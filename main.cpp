#include <iostream>

int *compareTriplets(int a[3], int b[3]) {

    static int result[2];


    for (int i = 0; i < 3 ; i++) {
        if (a[i] < b[i]) {
            result[1]++;  //Increase Bob's point
        } else if(a[i] == b[i]) {
            continue;
        } else if(a[i] > b[i]) {
            result[0]++;   //Increase Alice's point
        }

    }
    return result;

}

int checkRange(int arr[3]) {
    for (int i = 0; i < 3; i++) {
        if(1 > arr[i] || arr[i] > 100) {
            return -1;
        }
    }
    return 0;
}

int main() {
    int a[3]; //Alice
    int b[3]; //Bob

    std::cin >> a[0] >> a[1] >> a[2]; //Alice's choices
    std::cin >> b[0] >> b[1] >> b[2]; //Bob's choices

    //check function controls if numbers given are between 1 and 100
    if(checkRange(a) == -1 || checkRange(b) == -1) {
        std::cout << "Values must be between 1 and 100";
        return 0;
    }

    //Calls the function for comparing their challange ratings and store the results
    int* results = compareTriplets(a, b);
    for (int i = 0; i < 2 ; i++) {
        std::cout << results[i] << " ";
    }
    return 0;
}
