# CPP Module 00

## Introduction

The CPP modules (00-04) are part of 42 School's C++ curriculum, designed to introduce fundamental concepts of object-oriented programming. These modules progressively build knowledge of C++ syntax, classes, inheritance, polymorphism, and advanced OOP principles.

Each module contains exercises that explore specific C++ concepts, from basic syntax and namespaces to more advanced topics like operator overloading, canonical form, and abstract classes.

### Module Series

- [CPP Module 00](https://github.com/NihalBai/Cpp00) - Namespaces, classes, member functions, stdio streams, initialization lists, static, const
- [CPP Module 01](https://github.com/NihalBai/Cpp01) - Memory allocation, pointers to members, references, switch statement
- [CPP Module 02](https://github.com/NihalBai/Cpp02) - Ad-hoc polymorphism, operator overloading, Orthodox Canonical class form
- [CPP Module 03](https://github.com/NihalBai/Cpp03) - Inheritance
- [CPP Module 04](https://github.com/NihalBai/Cpp04) - Subtype polymorphism, abstract classes, interfaces

## Installation

Clone the repository:

```bash
git clone https://github.com/NihalBai/Cpp00.git
cd Cpp00
```

### Compilation

Each exercise has its own directory with a Makefile:

```bash
cd ex00
make
./executable_name
```

### Make Commands

```bash
make        # Compile the exercise
make clean  # Remove object files
make fclean # Remove object files and executable
make re     # Recompile everything
```

## Usage

Each module contains multiple exercises (ex00, ex01, ex02, etc.). Navigate to the exercise directory and compile:

```bash
cd ex00
make
./program_name [arguments if needed]
```

Follow the exercise instructions in the subject PDF for specific usage and expected behavior.

### Compilation Standard

All exercises are compiled with:
```bash
c++ -Wall -Wextra -Werror -std=c++98
```

The projects follow the C++98 standard as required by 42 School.
