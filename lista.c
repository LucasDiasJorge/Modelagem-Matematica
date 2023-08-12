#include <stdio.h>

int main(){

    int array[4] = {1,2,3,4}; 

    int size = sizeof(array) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        printf("%d\n",array[i]);
    }


    return 0;
}