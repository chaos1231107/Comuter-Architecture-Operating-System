#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

void foo()
{
    printf("execute foo\n");
}

void bar()
{
    printf("execute bar\n");
}

void baz()
{
    printf("execute baz\n");
}

int main()
{
    pid_t pid1 = fork();
    
    if (pid1 == 0)
    {
        pid_t pid2 = fork();
        if (pid2 == 0)
        {
            foo();
        }
        else
        {
            bar();
            wait(NULL);
        }
    }
    else
    {
        baz();
        wait(NULL);
    }
}