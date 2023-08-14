#include <stdio.h>
#include <python.h>

/**
 * print_python_list_info - prints python list info
 *
 * @p:pyObject
 * return: no return
 */

void print_python_list_info(pyObject *p)
{
	long int size, i;
	pyListObject *list;
	pyObject *item;

	size = py_SIZE(p);
	printf("[*] size of the pyhton List = %ld\n", size);

	list = (pyListObject *)p;
	printf("[*] Allocated = %ld\n, list->allocated);

	for (i = 0; i < size; i++)
	{
		item = pyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, py_TYPE(item)->tp_name);
	}
}
