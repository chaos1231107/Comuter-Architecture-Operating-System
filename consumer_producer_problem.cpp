#include <iostream>
#include <queue>
#include <thread>
using namespace std;
void produce();
void consume();
//queue<int>q;
int sum = 0;
int main()
{
    cout << "초기합계" << sum << endl;
    thread producer(produce); 
    thread consumer(consume);
    
    producer.join();
    consumer.join();
    
    cout << "producer, consumer 스레드 이후 실행 합계 : " << sum << endl;
    return 0;
}


void produce()
{
    for (int i = 0; i < 100000; i++)
    {
        //q.push(1)
        sum++;
    }
}

void consume()
{
    for (int i = 0; i <100000; i++)
    {
        //q.pop();
        sum--;
    }
}