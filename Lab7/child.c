#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
int main (int argc, char **argv){
	char buf [1024];
	int fd = atoi(argv[1]);
	printf("%d\n",fd);
	if(read(fd,buf,1024) > 0){
		printf("%s",buf);
		while(read(fd,buf,1024) > 0){
			printf("%s", buf);
		}
	}
	else{
		printf("Read failed in child..!!!\n");
	}
	return 0;
}
