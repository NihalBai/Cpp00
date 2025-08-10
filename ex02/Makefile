CPP = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Account.cpp 
OBJ = $(SRC:.cpp=.o)

NAME = Acc

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)