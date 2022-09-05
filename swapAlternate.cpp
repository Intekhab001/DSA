#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[],int size){

    for (int i = 0; i < size; i+=2)
    {
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}



int main(){
    int even[6] = {1,3,2,7,11,8};
    int odd[5] = {3,4,5,7,2};
    printArray(even,6);
    swapAlternate(even,6);
    printArray(even,6);



    printArray(odd,5);
    swapAlternate(odd,5);
    printArray(odd,5);
    
}