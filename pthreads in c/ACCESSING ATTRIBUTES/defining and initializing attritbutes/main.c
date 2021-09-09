// to define an attribute we can use pthreat_attr_t NAME;
// to intialize an attribute with default values we can use pthread_attr_init(&NAME)

#include <pthread.h>

int main(){
    pthread_attr_t th1,th2;
    pthread_attr_init(&th1);
    pthread_attr_init(&th2);
}
