NAME = burger

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -Iinclude

SRCDIR = src
SRC = main.cpp $(SRCDIR)/Burger.cpp $(SRCDIR)/BurgerBuilder.cpp

OBJDIR = out
OBJ = $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))
DEP = $(OBJ:.o=.d)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re
