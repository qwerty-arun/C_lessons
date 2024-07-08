CC=clang
CFLAGS=-I.
DEPS = 
OBJ = function_return_pointer.o 

%.o: %.c $(DEPS)
	$(CC) -c -g -o $@ $< $(CFLAGS)

output: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean: 
	rm -rf *.o output
	rm Problem_Statement.md.backup 

run: 
	make && ./output

