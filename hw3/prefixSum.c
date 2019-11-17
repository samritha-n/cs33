//
//  prefixSum.c
//  hw3
//
//  Created by Samritha Nagesh on 5/9/19.
//  Copyright © 2019 Samritha Nagesh. All rights reserved.
//

//With 2-way loop unrolling
#include <stdio.h>
//Unrolling + Reassociation
void psum(float a[], float p[], long int n)
{
    long int i;
    p[0] = a[0];
    for(i=1;i<n-1;i+=2){
        p[i]  = p[i-1] + a[i];
        p[i+1] = p[i-1] + (a[i]+ a[i+1]);
    }
    
    if(i < n)
        p[i] = p[i-1] + a[i];
}

//The latency and throughput of floating point addition limits the efficiency the prefix sum algorithm can achieve. The latency of floating point addition is 3.00, while the throughput is 1.00 on an x86-64 machine. 
