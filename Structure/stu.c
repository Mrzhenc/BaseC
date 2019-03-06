#include "../head.h"
/*
 * add.c
 *
 *  Created on: 2019年3月5日
 *      Author: root
 */

extern pSTU link_head;

pSTU create_node()
{
	pSTU stu = (pSTU)malloc(sizeof(STU));
	stu->next = NULL;
	if (NULL != stu){
		pSTU tmp = link_head;
		while(tmp->next)
			tmp = tmp->next;
		tmp->next = stu;
	}
	return stu;
}

pSTU create_head_node()
{
	pSTU t;
	t = (pSTU)malloc(sizeof(STU));
	if (NULL != t){
		t->next = NULL;
	}
	return t;
}

void delete_node_info(char *name)
{
	pSTU pre = link_head;
	pSTU cur = link_head->next;
	while(cur){
			if (!strcmp(name, cur->name)){
				pre->next = cur->next;
				free(cur);
				return ;
			}else{
				pre = cur;
				cur = cur->next;
			}
	}
}

void init_node_info(pSTU stu, int age, char *name, char sex)
{
	stu->age = age;
	stu->sex = sex;
	strcpy(stu->name, name);
}

void print_node()
{
	pSTU node = link_head->next;
	while(node){
		printf("----------------\n");
		printf("name = %s\nage = %d\nsex = %c\n", node->name, node->age, node->sex);
		node = node->next;
	}
}

void print_stu_info(pSTU node)
{
	if (NULL != node){
		printf("-------------------\n");
		printf("|name = %s\n|age = %d\n|sex = %c\n", node->name, node->age, node->sex);
	}
}

void free_link_node()
{
	pSTU node;
	pSTU cur_node;
	if(link_head){
		cur_node = link_head->next;
		while (cur_node){
			node = cur_node->next;
			free(cur_node);
			cur_node = node;
		}
		free(link_head);
	}
}

pSTU search_node(char *name)
{
	pSTU node = link_head->next;
	if (node == NULL)
		return NULL;
	while(node){
		if (!strcmp(node->name, name)){
			return node;
		}
		node = node->next;
	}
	return NULL;
}

