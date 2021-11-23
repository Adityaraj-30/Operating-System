#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>


void main(){
    int a = 10;
    int pid1=fork();
    if(pid1>0){
        a++;
        int pid2=fork();
        if(pid2==0)
        printf("child: value = %d", a);
        else{
            a=a-5;
            printf("PARENT: value = %d", a);
        }
    }
    else
        printf(" value = %d", a);
}