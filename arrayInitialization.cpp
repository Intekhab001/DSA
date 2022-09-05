#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void updateArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        arr[i] += 1;
    }
}

int main()
{
    int arr[5] = {2, 3, 4, 1, -5};
    int arrayLength = sizeof(arr);
    cout << arrayLength << endl;
    printArray(arr,5);
    updateArray(arr,5);
    printArray(arr,5);
}