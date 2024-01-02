CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -I.
NAME = a.out

SRCS = main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp \

OBJS = $(addprefix obj/,$(notdir $(SRCS:.cpp=.o)))

all: $(NAME)

obj/%.o: %.cpp
	@mkdir -p obj
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf obj

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re fclean clean all