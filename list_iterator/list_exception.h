#ifndef _LIST_EXCEPTIONS_H_
#define _LIST_EXCEPTIONS_H_
#include <stdexcept>

using std::runtime_error

class data_not_found : public runtime_error
{
public:
	data_not_found () : runtime_error ("data_not_found:Given data does not exist") {}
};

class list_empty : public runtime_error
{
public:
	list_empty () : runtime_error ("list_empty:list is empty") {}
};

#endif /*_LIST_EXCEPTIONS_H_*/
