NAME = abstract_factory

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++14

SRCDIR = src
SRC = main.cpp $(SRCDIR)/Tea.cpp $(SRCDIR)/Coffee.cpp \
	$(SRCDIR)/TeaFactory.cpp $(SRCDIR)/CoffeeFactory.cpp $(SRCDIR)/DrinkFactory.cpp

OBJDIR = out
OBJ = $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))
DEP = $(OBJ:.o=.d)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

-include $(DEP)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
