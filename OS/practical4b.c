/*
4b same program, different code.
*/
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>


int main() {
    pid_t pid = fork();
    if (pid < 0) {
        printf( "Some error occured.%d \n" , pid);
        return 1;
    }
    if (pid ==0) {
        printf( "\nChild process with pid = %d " , pid); 
    }
    if (pid > 0) {
        printf("\nParent process with pid = %d", pid) ;
    }
    return 0;
}