# Self Learning Computer Architecture and Operating System
## Programming Languages : C/C++, Python
# 컴퓨터 구조 / 운영체제 주요 코드 모음
## ⭐ 1. process란? : 컴퓨터에서 실행되고 있는 작업, 종종 cpu 스케줄링의 대상이 된다.
## ⭐ 2. thread란? : 한 프로세스 내에서 실행되는 흐름의 단위, 한 프로세스는 보통 하나의 쓰레드를 가지나, 상황에 따라 여러 쓰레드를 포함하는 경우가 존재
## ⭐ 3. CPU Scheduling 이란? : CPU를 쓰고자 하는 다양한 프로세스들중 어떤 프로세스를 우선적으로 CPU에 할당할지 정하는 것 
## ⭐ 4. Process Synchronization(프로세스 동기화)란? : 하나의 자원을 하나의 프로세스에서만 쓰게 하는 것.
### ✅ Process Synchronization에서의 Critical Section(임계구역) : 코드 상에서 Race Condition이 발생할 수 있는 구간, 공유데이터를 접근하는 코드 구간.
#### ✅ Race Condition(경쟁상태) : 두 개 이상의 프로세스가 공유자원에 동시에 접근할 때, 결과값에 영향 주는 상황
#### ✅ Producer Consumer Problem(생산자 소비자 문제) : 생산자가 데이터 자원을 생성하면 소비자는 그것을 소비하는 형태에서 발생하는 문제, 프로세스나 쓰레드 생성시, 동기화가 제대로 이루어지지 않아서 생기는 문제.
## <참고서적> 
### 📘 UNIX System (정승주 저) 
### 📘 혼자 공부하는 컴퓨터구조 + 운영체제(강민철 저) 
### 🖥️ https://lrl.kr/pNjy
### 🖥️ https://namu.wiki/w/%ED%94%84%EB%A1%9C%EC%84%B8%EC%8A%A4
### 🖥️ https://github.com/kangtegong
### ✅ pthread_self() :
#### 🖥️ https://wariua.github.io/man-pages-ko/pthread_self%283%29/
### ✅ pthread_create() : 
#### 🖥️ https://man7.org/linux/man-pages/man3/pthread_create.3.html
### ✅ pthread_join() : 
#### 🖥️ https://man7.org/linux/man-pages/man3/pthread_join.3.html
### 프로세스 동기화 :
#### 🖥️ https://rebro.kr/176
### Race Condition(경쟁상태) :
#### 🖥️ https://lrl.kr/ho1s
