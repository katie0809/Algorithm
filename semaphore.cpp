#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#include <stdlib.h>

void Error(const char *mes);
int number = 0;
sem_t bin_sem; //create semaphore
void *sem_snd(void *arg);
void *sem_rev(void *arg);

int main(){

  int state = 0;
  pthread_t t1,t2,t3;
  //3개의 스레드 선언
  char thread1[] = "Thread_A";
  char thread2[] = "Thread_B";
  char thread3[] = "Thread_C";
  void *result_t = NULL;

  state = sem_init(&bin_sem,0.0);
  if(state != 0) Error("sem_init Error\n");
  
}
