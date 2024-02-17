

LIBRARIES = -lreadline\
			-lhistory\



all: 
	@cc minishell.c $(LIBRARIES)

run: all
	@./a.out