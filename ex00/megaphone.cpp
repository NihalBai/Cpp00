#include <iostream>

int main(int ac , char ** av) {
    if (ac > 1)
    {
        int i =1;
        while (i < ac)
        {
            int j =0;
            while (av[i][j])
            {
                char c = av[i][j];
                if(av[i][j] >= 'a' && av[i][j] <= 'z')
                    c = c -32;
               std::cout << c;
               j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * \n";
    }
    return 0;
}
