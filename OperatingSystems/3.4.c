
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int value = 5;
int main()
{
    pid_t pid;
        pid = fork();
        if (pid==0) {//child proceess
            value +=15;
        }
        else if (pid>0){ //parent process
            wait(NULL);
            printf("PARENT: value = %d", value); //LINE A
            exit(0);
            }
}