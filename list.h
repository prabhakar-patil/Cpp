#ifndef _LIST_H_
#define _LIST_H_
#include <iostream>
/*Doubly circular linked list*/
template <typename T>
class dcll  
{
public:
    struct node;        // taking forward reference, only declaration
    class iterator;     // taking forward reference, only declaration
    
    dcll ();
    {    
        head = new <T> (node_t);    
        if (!head)        
            // throw exception    
        head->data = static_cast<T> 0;
        head->next = head->prev = head;
    }
  
    ~dcll ()
    {    
        node_t <T> *run = head->next, *run_next;      
        while (run != head)    
        {        
            run_next = run->next;        
            delete <T>(run);        
            run = run_next;    
        }
    }
    void insert_beg (T new_data);
    void insert_end (T new_data);
    void insert_after_data (T e_data, T new_data);
    void insert_before_data (T e_data, T new_data);
    void del_beg (void);
    void del_end (void);
    void del_data (T d_data);
    bool is_empty (void);
    int length (void);
    void display (void);
    
    iterator& begin (void)  
    {
        
    }
    iterator& end (void)
    {
        
    }
    
    class iterator
    {
    public:
        iterator (struct node *node): curr_node (node) {}
        //~iterator (); // not required, as i am allocating memory for curr_node
    private:
        struct node *curr_node;
    };
    
private:
    typdef struct node
    {
        T data;
        struct node *next, *prev;
    }node_t;
    node_t *head;
    node_t *start_node;
    node_t *end_node;
    
    node_t get_node (T new_data);   // create node in memory and returns that node
    void g_insert (node_t *beg, node_t *mid, node_t *end);            // generic insert method, insertes mid node inbetween of beg and end
    void g_delete (node_t *del_node);   // generic delete menthod, deletes a node
    void search_node (T s_data);    // linear search data in doubly circular list
};


#endif /*_LIST_H_*/
