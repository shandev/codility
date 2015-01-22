//
//  main.c
//  FrogJump
//
//  Created by Shan on 23/01/15.
//  Copyright (c) 2015 Shan. All rights reserved.
//

#include <stdio.h>

int solution(int X, int Y, int D);

int main(int argc, const char * argv[]) {
    // insert code here...
    int a = solution(10, 85, 30);
    return a;
}

int solution(int X, int Y, int D) {
    // write your code in C99
    int distance = (Y - X)/D;
    if((Y - X)%D)
        return distance+1;
    else
        return distance;
    
}

