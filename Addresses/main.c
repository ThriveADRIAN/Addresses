//
//  main.c
//  Addresses
//
//  Created by Adrian Bruce Cunanan on 4/8/13.
//  Copyright (c) 2013 ThriveStreams. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int i = 17;
    int *addressOfI = &i;
    printf("i stores its value at %p\n", &i);
    *addressOfI =89;
    printf("Now i is %d\n", i);
    printf("An int is %zu bytes\n", sizeof(int));
    printf("A pointer is %zu bytes\n", sizeof(int *));
    
    float *myPointer;
    // Set myPointer to NULL for now, I'll store a pointer there
    // later in the program
    myPointer = NULL;
    
    return 0;
}

