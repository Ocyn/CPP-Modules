#					MACRO INITIALIZATION

NAME				= project_exe

#		INIT RESSOURCES
PARENT_DIR			= "NewProject"

define INIT__HEADER_CONTENT

#ifndef HEADERS_H
# define HEADERS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <string.h>

int			main(int argc, char **argv);
int			ft_test(int indent, char *str, int data);

#endif

endef

define INIT__MAIN_CONTENT

#include "headers.h"

int	main(int argc, char **argv)
{
	printf("\nHello World !\n");
	for (int id = 1; argv[id] && id <= argc; id++)
		ft_test(1, argv[id], id);
	return (0);
}


endef

define INIT__EXAMPLE_CONTENT

#include "headers.h"

int	ft_test(int indent, char *str, int data)
{
	while (--indent >= 0)
		printf("\t");
	printf("[%d]:  ", data);
	printf("%s", str);
	printf("\n");
}

endef

#			DIRECTORIES
LIB_DIR				= lib/
SRC_DIR				:= src/
OBJ_DIR				:= $(SRC_DIR)OBJ/

#			FILES
ALL_SRC				= main.c \
					example.c
ALL_HEADERS			= header.h

SRC_PREFIX			= $(addprefix $(SRC_DIR), $(ALL_SRC))
SRC					= $(wildcard $(SRC_PREFIX))
OBJ					= $(patsubst %.c, $(OBJ_DIR)%.o, $(notdir $(ALL_SRC)))
HEADER				= $(SRC_DIR)headers.h
#LIB				=

#			UTILITIES
CC					= cc
CFLAGS				= -Wextra -Wall -Werror -gdwarf-4

#			DEBUG LOGS
INIT_LOG			= @echo "$(PURPLE)\nMAKEFILE LAUNCHING:$(CYAN)\nInit part:$(WHITE)"
CLEAN_LOG			= @printf "$(YELLOW)\r\tCleaning OBJ$(WHITE)"
OBJ_LOG				= @printf "$(YELLOW)\r\tCompiling OBJ$(WHITE)"
LIB_LOG				= @printf "$(YELLOW)\r\tCompiling LIBS$(WHITE)"
EXE_LOG				= @printf "$(CYAN)Final part:$(YELLOW)\n\tCompiling Executable$(WHITE)"
RUN_LOG				= @printf "$(CYAN)RUNNING...\n(WHITE)"
SUCCESS_LOG			= @printf "$(GREEN)\rSUCCESS\n$(WHITE)"
FAILURE_LOG			= @printf "$(RED)\rFAILURE\n$(WHITE)"
ALLSUCCESS_LOG		= @printf "\n$(PURPLE)MAKEFILE ENDED SUCCESSFULLY$(WHITE)"

BLACK				= \033[0;30m
RED					= \033[0;91m
GREEN				= \033[0;92m
YELLOW				= \033[0;93m
BLUE				= \033[0;94m
PURPLE				= \033[0;35m
CYAN				= \033[0;96m
WHITE				= \033[0;37m


#					RULES

run : all
	$(RUN_LOG)
	./$(NAME)

init :
	mkdir $(PARENT_DIR)
	cd $(PARENT_DIR)
	mv ../Makefile $(PARENT_DIR)
	mkdir lib src
	mkdir src/OBJ
	touch src/OBJ/.keepalive 
	touch src/main.c src/headers.h

all : preliminary $(NAME)
	$(ALLSUCCESS_LOG)

preliminary : 
	$(INIT_LOG)

$(NAME): $(OBJ)
	$(EXE_LOG)
	$(CC) $(CFLAGS) $(OBJ) -I . -o $(NAME)
	$(SUCCESS_LOG)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c $(HEADER)
	$(OBJ_LOG)
	$(CC) $(CFLAGS) -c $< -o $@
	$(SUCCESS_LOG)

$(LIB) : force
	$(LIB_LOG)
	@make -sC $(LIB_DIR)
	$(SUCCESS_LOG)

clean : init
	$(CLEAN_LOG)
	rm -f $(NAME)
	$(SUCCESS_LOG)

fclean : clean
	rm -f $(OBJ)

re : fclean all

.SILENT:

.PHONY: all clean init re fclean force