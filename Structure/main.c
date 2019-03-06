/*
 * main.c
  *
 *  Created on: 2019年3月5日
 *      Author: root
 */

#include "../head.h"

#ifndef DEBUG
struct BitMap{
	int a:2;
	int b:3;
	int c:10;
	int d:15;
};
#endif

pSTU link_head;

int main(void)
{
	link_head = create_head_node();
	if (link_head == NULL){
		perror("create link head failed\n");
		return EXIT_FAILURE;
	}
	pSTU stu1 = create_node();
	if (stu1 == NULL){
		perror("ceate node failed\n");
		return EXIT_FAILURE;
	}
	pSTU stu2 = create_node();
	pSTU stu3 = create_node();
	init_node_info(stu1, 30, "wangwu", 'w');
	init_node_info(stu2, 28, "zhangsan", 'm');
	init_node_info(stu3, 30, "lisi", 'f');
	pSTU s = search_node("lisi");
	print_stu_info(s);
	print_node();
	//delete_node_info("zhangsan");
	//print_node();

	free_link_node();

#ifndef DEBUG
	struct BitMap bm = {1, 3, 3, 333};
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", bm.a, bm.b, bm.c, bm.d);
#endif

	return EXIT_SUCCESS;
}
