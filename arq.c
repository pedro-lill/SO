// jantar dos filosofos
// 2012-10-10
// 
//
//
//
//
//

// Path: arq.c
// Compare this snippet from recursiveMutex.c:
//                          gcc -o rec recursive-mutex.c -lpthread */
//
//
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>
#include <fcntl.h>


void *mythread(void *data);



int main(int argc, char *argv[]) {
   int i;
   pthread_t tids[N];
   pthread_mutexattr_t mta;
   pthread_mutexattr_init(&mta);
   pthread_mutexattr_settype(&mta, PTHREAD_MUTEX_RECURSIVE);
   pthread_mutex_init(&count_mutex, &mta);
   for(i=0; i<N; i++) {
      int *j = malloc(sizeof(int));
      *j = i;
      pthread_create(&tids[i], NULL, mythread, (void *)j);
   }
   /* We will now wait for each thread to<\n>
    * terminate */
   for(i=0; i<N; i++) {
      pthread_join(tids[i], NULL);
      printf("Thread id %ld returned)\n", tids[i]);
    }
    return(1);
}
void *mythread(void *data) {
   int id;
   id = *((int *) data);
   free((int *)data);
   while(x < 10) {
      pthread_mutex_lock(&count_mutex);
      x++;
      print_global(id);
      pthread_mutex_unlock(&count_mutex);
      sleep(1);
   }
   return NULL;
}
void print_global(int id) {
   printf("Thread id %d: x = %d\n", id, x);
}
