//
//  main.c
//  Tape
//
//  Created by Shan on 22/01/15.
//  Copyright (c) 2015 Shan. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int solution(int A[], int N);
int main(int argc, const char * argv[]) {
    // insrt code here...
    int A[5] = {-3, 1, 2, 4, 3};
    solution(A,2);
    return 0;
}

int solution(int A[], int N) {
    // write your code in C99
    int temp_sum = 0, min_sum = 0, right_sum =0 , left_sum = A[0];
    for(int i = 1 ; i < N; i++)
    {
        right_sum += A[i];
    }
    min_sum = abs(right_sum - left_sum);
    for(int i = 1 ; i < N-1; i++)
    {
        left_sum += A[i];
        right_sum -= A[i];
        temp_sum = abs(left_sum - right_sum);
        if(min_sum > temp_sum)
            min_sum = temp_sum;
    }
    return min_sum;
}