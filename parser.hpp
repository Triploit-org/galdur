#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>

using namespace std;

vector<char> exec;
vector<char> stre;
vector<char> ch;
vector<char> ops;

long valv[9] = {0,0,0,0,0,0,0,0,0};
int valc = 0;
int kmt = 1;

bool block = false;
bool str = false;
bool el = false;
bool cep = false;

string strval = "";

int add();
int rem();

int begin_endless();
int end_endless();

int begin_block(char c);
int end_block();

//int begin_cellops();
int end_cellops(vector<char> c);

int print_char(int i);

#ifndef MAIN_H
#define MAIN_H
  #include "main.cpp"
  #include "a1z26.h"
  #include "cellops.h"
#endif

struct pparser
{
    int parse(char c, int i)
    {
        if (c != ';')
        {
                if (kmt != 0)
                {
                  	if (str == true && c != '\"')
                  	{
                    	if (c == '%')
                    	{
                    	    printf("%d", valv[valc]);
              			}
              			else if (c == '$')
                        {
                            cout << strval;
              			}
              			else if (c == '_')
                        {
                            valv[valc] = 0;
              			}
              			else if (c == '@')
                        {
                        	cout << endl;
              			}
              			else if (c == '?')
                        {
                        	cout << valc << endl;
              			}
              			else
              			{
              	        	printf("%c", c);
              			}
          			     }
				                 if (c == '+')
	                {
	                    //printf("\"%c\" > [ADD] %d\n", c, i);
	                    add();
	                }
	                else if (c == '-')
	                {
	                    //printf("\"%c\" > [REM] %d\n", c, i);
	                    rem();
	                }
	                else if (c == '_')
	                {
	                    //printf("\"%c\" > [DEL] %d\n", c, i);
	                    valv[valc] = 0;
	                }
	                else if (c == '[')
	                {
	                    //printf("\"%c\" > [BBL] %d\n", c, i);
	                    block = true;
	                }
	                else if (c == ']')
	                {
	                    //printf("\"%c\" > [EBL] %d\n", c, i);
	                    block = false;
	                    end_block();
	                }
	                else if (c == '{')
	                {
	                    //printf("\"%c\" > [BEL] \n", c);
                      el = true;
	                }
	                else if (c == '}')
	                {
	                    //printf("\"%c\" > [EEL] \n", c);
                      el = false;
                      end_endless();

                      return 0;
	                }
	                else if (c == '(')
	                {
	                    //printf("\"%c\" > [BEL] \n", c);
                      cep = true;
	                }
	                else if (c == ')')
	                {
	                    //printf("\"%c\" > [EEL] \n", c);
                      cep = false;
                      end_cellops(ops);

                      return 0;
	                }
	                else if (c == '=')
	                {
	                    //printf("\"%c\" > [END] %d\n", c, i);
	                    printf("[RTRN] > %d\n", valv[valc]);
	                    exit(0);
	                    system("exit");
	                }
	                else if (c == '@')
	                {
	                    //printf("\"%c\" > [END] %d\n", c, i);
	                    printf("\n");
	                    return 0;
	                }
	                else if (c == '!' && str != true)
	                {
	                    //printf("\"%c\" > [INP] %d\n", c, i);
	                    getline(cin, strval);
	                    return 0;
	                }
                  else if (c == '>')
                  {
                    valc++;
                    if (valc > 9)
                    {
                      valc--;
                      printf("[ERR] > Die festgelegte max. Größe beträgt 9! Zeiger = %d\n", valc-1);
                      printf("[ERR] > Zeiger = %d\n", valc);
                    }
                  }
                  else if (c == '<')
                  {
                    valc--;
                    if (valc < 0)
                    {
                      valc++;
                      printf("[ERR] > Die festgelegte min. Größe beträgt 0! Zeiger = %d\n", valc+1);
                      printf("[ERR] > Zeiger = %d\n", valc);
                    }
                  }
	                else if (c == ';')
	                {
	                	  exit(0);
	                    system("exit");
                      return 0;
					        }
	                else if (c == '.' && str != true)
	                {
	                    //printf("\"%d\" > [NUM] to [ABC] \n", valv[valc]);
	                    print_char(valv[valc]);
	                }
	                else
	                {
	                    //printf("[ERR] > Zeile %d: unerwartetes Zeichen: \"%c\"!", i, c);
	                }

	                if (block == true)
	                {
	                	if (c != '[')
	                	{
	                		exec.push_back(c);
	                		//printf("[ADDC] > %c \n", c);
            				}
            			}

	              if (el == true)
	              {
	                	if (c != '{')
	                	{
	                		stre.push_back(c);
	                		//printf("[ADDE] > %c \n", c);
        						}

                }

                if (cep == true)
                {
                  if (c != '(')
                  {
                    ops.push_back(c);
                    //printf("[ADDE] > %c \n", c);
                  }
                }
        		  }
          	}
	        else
	        {
	        	return 0;
	  	    }

	        if (c == ':' && str != true)
	        {
            //printf("\"%c\" > [KMT] %d\n", c, i);
            if (kmt == 0)
            {
                kmt = 1;
            }
            else
            {
                kmt = 0;
            }
          }

          if (c == '\"')
          {
          	if (str == true)
          	{
          		if (kmt != 0)
      				{
      				      printf("\n");
      				}
              str = false;
      			}
      			else
      			{
      				str = true;
      			}
    		  }
        }
    } Parser;

int add()
{
    valv[valc]++;
    return valv[valc];
}

int rem()
{
    valv[valc]--;
    return valv[valc];
}

int begin_block (char c)
{
  block = true;
}

int end_block ()
{
    //printf(" [\n");
    for(int i = 0; i <= exec.size(); i++)
    {
        Parser.parse(exec[i], i);
        //printf("  EXEC %c\n", exec[i]);
    }
    exec.clear();
    //printf(" ]\n");

    return 0;
}

int begin_endless()
{
  el = true;
}

int end_endless()
{
  int i = 0;
  int l = 1;
  int tr = 1;
  while (tr == 1)
  {
    for(i = 0; i <= stre.size(); i++)
    {
        Parser.parse(stre[i], l);
        //valv[valc] = 0;
        //printf("[EXE] \"%c\" %d\n", stre[i], l);
        //i++;
    }

    l = 1;
    i = 0;
  }
}
