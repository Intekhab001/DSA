#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void twoPointerApproach(int arr[], int size){
    int left=0, right=size-1;
    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
        }

        while(arr[right]==1 && right>left){
            right--;
        }

        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main(){
    int arr[]={0,1,1,0,0,1,0,1,1};
    printArray(arr,9);
    twoPointerApproach(arr,9);
    printArray(arr,9);

}