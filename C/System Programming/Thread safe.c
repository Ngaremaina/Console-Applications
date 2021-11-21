#include <stdio.h>

char arr[10];
int index=0;
int func(char c){
    int i=0;
    if (index>=sizeof(arr)){
        printf("\nNo storage\n");
        return -1;

    }
    //lock mutex
    arr[index]=c;
    index++;
    //unlock mutex
    return index;

}
