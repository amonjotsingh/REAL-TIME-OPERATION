/*
 ============================================================================
 Name        : structures.c
 Author      : Amonjot
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

# define number 5

void *function(void *variable){
    int *a = (int *) variable;
    
    printf("thread number %d is created by thread function \n",*a);
    pthread_exit(NULL);
}

int main(){
    int i;
    pthread_t num[number];
    
    for( i = 0 ; i< number ; i++){
        printf("main thread is creating the thread number %d\n",i);
        pthread_create(&num[i],NULL,function,(void *)&i);
        sleep(1);
        
    }
    pthread_exit(NULL);
}
