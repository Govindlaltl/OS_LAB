#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
void main()
{
	int fd1,fd2;
	char wbuf[128];
	char rbuf[128];
	fd1=open("file.txt",O_RDWR);
	printf("Enter the text to be written:");
	scanf("%s",wbuf);
	write(fd1,wbuf,strlen(wbuf));
	close(fd1);
	fd2=open("file.txt",O_RDWR);
	printf("\n the contents are :\n");
	read(fd2,rbuf,100);
	printf("%s\n",rbuf);
	close(fd2);
}
