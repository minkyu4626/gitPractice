OBJECT = main.o sum.o
main : $(OBJECT) 
	gcc -o main $(OBJECT)
sum.o : sum.c
	gcc -c sum.c
main.o : main.c
	gcc -c main.c
clean : 
	rm $(OBJECT) main 
