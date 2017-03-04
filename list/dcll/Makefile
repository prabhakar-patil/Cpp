CC 	= g++
OBJS 	= list_aux_routines.o list_interface_routines.o
SRCS 	= list_aux_routines.cpp list_interface_routines.cpp
OUTPUT 	= libdcll.so
INSTALL = install
INSTALL_DIR = /usr/lib/

all : $(OBJS)
	$(CC) --shared -o $(OUTPUT) $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -fPIC -c $(SRCS)	

install: all
	test -d $(INSTALL_DIR)	|| echo "$INSTALL_DIR not present, exiting..."
	sudo $(INSTALL) -m 755 $(OUTPUT) $(INSTALL_DIR)
	
clean:
	rm -f libdcll.so *.o

