#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int arr[10];
int main()
{
    generateArray();
    printArray();

    int x = getKey();
    int status=LenearSearch(x);
    if(status==-1){
        printf("Item Not Found!!!!\n");
    }
    else{
        printf("Item Found at index %d !",status);
    }
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

int LenearSearch(int key){
    int c=0;
    for(c;c<10;c++){
        if(arr[c]==key){
            return c;
        }
    }
    return -1;
}

int getKey(){
    printf("\n\nEnter a number to Search: ");
    int key;
    scanf("%d",&key);
    return key;
}


