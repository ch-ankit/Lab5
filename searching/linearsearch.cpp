#include <iostream>
#include "./../sorting/quickSort.h"

using namespace std;
class LS
{
public:
    void LinearSearch(int arr[], int value, int i, int n)
    {
        int found = 0;
        for (i = 0; i < n; i++)
        {
            if (value == arr[i])
            {
                found = 1;
                break;
            }
        }
        if (found == 1)
        {
            cout << "Element is present in the array at position   " << i + 1;
        }
        else
        {
            cout << "Element is not present in the array.";
        }
    }
};
int main()
{
    int i, keynum, found = 0;
    cout << "Enter the number of elements   ";
    cin >> length;
    int array[MAX_SIZE];
    cout << "Enter the elements one by one \n";
    for (i = 0; i < length; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the element to be searched   ";
    cin >> keynum;
    //Quick SORT
    quickSort(array, 0, length - 1);
    /*  Linear search begins */
    LS l1;
    l1.LinearSearch(array, keynum, i, length);
    return 0;
}
