#include <stdio.h>
#define MAX 5
int main(){
    int where = MAX;
    int length = MAX;
    int current = 3;
    int spaces_moved = 0;

    while(current != where){
        current--;
        spaces_moved++;
        if(current == 0){
            current = length;       
            spaces_moved++;
        }        
    }
    printf("Moved %d spaces\n", spaces_moved);

    int *pointer;
    int variable = 2;

    pointer = &variable;
    printf("Adress of  variable is: %d\n", &variable);
    printf("pointer holds value %d", &variable);
    printf(" and dereferenced is: %d\n", *&variable);
    return 0;
}

