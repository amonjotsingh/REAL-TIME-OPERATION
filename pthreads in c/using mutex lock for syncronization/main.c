/*
 ============================================================================
 Name        : pthread.c
 Author      : Amonjot
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <malloc.h>
#include <sched.h>
pthread_mutex_t lock;   //declaring a mutex lock
int a = 0;
int b = 0 ;

void *func( void *var){
    pthread_mutex_lock(&lock);      //using mutex lock 
    a = 1;
    b = 1;
    printf("value of A from THREAD 1 is %d\n",a);
    printf("value of B from THREAD 1 is %d\n",b);    
    pthread_mutex_unlock(&lock);        //unlocking
    
}
void *func1( void *var1){
    pthread_mutex_lock(&lock);        //using mutex lock

     a = 2;
     b = 2;
    printf("value of A from THREAD 2 is %d\n",a);
    printf("value of B from THREAD 2 is %d\n",b);    
    pthread_mutex_unlock(&lock);        //unlocking 
     
}

int main(void) {
    pthread_t thread1;
    pthread_t thread2;

    for(int i= 0; i<10 ; i++){
        sleep(1.5);
        pthread_create(&thread1, &th1, &func,NULL);
        pthread_create(&thread2, &th2, &func1, NULL);
        pthread_join(thread1,NULL);
        pthread_join(thread2,NULL);
    }
    pthread_mute_destroy(&lock);      //destroying the mutex 
    pthread_exit(NULL);
    return EXIT_SUCCESS;
}
