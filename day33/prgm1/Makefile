CC=clang
CFLAGS=-I.
DEPS = 
OBJ = first_and_last.o 

%.o: %.c $(DEPS)
	$(CC) -c -g -o $@ $< $(CFLAGS)

output: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean: 
	rm -rf *.o output
	rm Problem_Statement.md.backup 

run: 
	make && ./output

