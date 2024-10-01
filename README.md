# Computer_Architecture and Operating_System
# 컴퓨터 구조와 운영체제 주요 코드 모음
## 1. process란 : 컴퓨터에서 실행되고 있는 작업, 종종 cpu 스케출링의 대상이 된다.
## 2. thread란 : 한 프로세스 내에서 실행되는 흐름의 단위, 한 프로세스는 보통 하나의 쓰레드를 가지나, 상황에 따라 여러 쓰레드를 포함하는 상황도 존재한다. 
## 3. CPU Scheduling 이란 : CPU를 쓰고자 하는 다양한 프로세스들중 어떤 프로세스를 우선적으로 CPU에 할당할지 정하는 것 
## 4. Process Synchronization(프로세스 동기화)란? : 하나의 자원을 하나의 프로세스에서만 쓰게 하는 것.
### ✅ Process Synchronization에서의 Critical Section(임계구역) : 코드 상에서 Race Condition이 발생할 수 있는 구간, 공유데이터를 접근하는 코드 구간. ✅
#### ✅ Race Condition(경쟁상태) : 공유자원에 동시에 접근할 때, 결과값에 영향을 줄 수 있는 상황 ✅
## <참고서적> 
### 📘 UNIX System (정승주 저) 
### 📘 혼자 공부하는 컴퓨터구조, 운영체제(강민철 저) 
### 🖥️ https://ko.wikipedia.org/wiki/%EC%8A%A4%EB%A0%88%EB%93%9C_(%EC%BB%B4%ED%93%A8%ED%8C%85)
### 🖥️ https://namu.wiki/w/%ED%94%84%EB%A1%9C%EC%84%B8%EC%8A%A4
### 🖥️ https://github.com/kangtegong
### pthread_self() :
#### 🖥️ https://wariua.github.io/man-pages-ko/pthread_self%283%29/
### pthread_create() : 
#### 🖥️ https://man7.org/linux/man-pages/man3/pthread_create.3.html
### pthread_join() : 
#### 🖥️ https://man7.org/linux/man-pages/man3/pthread_join.3.html
### 프로세스 동기화 :
#### 🖥️ https://rebro.kr/176
### Race Condition(경쟁상태) :
#### 🖥️ https://velog.io/@yanghl98/OS%EC%9A%B4%EC%98%81%EC%B2%B4%EC%A0%9C-Race-Condition-%EC%A0%95%EC%9D%98-%EB%B0%9C%EC%83%9D-%EC%9D%B4%EC%9C%A0-%ED%95%B4%EA%B2%B0%EB%B2%95
git Compuuter_Architecture and Operating_System repository
