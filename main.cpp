#include <stdio.h>
#include <stdlib.h>
#ifndef MAIN_H
#include "parser.hpp"

char c;
int i = 0;
char getch(FILE *datei);
FILE *datei;

int main(int argc, char* argv[]) {

   datei=fopen(argv[1], "r");
   if(datei != NULL) {
      while( (c=getch(datei)) != EOF)
      {
         i = i + 1;
         ch.push_back(c);
       }

       for (int i = 0; i<ch.size(); i++)
       {
         Parser.parse(ch[i], i);
       }
   }
   else {
      printf("Konnte Datei nicht finden bzw. oeffnen!\n");
      return EXIT_FAILURE;
   }
   return EXIT_SUCCESS;
}

char getch(FILE *datei)
{
  char c = fgetc(datei);
  return c;
}
#endif
