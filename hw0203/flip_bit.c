//
//  flip_bit.c
//  hw0203
//
//  Created by Michael Leong on 2021/3/19.
//

#include "flip_bit.h"

void flipBitPos(uByte *byte1, int bitPos) {
    switch (bitPos) {
        case 1:
            //flip bit
            if(byte1->bits.b1 == 1) {
                byte1->bits.b1 = 0;
            } else {
                byte1->bits.b1 = 1;
            }
            break;
        case 2:
            if(byte1->bits.b2 == 1) {
                byte1->bits.b2 = 0;
            } else {
                byte1->bits.b2 = 1;
            }
            break;
        case 3:
            if(byte1->bits.b3 == 1) {
                byte1->bits.b3 = 0;
            } else {
                byte1->bits.b3 = 1;
            }
            break;
        case 4:
            if(byte1->bits.b4 == 1) {
                byte1->bits.b4 = 0;
            } else {
                byte1->bits.b4 = 1;
            }
            break;
        case 5:
            if(byte1->bits.b5 == 1) {
                byte1->bits.b5 = 0;
            } else {
                byte1->bits.b5 = 1;
            }
            break;
        case 6:
            if(byte1->bits.b6 == 1) {
                byte1->bits.b6 = 0;
            } else {
                byte1->bits.b6 = 1;
            }
            break;
        case 7:
            if(byte1->bits.b7 == 1) {
                byte1->bits.b7 = 0;
            } else {
                byte1->bits.b7 = 1;
            }
            break;
        case 8:
            if(byte1->bits.b8 == 1) {
                byte1->bits.b8 = 0;
            } else {
                byte1->bits.b8 = 1;
            }
            break;
            
        default:
            break;
    }
}

void printBit(uByte byte1) {
    printf("%d", byte1.bits.b8);
    printf("%d", byte1.bits.b7);
    printf("%d", byte1.bits.b6);
    printf("%d", byte1.bits.b5);
    printf("%d", byte1.bits.b4);
    printf("%d", byte1.bits.b3);
    printf("%d", byte1.bits.b2);
    printf("%d", byte1.bits.b1);
}
