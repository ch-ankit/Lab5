#include "quickSort.h"
int main()
{
    int list[MAX_SIZE];
    getData(list);
    int low = 0;
    int high = length - 1;
    quickSort(list, low, high);
    display(list);
}