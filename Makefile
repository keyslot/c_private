CC=gcc
SRC=src/
MAIN=main
FLAG=-Wall -Wextra
FIGURA=fruta
INCLUDE=include

.PHONY:	main clean

main:
	$(CC) -o $(MAIN) $(MAIN).c -I$(INCLUDE) $(SRC)$(FIGURA).c $(FLAGS) 

clean:
	rm  -f $(MAIN) *.o 
