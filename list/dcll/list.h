#ifndef _LIST_H_
#define _LIST_H_

#include <iostream>

class dcll
{	
public:
	dcll () 
	{
		head_node = new (node_t);
		head_node->next = head_node->prev = head_node;
		head_node->data = 0;
	}

	void insert_beg (int n_data);
	void insert_end (int n_data);
	void insert_after_data (int e_data, int n_data);
	void insert_before_data (int e_data, int n_data);
	bool is_empty (void) const;
	void del_beg (void);
	void del_end (void);
	void del_data (int e_data);
	void display (void) const;
	int length (void) const;
	bool search (int s_data) const;
private:
	typedef struct node
	{
		int data;
		struct node *next, *prev;
	}node_t;
	node_t *head_node;
	
	node_t *get_node (int data);
	void g_insert (node_t *curr_prev, node_t *curr_mid, node_t *curr_next);
	void g_delete (node_t *del_node);
	node_t *search_node (int s_data) const;
};

#endif /*_LIST_H_*/
