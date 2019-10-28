#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <pthread.h>

void print_currentTime(void){
	time_t ct;
	ct = time(NULL);
	//ctime : 将秒转换成字符串
	printf("current time is :'%s'\n", ctime(&ct));
	pthread_exit("Time thread finished~\n");

}
int main(){
	int ret;
	void *thread_result;
	pthread_t new_thread;

	ret = pthread_create(&new_thread, NULL, (void*)print_currentTime, NULL);
	if(ret != 0){
		perror("pthread creation failed!\n");
		exit(EXIT_FAILURE);
	}

	printf("waiting for new thread ... \n");
	ret = pthread_join(new_thread, &thread_result);
	if(ret != 0){
		perror("pthread join failed!\n");
		exit(EXIT_FAILURE);
	}

	printf("thread joined, returned %s \n", (char*)thread_result);

	return 0;
}

/*
result:

waiting for new thread ...
current time is :'Mon Oct 14 23:31:59 2019
'
thread joined, returned Time thread finished~
*/