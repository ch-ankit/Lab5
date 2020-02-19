#include"quickSort.h"
int main(){
    int list[MAX_SIZE];
    getData(list);
    int low=0;
    int high=MAX_SIZE;
    quickSort(list,low,high);
    display(list);
    std::cout << sizeof(list) << std::endl;
}