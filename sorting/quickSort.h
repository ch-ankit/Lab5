#ifndef SORTING_H
#define SORTING_H

#include <iostream>

#define MAX_SIZE 20
static int length;
void getData(int list[]);
void quickSort(int list[], int low, int high);
void display(int sortedList[]);
int partition(int arr[], int low, int high);
void swap(int *a, int *b);

void getData(int list[])
{
    std::cout << "How many data do you want?" << std::endl;
    std::cin >> length;
    std::cout << "Enter the data you want to be sorted out" << std::endl;
    for (int i = 0; i < length; i++)
    {
        std::cin >> list[i];
    }
}

void quickSort(int list[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(list, low, high);
        quickSort(list, low, pivot - 1);
        quickSort(list, pivot + 1, high);
    }
}

void display(int sortedList[])
{
    std::cout << "The sorted list is:" << std::endl;
    for (int i = 0; i < length; i++)
    {
        std::cout << sortedList[i] << std::endl;
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

#endif // SORTING_H
