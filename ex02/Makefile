CPP = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Account.cpp  Account.hpp tests.cpp
OBJ = $(SRC:.cpp=.o)

NAME = Phone

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)