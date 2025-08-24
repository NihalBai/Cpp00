CPP = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Account.cpp tests.cpp 
OBJ = $(SRC:.cpp=.o)

NAME = Account

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)