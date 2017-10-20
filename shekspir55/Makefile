install:
	gcc diff.c -o diffusio
clean:
	rm ./diffusio || "doesn't exists"

test: file1 file2 install run

file1:
	echo "a\nb\nc\n" > file1 || echo "file1 exists"
file2:
	echo "a\nb\nd\n" > file2 || echo "file2 exists"

run:
	./diffusio file1 file2
