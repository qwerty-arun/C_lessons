CC=clang
CFLAGS=-I.
DEPS = 
OBJ = infix_to_postfix_2.o 

%.o: %.c $(DEPS)
	$(CC) -c -g -o $@ $< $(CFLAGS)

output: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean: 
	rm -rf *.o output
	rm Problem_Statement.md.backup 

run: 
	make && ./output

