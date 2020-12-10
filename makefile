all: duitest
duitest: dui.c duitest.c
	gcc dui.c duitest.c -o duitest
clean: 
	rm duitest
