CPP = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)

