#include<stdio.h>
#include<signal.h>
#include<stdbool.h>
#include<unistd.h>
#include<pthread.h>

bool done = false;

void *tfunc(void * arg){
	sleep(1);
	done = true;
	return NULL;
}

int main(){
	pthread_t t1;
	pthread_create(&t1, NULL, tfunc, NULL);
	printf("Waiting......\n");
	while(!done){
		//spin forever
	}
	printf("Ok. Moving on. \n");
}
