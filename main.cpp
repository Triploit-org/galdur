#ifndef MAIN_CPP
#define MAIN_CPP

#include <stdio.h>
#include <iostream>
#include <sstream>
#include "sys/parser.cpp"

char c;
int i = 0;
char getch(FILE *datei);
FILE *datei;

int main(int argc, char* argv[])
{
    Parser p;
    std::string str = "";

    std::vector<std::string> args;
    std::string token;

    if (argc == 1)
    {
        while (str != "quit")
        {
            std::cout << ">> ";
            getline(std::cin, str);

            std::istringstream s1(str);

            while(std::getline(s1, token, ' '))
            {
               args.push_back(token);
            }

            if (str == "run")
            {
                std::cout << "[> RUN" << std::endl;

                for (int i = 0; i < p.getCharSize(); i++)
                {
                    p.parse(p.getCharAt(i), i);
                }
            }
            else if (str == "write")
            {
                for (int i = 0; i < p.getCharSize(); i++)
                {
                    std::cout << "[" << i << "] " << p.getCharAt(i) << std::endl;
                }
            }
            else if (args[0].compare("del"))
            {
                std::cout << "\"" << args[1] << "\"" << std::endl;
                int i = stoi(args[1]);
                p.deleteChar(i);
            }
            else if (str == "cls")
            {
                p.clearAll();
            }

            else if (str == "quit")
            {
                std::cout << "[> END" << std::endl;
            }
            else
            {
                for (int i = 0; i < str.size(); i++)
                {
                    p.addChar(str[i]);
                    std::cout << "ADD: " << str[i] << std::endl;
                }
            }

        }
    }

    if (argc == 2)
    {
        datei = fopen(argv[1], "r");
        if (datei != NULL)
        {
            while ((c = getch(datei)) != EOF)
            {
                i = i + 1;
                p.addChar(c);
            }

            for (int i = 0; i < p.getCharSize(); i++)
            {
                p.parse(p.getCharAt(i), i);
            }

        }
        else
        {
            printf("Konnte Datei nicht finden bzw. oeffnen!\n");
            return EXIT_FAILURE;
        }
    }

    return EXIT_SUCCESS;
}

char getch(FILE *datei)
{
    char c = fgetc(datei);
    return c;
}

#endif
