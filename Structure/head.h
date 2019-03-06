/*
 * head.h
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

#define Debug(fmt, ...) \
	do { \
	printf("%s-%s %s:%d:"fmt"", __DATE__, __TIME__, __FILE__, __LINE__, ##__VA_ARGS__); \
	}while(0)

#define DEBUG
#define EXIT_FAILED -1
#define EXIT_SUCCESS 0

/* file operation*/
int DHC_file_close(int);
int DHC_file_open(const char *, int);
int DHC_file_open_with_mode(const char *, int, mode_t);
int DHC_file_read(int, char *, int);
int DHC_file_write(int, char *, int);
/*====================================*/

/*single link operation*/
typedef struct _stu{
	int age;
	char sex;
	char name[20];
	struct _stu *next;
}STU, *pSTU;
void free_link_node();
void print_node();
void print_stu_info(pSTU);
void init_node_info(pSTU, int, char *, char);
pSTU create_head_node();
pSTU create_node();
pSTU search_node(char *);
/*=====================================*/
#endif /* HEAD_H_ */
