compile_all:
	gcc lowercase.c -o lowercase
	./lowercase < $(file)
	gcc tokenize.c -o tokenize
	./tokenize < $(file)

lowercase:
	gcc lowercase.c -o lowercase
	./lowercase < $(file)

tokenize:
	gcc tokenize.c -o tokenize
	./tokenize < $(file)


