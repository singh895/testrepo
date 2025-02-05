#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include"shell_array.h"
#include"shell_list.h"
#include"sequence.h"

/*
int calc_size(int n){
    int p, q, count = 0;
    int res = 1;
    while (res<= n){
        count++;
        if (res<=n/2){
            p++;
            res *= 2;
        }
        else{
            q++;
            res*= 3;
        }
    }
    return count;
}
*/

long *Generate_2p3q_Seq(int n, int *seq_size)
{
    int p = 0;
    int q = 0;
    //int size = calc_size(n);
    //*seq_size = 0;
    if (n == 0 || n == 1){
        *seq_size = 0;
        return NULL;
    }
    else{
        for(p; ((2^p)*(3^q)) < n; p++){
            for(q; ((2^p)*(3^q)) < n; q++){
                *seq_size += 1;
            }
        }
    }
    long * sequence = (long*) malloc(sizeof(long) * (*seq_size));
    return sequence;

}