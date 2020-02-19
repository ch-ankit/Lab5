#ifndef SORTING_H
#define SORTING_H

#include<iostream>
#define MAX_SIZE 20

void getData(int list[]){
    int length;
    std::cout << "How many data do you want?" << std::endl;
    std::cin>>length;
    std::cout << "Enter the data you want to be sorted out" << std::endl;
    for(int i=0;i<length;i++){
        std::cin>>list[i];
    }
}

void quickSort(int list[], int low,int high){
    if (low < high)
    {
        int pivot = partition(list, low, high);
        quickSort(list, low, pivot - 1);
        quickSort(list, pivot + 1, high);
    }
}

void display(int sortedList[]){
    std::cout << "The sorted list is:" << std::endl;
    for(int i=0;i<sizeof(sortedList);i++){
        std::cout << sortedList[i] << std::endl;
    }
}

int partition(int list[],int low,int high){
    int pivot=low;
    int i=low;
    int j=high;
    while(j>=i){
        while(list[i]<=list[pivot]){ i++;}
        while(list[j]>=list[pivot]){ j--;}
        if(i<=j){
            swap(i,j,list);
        }
        else{
            swap(pivot,j,list);
            pivot=j;
        }
    }
    return pivot;
}
void swap(int i,int j,int list[]){
    int temp=list[i];
    list[i]=list[j];
    list[j]=temp;
}



#endif // !SORTING_H
