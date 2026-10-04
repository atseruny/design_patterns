CXX ?= c++
CXXFLAGS ?= -std=c++17 -Wall -Wextra -Wpedantic
CPPFLAGS ?=
LDFLAGS ?=
LDLIBS ?=

SOURCES := src/Burger.cpp src/BurgerBuilder.cpp examples/main.cpp
OBJECTS := $(SOURCES:%.cpp=build/%.o)
DEPS := $(OBJECTS:.o=.d)

.PHONY: all run clean fclean re

all: burger

burger: $(OBJECTS)
	$(CXX) $(LDFLAGS) $^ $(LDLIBS) -o $@

run: burger
	./burger

build/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) -Iinclude $(CXXFLAGS) -MMD -MP -c $< -o $@

clean:
	$(RM) $(OBJECTS) $(DEPS)

fclean: clean
	$(RM) burger

re: fclean
	$(MAKE) all

-include $(DEPS)
