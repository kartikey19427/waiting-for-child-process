/* Name: Kartikey Gupta
   Roll_Number: 2019427 */

#include <stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include <sys/wait.h>
#include <dirent.h> 
#include <stdlib.h>
#include <pthread.h> 
int x=10;

void* child(){
	while(x>-90){
			x--;
		printf("%d\n", x);

		}

		pthread_exit(NULL);

}

int main(int argc, char const *argv[]) {

	pthread_t ptid; 
  
    pthread_create(&ptid, NULL, &child, NULL);
    pthread_join(ptid, NULL);

    while(x<100){
			x++;
			printf("%d\n", x);

		}
	pthread_exit(NULL); 
	
	return 0;
}


//wget https://cdn.kernel.org/pub/linux/kernel/v5.x/linux-5.9.1.tar.xz