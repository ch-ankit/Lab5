#include <iostream>
#include "./../sorting/quickSort.h"
using namespace std;
class BS
{
public:
    void BinarySearch(int array[], int keynum, int num)
    {
        int low = 1;
        int high = num;
        int mid;
        do
        {
            mid = (low + high) / 2;
            if (keynum < array[mid])
            {
                high = mid - 1;
            }
            else if (keynum > array[mid])
            {
                low = mid + 1;
            }
        } while (keynum != array[mid] && low <= high);
        if (keynum == array[mid])
        {
            cout << "SEARCH SUCCESSFUL \n";
        }
        else
        {
            cout << "SEARCH FAILED \n";
        }
    }
};
int main()
{
    int array[MAX_SIZE];
    int i, j, temp, keynum;
    int low, mid, high;
    cout << "Enter the value of num \n";
    cin >> length;
    cout << "Enter the elements one by one \n";
    for (i = 0; i < length; i++)
    {
        cin >> array[i];
    }
    //Quick SORT
    quickSort(array, 0, length - 1);
    cout << "Enter the element to be searched \n";
    cin >> keynum;
    BS b1;
    b1.BinarySearch(array, keynum, length);
    return 0;
}
