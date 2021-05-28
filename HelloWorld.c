#include <stdio.h>
#include <stdlib.h>

int array[20] = {15,20,11,16,14,12,18,17,19,13};

int main()
{
    printArray();
    printf("\n\n");

    int i;
    int j;
    for(i=0; i<10-1; i++)
    {
        for(j=0; j<10-1-i; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printArray();
}

void printArray()
{
    for(int k=0; k<10; k++)
    {
        printf("%d\n", array[k]);
    }
}
