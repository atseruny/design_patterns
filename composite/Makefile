NAME = shopping_bag

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

SRCDIR = src
SRC = main.cpp $(SRCDIR)/Book.cpp $(SRCDIR)/Electronics.cpp $(SRCDIR)/ShoppingBag.cpp

OBJDIR = out
OBJ = $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))
DEP = $(OBJ:.o=.d)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
