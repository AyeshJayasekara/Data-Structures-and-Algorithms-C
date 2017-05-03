#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int arr[10];

int main()
{
    generateArray();
    printf("Unsorted Array: \n");
    printArray();
    BSort();
    printf("\n\nSorted Array\n");
    printArray();


    getch();

    return 0;
}

void generateArray(){
    int c=0;
    srand ( time(NULL) );
    for(c;c<10;c++){
        int random_number = rand();
        arr[c]=random_number%100;
    }
}

void printArray(){
    int c=0;
    for(c;c<10;c++){
        printf("%d ",arr[c]);
    }

}

void Swap(int *n1, int *n2){
    int temp= *n1;
    *n1=*n2;
    *n2=temp;
}

void BSort(){
    int x=0;
    int y=0;
    int flag=0;

    for(x;x<10;x++){

        flag=0;
        for(y;y<(9-x);y++){
            if(arr[y]>arr[y+1]){
                Swap(&arr[y],&arr[y+1]);
                flag=1;
            }
        }
        y=0;
        if(flag==0){
            break;
        }
    }
}
