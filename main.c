#include "func.c"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    clock_t t,t1,t2,t3;
    double time_taken_ins, time_taken_merge, time_taken_bubble, time_taken_quick;
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int a[n];
    for(int i =0; i<n; i++){
    a[i] = rand()%10000;
    }
    
    
    
    // Sorting Algorithms
    t = clock();
    insertionSort(a,n);
    t = clock() -t;
    time_taken_ins = ((double)t)/CLOCKS_PER_SEC;
    printf("Insertion sort took %6.3f seconds\n", time_taken_ins);

    t1 = clock();
    merge_sort(a, n, 0, n - 1);
    t1 = clock() -t1;
    time_taken_merge = ((double)t1)/CLOCKS_PER_SEC;
    printf("Merge sort took %6.3f seconds\n", time_taken_merge);

    t3 = clock();
    quickSort(a, 0, n - 1);
    t3 = clock() -t3;
    time_taken_quick = ((double)t3)/CLOCKS_PER_SEC;
    printf("Quick sort took %6.3f seconds\n", time_taken_quick);
    return 0;
}