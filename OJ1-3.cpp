//  OJ1-3.cpp
//  OJ1
//
//  Created by Jihong Tang on 2019/3/16.
//  Copyright © 2019 Jihong Tang. All rights reserved.
//

#include <iostream>
using namespace std;

//void Heapsort(int array[], int len);
//void Heapbuild(int array[], int len);
//void Fixheap(int array[], int len, int start);
void change(int array[], int x, int y);
//void Bubblesort(int array[], int len);
void Quicksort(int array[], int first, int last);
int partition(int array[], int first, int last);

int main(){
     //data input
    int k, len = 0;
    cin >> k >> len;
    int array[len];
    for (int i=0; i< len; i++){
        cin >>array[i];
    }

//    Heapsort(array, len);
//    Bubblesort(array, len);
    Quicksort(array, 0, len - 1);
    
//    for(int m = 0; m<= len-1; m ++ ){
//        cout << array[m] << ' ';
//    }
//    cout << endl;

    int mid =(len+1)/2;
    for (int j = mid-k; j< mid+k; j++){
        cout << array[j-1]<<' ';
    }
    cout << array[mid+k-1];
    return 0;
}


//void Heapsort(int array[], int len){
//    Heapbuild(array, len);

//
//    for (int i = len-1  ; i >= 0; i--){
//        change(array,0, i);
//        Fixheap(array, i, 0);
//    }
//}
//
//void Heapbuild(int array[], int len){
//    for (int m = len / 2 -1 ; m >= 0; m--){
//        Fixheap(array, len, m);
//    }
//}
//
//void Fixheap(int array[], int len, int start){
//    int lleaf = 2 * start ;
//    int rleaf = 2 * start + 1;
//    int next = start;
//    if (lleaf < len && array[lleaf] > array[next]){
//        next = lleaf;
//    }
//    if (rleaf < len && array[rleaf] > array[next]){
//        next = rleaf;
//    }
//    if (next != start){
//        change(array,start, next);
//        Fixheap(array, len, next);
//    }
//}

void change(int array[], int x, int y){
    int temp = 0;
    temp = array[x];
    array[x] = array[y];
    array[y] = temp;
}

//void Bubblesort(int array[], int len){
//    for (int i = 0; i < len - 1; i++){
//        for (int j =0; j < len -i - 1; j++){
//            if (array[j] > array[j+1]){
//                change(array, j , j+1);
//            }
//        }
//    }
//}

void Quicksort(int array[], int first, int last){
    if (first < last){
        int par = partition(array, first, last);
        Quicksort(array,first, par - 1);
        Quicksort(array, par + 1, last);
    }
}

int partition(int array[], int first, int last){
    int par_index = first - 1;
    int pivot = array[last];
    for (int i = first; i < last; i++){
        if (array[i] <= pivot){
            par_index += 1;
            change(array, i, par_index);
        }
    }
    change(array, par_index + 1, last);
    return par_index + 1;
}
