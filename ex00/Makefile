NAME = Bureaucrat
FILE = main.cpp Bureaucrat.cpp
OBJS = $(FILE:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all