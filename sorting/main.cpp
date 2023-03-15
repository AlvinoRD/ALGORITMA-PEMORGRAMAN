#include <iostream>

using namespace std;

void bubble_sort(int array[], int size){
    int temp;
    for (int step = 0; step < size; ++step){
        for (int i = 0; i < size - 1; ++i){
            if (array[i] > array[i+1]){
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
}

void tampil_array(int array[], int size){
    for (int i = 0; i < size; ++i){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int data[] = {5,1,9,4,7,0};
    int size = sizeof(data)/sizeof(data[0]);
    bubble_sort(data,size);
    tampil_array(data,size);
    return 0;
}
