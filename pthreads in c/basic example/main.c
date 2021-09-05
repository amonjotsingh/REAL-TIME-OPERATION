/*
 ============================================================================
 Name        : structures.c
 Author      : Amonjot
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
void *func( void *var){
    for( int i = 0 ; i<10; i ++){
    sleep (2);
    puts("we are using thread A\n");
    }
}
void *func1( void *var1){
    for (int i= 0 ; i <10 ; i++){
        sleep (2);
        puts("we are using thread B\n");
    }
}

int main(void) {
    pthread_t thread1;
    pthread_t thread2;
    
    pthread_create(&thread1, NULL, func,NULL);
    pthread_create(&thread2, NULL, func1, NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
       
    return EXIT_SUCCESS;
}
