#ifndef _LIST_H_
#define _LIST_H_
#include <iostream>


template <typename T>
class list
{
private:
	/*Node declaration*/
	typedef struct node {
		T data;
		struct node *next, *prev;
	}node_t;

	node_t *head;	// head node
	/*Private methods: Auxillury methods*/
	node_t *get_node (void);				// creates nodes
	void g_insert (node_t *beg, node_t *mid, node_t end);	// generic insert: [beg]-[mid]-[end]
	void g_delete (node_t *del_node);			// generic delete: deletes del_node
	node_t *search_node (T data);				// searches a node with match of data

	/*iterator special private data*/
	iterator *itr_beg;
	iterator *itr_end;

public:
	/*iterator class within list class*/
	class iterator
	{
	private:
		node_t *curr_node;	// reference to any node within instanciated list, NOT allocated

	public:
		iterator () {}
		~iterator () {}		// not required to define, as curr_node is taking reference of any of the node from list 	

		/*Setters method*/
		void set_curr_node (node_t *new_curr) 	{ this->curr_node = new_curr; }
	};

	/*list constructor and methods starts hear*/
	
	list ();
	~list ();
	
	iterator& begin (void)		{ this->itr_beg->set_curr_node (head->next); return (*this->iter_beg); }
	iterator& end (void) 		{ this->itr_end->set_curr_node (head);	     return (*this->iter_end); }

	void insert_beg (T new_data);
	void insert_end (T new_data);
	void insert_after_data (T e_data, T new_data);
	void insert_before_data (T e_data, T new_data);
	void del_beg (void);
	void del_end (void);
	void del_data (T del_data);
	bool is_empty (void);
	int length (void);
	void display (void);
};

#endif /*_LIST_H_*/
