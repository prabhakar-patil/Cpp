#ifndef _LIST_EXCEPTION_H
#define _LIST_EXCEPTION_H

#include <stdexcept>

using std::runtime_error;

class list_empty : public runtime_error
{
public:
	list_empty () : runtime_error ("runtime_error:List empty") {}
};

class data_not_found : public runtime_error
{
public:
	data_not_found () : runtime_error ("runtime_error:Given data does not exist") {}
};

#endif /*_LIST_EXCEPTION_H*/
