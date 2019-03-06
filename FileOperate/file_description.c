/*
 * file_description.c
 *
 *  Created on: 2019年3月6日
 *      Author: root
 */
#include "head.h"

int DHC_file_read(int fd, char * read_buff, int count)
{
	if (fd < 0 || read_buff  == NULL || count <= 0){
		printf("DHC_file_read para error\n");
		return -1;
	}
	ssize_t n_bytes = read(fd, (void *)read_buff, count);
	return n_bytes;
}

int DHC_file_write(int fd, char *buff, int count)
{
	if (fd < 0 || buff  == NULL || count <= 0){
			printf("DHC_file_read para error\n");
			return -1;
		}
	ssize_t n_bytes = write(fd, buff, count);
	return n_bytes;
}

int DHC_file_close(int fd)
{
	if (fd < 0){
		printf("DHC_file_close para error\n");
		return -1;
	}
	int r = close(fd);
	return r;
}

int DHC_file_open_with_mode(const char *file_path, int flags, mode_t mode)
{
	if (file_path == NULL){
		perror("DHC_file_open para error\n");
		return -1;
	}
	return open(file_path, flags, mode);
}

int DHC_file_open(const char *file_path, int flags)
{
	if (file_path == NULL){
		perror("DHC_file_open para error\n");
		return -1;
	}
	return open(file_path, flags);
}
