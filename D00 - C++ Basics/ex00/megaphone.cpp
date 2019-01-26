#include <iostream>

int main(int argc, char **argv)
{

    int length;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }

    for (size_t i = 1; i < argc; i++)
    {

        length = strlen(argv[i]);
        for (size_t g = 0; g < length; g++)
        {
            argv[i][g] = toupper(argv[i][g]);
        }

        std::cout << argv[i];
    }
    // выводим новую строку здесь чтобы каждый новый аргумент не отображался на новой строке
    std::cout << std::endl;

    return 0;
}
