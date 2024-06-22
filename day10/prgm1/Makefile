CC=clang
CFLAGS=-I.
DEPS = 
OBJ = opp_sign.o 

%.o: %.c $(DEPS)
	$(CC) -c -g -o $@ $< $(CFLAGS)

output: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean: 
	rm -rf *.o output
	rm a.out

run: 
	make && ./output

