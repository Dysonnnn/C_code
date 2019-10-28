#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <pthread.h>

char c_input[100] = {0};
void scanf_sth(void){
	printf("input something: ");
	scanf("%s", c_input);
	pthread_exit("scanf thread finished~\n");
}

void print_sth(void){
	printf("get something: %s\n", c_input);
	pthread_exit("print thread finished~\n");
}


int main(){
	int ret, ret2;
	char input[100] = {0};
	void *thread_result;
	pthread_t input_thread, print_thread;

	ret = pthread_create(&input_thread, NULL, (void*)scanf_sth, NULL);
	if(ret != 0){
		perror("pthread 1 creation failed!\n");
		exit(EXIT_FAILURE);
	}

	ret2 = pthread_create(&print_thread, NULL, (void*)print_sth, NULL);
	if(ret2 != 0){
		perror("pthread 2 creation failed!\n");
		exit(EXIT_FAILURE);
	}

	printf("waiting for new thread ... \n");
	ret = pthread_join(input_thread, &thread_result);
	if(ret != 0){
		perror("pthread 1 join failed!\n");
		exit(EXIT_FAILURE);
	}

	ret2 = pthread_join(print_thread, &thread_result);
	if(ret2 != 0){
		perror("pthread 2 join failed!\n");
		exit(EXIT_FAILURE);
	}

	//printf("thread joined, returned %s \n", (char*)thread_result);

	return 0;
}

/*
result:

waiting for new thread ...
current time is :'Mon Oct 14 23:31:59 2019
'
thread joined, returned Time thread finished~
*/