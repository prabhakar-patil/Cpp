#include <iostream>
#include "list.h"
#include "list_exception.h"

//using namespace list;

void dcll::insert_beg (int n_data)
{
	node_t *n_node = get_node (n_data);
	g_insert (head_node, n_node, head_node->next);
}

void dcll::insert_end (int n_data)
{
	node_t *n_node = get_node (n_data);
	g_insert (head_node->prev, n_node, head_node);
}

void dcll::insert_after_data (int e_data, int n_data)
{
	node_t *e_node = search_node (e_data);
	if (!e_node)
		throw data_not_found ();
	node_t *n_node = get_node (n_data);
	g_insert (e_node, n_node, e_node->next);
}

void dcll::insert_before_data (int e_data, int n_data)
{
	node_t *e_node = search_node (e_data);
	if (!e_node)
		throw data_not_found ();
	node_t *n_node = get_node (n_data);
	g_insert (e_node->prev, n_node, e_node);
}

bool dcll::is_empty (void) const
{
	return (head_node->next == head_node && head_node->prev == head_node);
}

void dcll::del_beg (void)
{
	if (is_empty() == true)
		throw list_empty ();
	g_delete (head_node->next);
}

void dcll::del_end (void)
{
	if (is_empty () == true)
		throw list_empty ();
	g_delete (head_node->prev);
}

void dcll::del_data (int e_data)
{
	node_t *e_node = search_node (e_data);
	if (!e_node)
		throw data_not_found ();
	g_delete (e_node);
}

int dcll::length (void) const
{
	int cnt=0;
	node_t *run = head_node->next;

	while (run != head_node)
	{
		++cnt;
		run = run->next;
	}

	return cnt;
}

bool dcll::search (int s_data) const
{
	node_t *s_node = search_node(s_data);
	if (!s_node)
		return false;
	return true;
}

void dcll::display (void) const
{
	node_t *run = head_node->next;
	
	std::cout << "[beg]<->";
	while (run != head_node)
	{
		std::cout << "[" << run->data << "]<->";
		run = run->next;
	}
	std::cout << "[end]" << std::endl;
}
