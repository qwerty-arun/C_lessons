CC=clang
CFLAGS=-I.
DEPS = 
OBJ = power_of_2.o 

%.o: %.c $(DEPS)
	$(CC) -c -g -o $@ $< $(CFLAGS)

output: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean: 
	rm -rf *.o output

run: 
	make && ./output

