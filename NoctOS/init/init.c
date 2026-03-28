#define _DEFAULT_SOURCE
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "init.h"

void init(){
    printf("NoctOS ");
    printf("init the system ");
    for (int i = 0; i < 3; i++) {
        printf(".");
        fflush(stdout);
        sleep(1);
    }
    printf("\033[H\033[J");
    printf("System loaded successfully\n");
}