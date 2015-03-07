clean:
	-rm *.out
test: clean test_testme

test_testme:
	gcc -o test_testme.out test_testme.c
	./test_testme.out