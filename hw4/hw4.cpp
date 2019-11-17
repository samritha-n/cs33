//
//  main.cpp
//  hw4
//
//  Created by Samritha Nagesh on 5/23/19.
//  Copyright © 2019 Samritha Nagesh. All rights reserved.
//
void transpose(int *dst, int *src, int dim)
{
    int i, j;
    int block = 8;
    int row, col;

    for(i = 0; i < dim; i+= block)
        for(j = 0; j < dim; j+= block)
            for(row = i; (row < (block+i) && row < dim); row++)
                for(col = j; (col < dim && col < (block + j)); col++)
                    dst[col*dim + row] = src[row*dim + col];
}
