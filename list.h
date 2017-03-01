#ifndef _LIST_H_
#define _LIST_H_

/*Doubly circular linked list*/
class dcll  
{
public:
    dcll ();
    ~dcll ();
    void insert_beg (int new_data);
    void insert_end (int new_data);
    void insert_after_data (int e_data, int new_data);
    void insert_before_data (int e_data, int new_data);
    void del_beg (void);
    void del_end (void);
    void del_data (int d_data);
    bool is_empty (void);
    int length (void);
    void display (void);
    
private:
    typdef struct node
    {
        int data;
        struct node *next, *prev;
    }node_t;
    node_t *head;
};
#endif /*_LIST_H_*/
