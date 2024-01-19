#include <iostream>

using namespace std;


int* bubbleSort(int* list, int length);
int* selectionSort(int* list, int length);
int* insertionSort(int* list, int length);

int main()
{
    setlocale(LC_ALL, "");

    int* nums = new int[5]{ 1, 8, 9, 6, 7 };
    int* b = bubbleSort(nums, 5);
    int* c = selectionSort(nums, 5);
    int* in = insertionSort(nums, 5);

    cout << "Пузырьковая" << endl;
    for (int i = 0; i < 5; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    cout << "Выборкой" << endl;
    for (int i = 0; i < 5; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    cout << "Вставками" << endl;
    for (int i = 0; i < 5; i++) {
        cout << in[i] << " ";
    }
    cout << endl;
}

int* bubbleSort(int* list, int length) {
    int temp_len = length;
    int* n_list = new int[length];
    while (length--) {
        for (int i = 0; i < length; i++) {
            if (list[i] > list[i + 1]) {
                swap(list[i], list[i + 1]);
            }
        }
    }
    length = temp_len;
    for (int i = 0; i < length; i++) {
        n_list[i] = list[i];
    }
    return n_list;
}

int* selectionSort(int* list, int length) {
    int temp_len = length;
    int* n_list = new int[length];
    for (int i = 0; i < length; i++) {
        int minValue = i;
        for (int j = i; j < length; j++) {
            if (list[j] < list[minValue]) {
                minValue = j;
            } 
        }
        if (minValue != i) {
            swap(list[i], list[minValue]);
        }
    }
    length = temp_len;
    for (int i = 0; i < length; i++) {
        n_list[i] = list[i];
    }
    return n_list;
}

int* insertionSort(int* list, int length) {
    int temp_len = length;
    int* n_list = new int[length];
    for (int i = 1; i < length; i++) {
        int j = i - 1;
        while (j >= 0 && list[j] > list[j + 1]) {
            swap(list[j], list[j + 1]);
            j--;
        }
    }
    length = temp_len;
    for (int i = 0; i < length; i++) {
        n_list[i] = list[i];
    }
    return n_list;
}