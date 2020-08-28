#include <stdio.h>
void printArray(int * p);
int main() {
    int data[5];

    printf("Enter elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", &data[i]);
    printArray(&data[0]);
}

void printArray(int * p){
    printf("You entered: \n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(p+ i));

}

// data[0] is equivalent to *data and &data[0] is equivalent to data
// data[1] is equivalent to *(data + 1) and &data[1] is equivalent to data + 1
// data[2] is equivalent to *(data + 2) and &data[2] is equivalent to data + 1
// data[i] is equivalent to *(data + i) and &data[i] is equivalent to data + i