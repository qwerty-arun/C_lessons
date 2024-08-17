CC=clang
CFLAGS=-I.
DEPS = 
OBJ = catalan_no.o 

%.o: %.c $(DEPS)
	$(CC) -c -g -o $@ $< $(CFLAGS)

output: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean: 
	rm -rf *.o output
	rm -rf a.out 

run: 
	make && ./output

