#include <pthread.h>
#include <stdio.h>

void *mythread();


int main() {

pthread_t thread;
pthread_create(&thread,NULL,mythread,NULL);
pthread_join(thread,NULL);
return 0;

}

void *mythread(){

printf("Hi I am thread running..do you see");
}

