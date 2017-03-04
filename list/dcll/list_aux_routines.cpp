#include <iostream>
#include "list.h"

dcll::node_t *dcll::get_node (int data)
{
	node_t *new_node = new (node_t);
	if (!new_node)
		return 0;
	new_node->data = data;
	return new_node;
}

void dcll::g_insert (dcll::node_t *curr_prev, dcll::node_t *mid, dcll::node_t *curr_next)
{
	curr_next->prev = mid;
	curr_prev->next = mid;
	mid->next = curr_next;
	mid->prev = curr_prev;
}

void dcll::g_delete (dcll::node_t *del_node)
{
	del_node->next->prev = del_node->prev;
	del_node->prev->next = del_node->next;
	delete (del_node);
}

dcll::node_t *dcll::search_node (int s_data) const
{
	node_t *run = head_node->next;
	
	while (run != head_node)
	{
		if (s_data == run->data)
			return run;
		else
			run = run->next;
		
	}

	return 0;		// we can return NULL, but Stroustrup recommends to use 0
}


