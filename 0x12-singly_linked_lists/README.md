# 0x12. C - Singly linked lists

Singly linked lists contain nodes which have a 'value' field as well as 'next' field, which points to the next node in line of nodes. Operations that can be performed on singly linked lists include insertion, deletion and traversal.

### Task 0. Print list

	function that prints all the elements of a list_t list.
		Prototype: size_t print_list(const list_t *h);
		Return: the number of nodes
		Format: see example
		If str is NULL, print [0] (nil)
