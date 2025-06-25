NAME    := FlagTrap
CXXFLAGS := -Wall -Wextra -Werror
CXX     := c++

SRCS    := main.cpp \
		   ClapTrap.cpp \
		   ScavTrap.cpp \
		   FlagTrap.cpp

OBJS    := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re