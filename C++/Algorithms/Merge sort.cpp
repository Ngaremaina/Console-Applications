#include <iostream>
using namespace std;

int partition (int l, int h) {
int pivot, A[l];
pivot=A[l];
int i=l;
int j=h;
while(i<j) {
    do {
        i++;
    }
    while (A[i] <= pivot);
    do {
        j--;
    }
    while (A[j] > pivot);
    if(i<j)
        swap(A[i], A[j]); //call swap function
}
swap(pivot, A[j]); //call swap function
return j;
}
void quicksort (int l, int h) {
    if(l<h) {
    int j=partition (l, h);
    quicksort (l, j);
    quicksort(j+1, h);
}
}
