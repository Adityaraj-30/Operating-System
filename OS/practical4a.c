/* 4a. same program, same code*/

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{
    pid_t pid = fork();
    if (pid < 0) {
    printf("Some error occured. Terminating.\n");
    return 1;
    }
    printf("Same programe: %d \n", pid);

    return 0;
}