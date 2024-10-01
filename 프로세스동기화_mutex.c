#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 4  
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

int shared = 0;

void *foo() {
    for (int i = 0; i < 10000; ++i) {
        pthread_mutex_lock(&mutex); // 임계구간에서 프로세스 동기화
        shared += 1;
        pthread_mutex_unlock(&mutex); // 증가 후 잠금 해제
    }
    return NULL;
} 

int main() {
    pthread_t threads[NUM_THREADS]; // 4개의 스레드 생성
    
    for (int i = 0; i < NUM_THREADS; ++i) {
        pthread_create(&threads[i], NULL, foo, NULL);
    }
    
    for (int i = 0; i < NUM_THREADS; ++i) {
        pthread_join(threads[i], NULL);
    }
    
    printf("최종 결과는 %d입니다\n", shared);
    return 0;
}
