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
int a = 0;
int b = 0 ;
void *func( void *var){

    a = 1;
    b = 1;
    printf("value of A from THREAD 1 is %d\n",a);
    printf("value of B from THREAD 1 is %d\n",b);    
}
void *func1( void *var1){
     a = 2;
     b = 2;
    printf("value of A from THREAD 2 is %d\n",a);
    printf("value of B from THREAD 2 is %d\n",b);    
     
}

int main(void) {
    pthread_t thread1;
    pthread_t thread2;
    for(int i= 0; i<10 ; i++){
        sleep(1.5);
        pthread_create(&thread1, NULL, func,NULL);
        pthread_create(&thread2, NULL, func1, NULL);
        pthread_join(thread1,NULL);
        pthread_join(thread2,NULL);
    }
    pthread_exit(NULL);
    return EXIT_SUCCESS;
}
