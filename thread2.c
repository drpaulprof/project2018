#include <pthread.h>
#include <stdio.h>

void *mythread1();
void *mythread2();

int main() {

pthread_t thread[2];
pthread_create(&thread[0],NULL,mythread1,NULL);
pthread_join(thread[0],NULL);

pthread_create(&thread[1],NULL,mythread2,NULL);
pthread_join(thread[1],NULL);
return 0;

}

void *mythread1(){

printf("Hi I am thread1  running..do you see\n");
int i;

for (i =0; i<=5; i++)
{
printf("Thread1\n %d", i);
}

}

void *mythread2(){

int i;

for (i =0; i<=5; i++)
{
printf("Thread2\n %d", i);
}


printf("Hi I am thread2  running..do you see");
}

