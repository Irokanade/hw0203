//
//  flip_bit.h
//  hw0203
//
//  Created by Michael Leong on 2021/3/19.
//

#ifndef flip_bit_h
#define flip_bit_h

#include <stdio.h>

typedef union {
    struct {
        unsigned char b1:1;
        unsigned char b2:1;
        unsigned char b3:1;
        unsigned char b4:1;
        unsigned char b5:1;
        unsigned char b6:1;
        unsigned char b7:1;
        unsigned char b8:1;
    } bits;
    unsigned char byte;
} uByte;

void flipBitPos(uByte *byte1, int bitPos);
void printBit(uByte byte1);

#endif /* flip_bit_h */
