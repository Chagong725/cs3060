
/*HyominCha
CS3060-X01 Fall 2023
assn1
 Promise of Originality
I promise that this source code file has, in it's entirety, been
written by myself and by no other person or persons. If at any time an
exact copy of this source code is found to be used by another person in
this term, I understand that both myself and the student that submitted
the copy will receive a zero on this assignment.
*/




#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Assignment 1 by Hyomin Cha\n");

    if (argc == 1) {
        printf("Error: No parameters entered.\n");
        return 1;
    }

    int i;
    for (i = 1; i < argc; i++) {
        printf("Argument #%d:%s\n",i, argv[i]);
    }

   printf("Number of arguments printed: %d\n", argc - 1);

   return 0;
}

