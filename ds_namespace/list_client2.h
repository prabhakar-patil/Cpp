#ifndef _LIST_H_
#define _LIST_H_
#include <iostream>
#include <stdexcept>

namespace list
{
/************* Doubly *********************/
	class dnode;
	class dlist
	{
	public:
		dlist();
		~dlist ();
		
        	virtual void insert_beg (int n_data);
	        virtual void insert_end (int n_data);
        	virtual void insert_after_data (int e_data, int n_data);
	        virtual void insert_before_data (int e_data, int n_data);
        	virtual void del_beg (void);
	        virtual void del_end (void);
	        virtual void del_data (int e_data);
	        virtual bool is_empty (void);
        	virtual int length (void);
	        virtual void display (void);
		virtual bool search (int s_data);
	private:
		dnode *head;

		dnode *get_node (int data);
		void g_insert (dnode *beg, dnode *mid, dnode *end);
		void g_delete (dnode *del_node);
		dnode *search_node (int s_data);
	};

	class dclist
	{
	public:
		dclist();
		~dclist ();
		
        	virtual void insert_beg (int n_data);
	        virtual void insert_end (int n_data);
        	virtual void insert_after_data (int e_data, int n_data);
	        virtual void insert_before_data (int e_data, int n_data);
        	virtual void del_beg (void);
	        virtual void del_end (void);
	        virtual void del_data (int e_data);
	        virtual bool is_empty (void);
        	virtual int length (void);
	        virtual void display (void);
		virtual bool search (int s_data);
	private:
		dnode *head;

		dnode *get_node (int data);
		void g_insert (dnode *beg, dnode *mid, dnode *end);
		void g_delete (dnode *del_node);
		dnode *search_node (int s_data);
	};

/************ Singly ********************/
	class snode;
	class slist
	{
	public:
		slist();
		~slist ();
		
        	virtual void insert_beg (int n_data);
	        virtual void insert_end (int n_data);
        	virtual void insert_after_data (int e_data, int n_data);
	        virtual void insert_before_data (int e_data, int n_data);
        	virtual void del_beg (void);
	        virtual void del_end (void);
	        virtual void del_data (int e_data);
	        virtual bool is_empty (void);
        	virtual int length (void);
	        virtual void display (void);
		virtual bool search (int s_data);
	private:
		snode *head;

		snode *get_node (int data);
		void g_insert (snode *beg, snode *mid, snode *end);
		void g_delete (snode *del_node);
		snode *search_node (int s_data);
		snode *get_last_node (void);
		snode *search_back_node (int s_data);
	};
	
	class sclist
	{
	};
};	

#endif /*_LIST_H_*/
