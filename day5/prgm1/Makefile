CC=clang
CFLAGS=-I.
DEPS = 
OBJ = bubble_sort.o 

%.o: %.c $(DEPS)
	$(CC) -c -g -o $@ $< $(CFLAGS)

output: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean: 
	rm -rf *.o output

run: 
	make && ./output

