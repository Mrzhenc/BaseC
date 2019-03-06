/*
 * file_op.h
 *
 *  Created on: 2019年3月6日
 *      Author: root
 */

#ifndef HEAD_H_
#define HEAD_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int DHC_file_close(int);
int DHC_file_open(const char *, int);
int DHC_file_open_with_mode(const char *, int, mode_t);
int DHC_file_read(int, char *, int);
int DHC_file_write(int, char *, int);


#endif /* HEAD_H_ */
