#define _DEFAULT_SOURCE
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "init.h"
#include <string.h>

void process_input(){
    printf("Welcome to NoctOS!\n");
    while(1){
        char message[256];
        scanf("%255s", message);
        printf("You entered: %s\n", message);
        
        if (strcmp(message, "ls") == 0) {
            printf("Listing files...\n");
            printf("no files found\n");
        }
        if (strcmp(message, "help") == 0) {
            printf("Available commands:\n");
            printf("ls - list files\n");
            printf("help - show this help message\n");
            printf("exit - exit NoctOS\n");
        }
        if (strcmp(message, "clear") == 0) {
            printf("\033[H\033[J");
        }
        if (strcmp(message, "date") == 0) {
            printf("Current date and time: ");
            system("date");
        }
        if ( strcmp(message, "echo") == 0) {
            printf("Enter a message to echo: ");
            char echo_message[256];
            scanf("%255s", echo_message);
            printf("Echo: %s\n", echo_message);
        }
        if (strcmp(message, "exit") == 0) {
            printf("Exiting NoctOS...\n");
            exit(0);
        }
    }
}