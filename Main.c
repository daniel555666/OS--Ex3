#include<stdio.h>
#include<pthread.h>

void *myThreadFun(void *vargp)
{
    for (int i = 0; i < 100; i++)
    {
        printf("thread is %d\n", i);
    }
    return NULL;
}
int main(int argc, char const *argv[])
{
    pthread_t pid;
    pthread_create(&pid, NULL, myThreadFun, NULL);
    for (int j = 0; j < 100; j++)
    {
        printf("main is %d\n", j);
    }
    return 0;
}
