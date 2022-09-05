#include <iostream>
using namespace std;

int findMax(int arr[], int size){
    int maximum = INT_MIN;
    for(int i=0; i<size; i++){
        maximum = max(arr[i],maximum);
    }
    return maximum;
}

int findMin(int arr[], int size){
    int minimum = INT_MAX;
    for(int i=0; i<size; i++){
        minimum = min(arr[i],minimum);
    }
    return minimum;
}

int main() {
    int arr[7] = {1,-80,6,3,5,22,9};
    int max = findMax(arr,7);
    int min = findMin(arr,7);

    cout<<"Max : "<<max<<" \nMin: "<<min<<endl;
}