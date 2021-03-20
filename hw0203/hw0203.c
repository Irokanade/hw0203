//
//  hw0203.c
//  hw0203
//
//  Created by Michael Leong on 2021/3/19.
//

#include <stdio.h>
#include "flip_bit.h"

int main() {
    uByte byte1;
    int exit = 0;
    int choice = -1;
    
    printf("Please enter a byte (0-255): ");
    scanf("%ud", &byte1.byte);
    printf("Data: %d ", byte1.byte);
    printBit(byte1);
    printf("\n");
    
    while(!exit) {
        fflush(stdin);
        printf("Flip bit (1-8, 0 to exit): ");
        scanf(" %d", &choice);
        if(choice == 0) {
            exit = 1;
            break;
        }
        flipBitPos(&byte1, 9-choice);
        printf("Data: %d ", byte1.byte);
        printBit(byte1);
        printf("\n");
    }
    
    
    return 0;
}
