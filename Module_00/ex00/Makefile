#					MACRO INITIALIZATION

NAME				= megaphone

#			DIRECTORIES
#LIB_DIR				= lib/
SRC_DIR				:= src/
OBJ_DIR				:= $(SRC_DIR)OBJ/


#			FILES
ALL_SRC				= megaphone.cpp

SRC_PREFIX			= $(addprefix $(SRC_DIR), $(ALL_SRC))
SRC					= $(wildcard $(SRC_PREFIX))
OBJ					= $(patsubst %.cpp, $(OBJ_DIR)%.o, $(notdir $(ALL_SRC)))
#HEADER				= $(SRC_DIR)fajitas.h
#LIB				=

#			UTILITIES
CC					= c++
CFLAGS				= -Wextra -Wall -Werror -std=c++98

#			DEBUG LOGS
INIT_LOG			= @echo "$(PURPLE)\nMAKEFILE LAUNCHING:$(CYAN)\nInit part:$(WHITE)"
CLEAN_LOG			= @printf "$(YELLOW)\r\tCleaning OBJ$(WHITE)"
OBJ_LOG				= @printf "$(YELLOW)\r\tCompiling OBJ$(WHITE)"
LIB_LOG				= @printf "$(YELLOW)\r\tCompiling LIBS$(WHITE)"
EXE_LOG				= @printf "$(CYAN)Final part:$(YELLOW)\n\tCompiling Executable$(WHITE)"
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


all : init $(NAME)
	$(ALLSUCCESS_LOG)

init : 
	$(INIT_LOG)

$(NAME): $(OBJ)
	$(EXE_LOG)
	$(CC) $(CFLAGS) $^ -o $@
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