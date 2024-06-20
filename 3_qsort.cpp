#include <iostream>
#include <stdlib.h>

int compareFunc(const void * voidA ,const void * voidB){
    int * intA = (int *)(voidA);
    int * intB = (int *)(voidB);
    return *intA - *intB;
}

int main(){
    const int ARRAY_SIZE = 10;
    int intAraray[ARRAY_SIZE] = {87 , 28, 100, 78 ,84, 98, 75, 70, 81, 68};
    qsort(intAraray, ARRAY_SIZE, sizeof(int), compareFunc);
}
