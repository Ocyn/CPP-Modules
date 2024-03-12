
#					MACRO INITIALIZATION

NAME				= MyAwesome

#			DIRECTORIES
#LIB_DIR				= lib/
SRC_DIR				:= src/
OBJ_DIR				:= $(SRC_DIR)OBJ/


#			FILES
ALL_SRC				= MyAwesome.cpp \
					Contact.class.cpp \
					PhoneBook.class.cpp


SRC_PREFIX			= $(addprefix $(SRC_DIR), $(ALL_SRC))
SRC					= $(wildcard $(SRC_PREFIX))
OBJ					= $(patsubst %.cpp, $(OBJ_DIR)%.o, $(notdir $(ALL_SRC)))
#LIB				=

#			UTILITIES
CC					= c++
CFLAGS				= -Wextra -Wall -Werror -std=c++98 -g

#			DEBUG LOGS
INIT_LOG			= @echo "$(PURPLE)\nMAKEFILE LAUNCHING:$(CYAN)\nInit part:$(WHITE)"
CLEAN_LOG			= @printf "$(YELLOW)\r\tCleaning OBJ$(WHITE)"
OBJ_LOG				= @printf "$(YELLOW)\r\tCompiling OBJ$(WHITE)"
LIB_LOG				= @printf "$(YELLOW)\r\tCompiling LIBS$(WHITE)"
EXE_LOG				= @printf "$(CYAN)Final part:$(YELLOW)\n\tCompiling Executable$(WHITE)"
RUN_LOG				= @printf "$(CYAN)RUNNING...\n(WHITE)"
SUCCESS_LOG			= @printf "$(GREEN)\rSUCCESS\n$(WHITE)"
FAILURE_LOG			= @printf "$(RED)\rFAILURE\n$(WHITE)"
ALLSUCCESS_LOG		= @printf "\n$(PURPLE)MAKEFILE ENDED SUCCESSFULLY\n\n$(WHITE)"

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

all : init $(NAME)
	$(ALLSUCCESS_LOG)

init : 
	$(INIT_LOG)

$(NAME): $(OBJ)
	$(EXE_LOG)
	$(CC) $(CFLAGS) $^ -I . -o $@
	$(SUCCESS_LOG)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
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
---------------------------------------------------------------------

NAME			= minishell

SRCC_DIR		= src/
BUILTIN_DIR 	= builtin/
MEMORY_DIR 		= memory/

BUILTIN 		= pwd.c \
				cd.c \
				exit.c \
				env.c \
				echo.c \
				export.c \
				unset.c

MEMORY			= cmd_lists.c \
				lists.c \
				lists_utils.c \
	 			memory_allocation.c \
				memory_utils.c \
				quick_checking.c \
				memory_edit.c \
				str_edit_quotes.c \
				memory_scan.c \
				multisplit.c \
				initialization.c \
				quotes.c

SRCS			= main.c \
				signal.c \
				readline.c \
				utils.c \
				parse.c \
				exec.c \
				isbuilt.c \
				fd_redirection.c \
				build_command.c \
				heredoc.c \
				prompt_tuning.c \
				utils_two.c \
				shutdown.c \
				error.c \
				env_var.c 

CC 				= cc

CFLAGS			= -Wextra -Wall -Werror -gdwarf-4

LINK 			= -lreadline

HEADERS			= header/minishell.h \
				header/define_structs.h \
				header/define_syntax.h \
				header/functions_docs.h \
				header/lib.h

LIB_DIR = lib/libft/
LIB = lib/libft.a

OBJ_DIR = OBJ/

vpath %.c $(SRCC_DIR) $(BUILTIN_DIR) $(MEMORY_DIR)

MEMORY_SRCS 	= $(addprefix $(MEMORY_DIR), $(BUILTIN))
BUILTIN_SRCS 	= $(addprefix $(BUILTIN_DIR), $(BUILTIN))
OBJ_PATH 		= $(SRCC_DIR)$(OBJ_DIR)

SRCS			+= $(BUILTIN)
SRCS			+= $(MEMORY)
OBJ 			= $(patsubst %.c, $(OBJ_PATH)%.o, $(SRCS))

all : $(NAME)

$(NAME): $(OBJ) $(LIB) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJ) $(LIB) -I . -o $(NAME) $(LINK)

$(OBJ_PATH)%.o : $(BUILTIN_DIR)%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH)%.o : $(MEMORY_DIR)%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH)%.o : %.c $(OBJ_BUILTIN) $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH)%.o : %.c $(OBJ_MEMORY) $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIB): force
	@make -sC $(LIB_DIR)

clean :
	rm -f $(OBJ)
	make clean -C $(LIB_DIR)

fclean : clean
	rm -f $(NAME)
	make fclean -C $(LIB_DIR)

re : fclean all

.PHONY: all clean re fclean force











------------------------------------------------------------------------

#					MACRO INITIALIZATION

NAME				= example

#			DIRECTORIES
PARENT_DIR			= "C\ Template"
LIB_DIR				= lib/
SRC_DIR				:= src/
OBJ_DIR				:= $(SRC_DIR)OBJ/


#			FILES
ALL_SRC				= main.c \
					spin_dots.c

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