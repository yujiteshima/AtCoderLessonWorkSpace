#include <bits/stdc++.h>
using namespace std;

void swap (int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

void insertion_sort (int array[], int array_size) {
    int i, j;
    for(i = 0; i < array_size; i++) {
        j = i;
        while ((j > 0) && (array[j-1] > array[j])) {
            swap(&array[j - 1], &array[j]);
            j--;
        }
    }
}

int main () {
    int array[10] = {2, 1, 8, 5, 4, 7, 9, 0, 6, 3};
    int i;

    cout << "Before sort:";
    for(i = 0; i < 10; i++)
    {
        cout << " " << array[i];
    }
    cout << endl;
    insertion_sort(array, 10);
    cout << "After sort:";
    for (i = 0; i < 10; i++)
    {
        cout << " " << array[i];
    }
    cout << endl;
}