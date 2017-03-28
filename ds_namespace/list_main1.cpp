#include <iostream>
#include "list_client1.h"
#include "list_exception.h"

using namespace list;

int main (void)
{
	dclist *ptr = new dclist ();
	
	try {
		ptr->del_beg ();
	}
	catch (list_empty &ref)
	{
		std::cout << ref.what () << std::endl;		
	}
	for (int cnt=0; cnt < 5; cnt++)
	{
		ptr->insert_beg (cnt);
	}
	ptr->display ();
	
	for (int cnt=5; cnt < 10; cnt++)
	{
		ptr->insert_end (cnt);
	}
	ptr->display ();
	
	ptr->insert_after_data(0, 100);
	ptr->display ();
	ptr->insert_before_data (0, 200);
	ptr->display ();

	ptr->del_beg ();
	ptr->display ();
	ptr->del_end ();
	ptr->display ();
	ptr->del_data (0);
	ptr->display ();
	
	std::cout << "length: " << ptr->length () << std::endl;	
	
	if (ptr->search (200) == true)
		std::cout << "search(200): present" << std::endl;
	if (ptr->search (1000) == false)
		std::cout << "search (1000): Absent" << std::endl;

	delete (ptr);

	return 0;	
}
