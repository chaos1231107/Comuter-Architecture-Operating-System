#include <stdio.h>
#include <unistd.h>

int main()
{
    //printf("hello os\n"); // 프로세스 생성
    printf("parent pid is %d\n", getpid()); // 부모 프로세스 생성
    
    if (fork() == 0)
    {
        printf("child pid is %d\n", getpid()); // 자식 프로세스 생성
    }
    return 0;
}
