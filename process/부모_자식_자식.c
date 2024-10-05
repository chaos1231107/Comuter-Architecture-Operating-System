#include <stdio.h>
#include <unistd.h>
void foo() 
{
    printf("execute foo\n");
}
int main()
{
    if (fork() == 0)
    {
        // fork child of child process
        if (fork () == 0)
        {
            printf("child of child pid is %d", getpid());
            foo();
        }
        else
        // forked child process
        {
            printf("child pid is %d\n", getpid());
            foo();
        }
    }
    else
    {
        if (fork() == 0)
        {
            printf("child pid is %d\n", getpid());
            foo();
        }
        else
        {
            printf("parent process is %d\n", getpid());
            foo();
        }
    }
    
    
    return 0;
}

