/*
 * main.c
 *
 *  Created on: 2019年3月6日
 *      Author: root
 */
#include "head.h"

int main(void)
{
	int fd = DHC_file_open("test.txt", O_RDWR | O_APPEND);
	printf("file is open fd = %d\n", fd);
	char *text = "hello world";
	int r = DHC_file_write(fd, text, strlen(text));
	if (r < 0){
		perror("write error\n");
	}
	DHC_file_close(fd);
	return 0;
}
