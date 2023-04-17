#include <iostream>
#include <ctime>
using namespace std;
 

void fillArray(int* const array, int const SIZE)
{
    bool sort;
    srand(time(NULL));
 
    for (int j = 0; j < SIZE;) {

        sort = true;
        array[j] = rand() % SIZE + 1;

        for (int k = 0; k < j; k++) {
            if (array[k] == array[j]) {
                sort = false;
            }
        }

        if (sort == true) {
            j++;
        }
    }
    
}


void bubbleSort(int* const arr, int const SIZE)
{
    int carry;
    for (int i = 0; i < SIZE; i++) {
        carry = arr[i];
        for (int k = 0; k < i;) {
            if (arr[i] < arr[k]) {
                carry = arr[i];
                arr[i] = arr[k];
                arr[k] = carry;
            }
            else k++;
        }
    }
}


void selectionSort(int* const arr, int const SIZE)
{
    int carry;
    for (int i = 0; i < SIZE - 1; i++) {
        int minI = i;
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[j] < arr[minI]) {
                minI = j;
            }
        }
        if (minI != i) {
            carry = arr[i];
            arr[i] = arr[minI];
            arr[minI] = carry;
        }
    }
}


void insertionSort(int* const arr, int const SIZE)
{
    int carry;
    for (int i = 0; i < SIZE; i++) {
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
            carry = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = carry;
        }
    }
}


void quickSort(int* const arr, int const SIZE)
{
    double sumArr = 0;
    for (int i = 0; i < SIZE; i++) {
        sumArr += arr[i];
    }
    sumArr /= 10;

}


int main()
{
    int size;
    cout << "Enter size - ";
    cin >> size;
    int* arr = new int [10];
    fillArray(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    cout << "===================" << endl;

    quickSort(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
    delete[] arr;
}