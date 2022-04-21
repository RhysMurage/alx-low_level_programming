#ifndef _LISTS_H_
#define _LISTS_H_

int _putchar(char c);

/**
  * struct list_s- singly linked list
  * @str: string
  * @len: length of string
  * @next: pointer to the next node
  *
  * Description: singly linked list node structure
  */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
#endif /* _LISTS_H_ */
