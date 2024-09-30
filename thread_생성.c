#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *foo()
{
    printf("process id id %d\n", getpid());
    return NULL;
}
int main()
{
    pthread_t thread1;
    pthread_create(&thread1, NULL, foo, NULL); //fook 를 실행하도록 thread 생성
    pthread_join(thread1, NULL);

    return 0;
}