#include <iostream>
#include <vector>


using namespace std;

int end_cellops(vector<char> c)
{
  int CA = 0;
  char F;
  int CB = 0;
  int EX = 0;
  int VALC = 0;
  int VALCD = 0;

  for (int i = 0; i<c.size(); i++)
  {
    if (c[i] == 'P')
    {
      F = 'P';
      EX++;
    }
    else if (c[i] == 'M')
    {
      F = 'M';
      EX++;
    }
    else if (c[i] == 'A')
    {
      F = 'A';
      EX++;
    }
    else if (c[i] == 'D')
    {
      F = 'D';
      EX++;
    }

    if (EX == 0)
    {
      if (c[i] == '0')
      {
        CA = valv[0];
        EX++;
      }
      else if (c[i] == '1')
      {
        CA = valv[1];
        EX++;
      }
      else if (c[i] == '2')
      {
        CA = valv[2];
        EX++;
      }
      else if (c[i] == '3')
      {
        CA = valv[3];
        EX++;
      }
      else if (c[i] == '4')
      {
        CA = valv[4];
        EX++;
      }
      else if (c[i] == '5')
      {
        CA = valv[5];
        EX++;
      }
      else if (c[i] == '6')
      {
        CA = valv[6];
        EX++;
      }
      else if (c[i] == '7')
      {
        CA = valv[7];
        EX++;
      }
      else if (c[i] == '8')
      {
        CA = valv[8];
        EX++;
      }
      else if (c[i] == '9')
      {
        CA = valv[9];
        EX++;
      }
    }

    if (EX == 2)
    {
      if (c[i] == '0')
      {
        CB = valv[0];
        EX++;
        VALCD = 0;
      }
      else if (c[i] == '1')
      {
        CB = valv[1];
        EX++;
        VALCD = 1;
      }
      else if (c[i] == '2')
      {
        CB = valv[2];
        EX++;
        VALCD = 2;
      }
      else if (c[i] == '3')
      {
        CB = valv[3];
        EX++;
        VALCD = 3;
      }
      else if (c[i] == '4')
      {
        CB = valv[4];
        EX++;
        VALCD = 4;
      }
      else if (c[i] == '5')
      {
        CB = valv[5];
        EX++;
        VALCD = 5;
      }
      else if (c[i] == '6')
      {
        CB = valv[6];
        EX++;
        VALCD = 6;
      }
      else if (c[i] == '7')
      {
        CB = valv[7];
        EX++;
        VALCD = 7;
      }
      else if (c[i] == '8')
      {
        CB = valv[8];
        EX++;
        VALCD = 8;
      }
      else if (c[i] == '9')
      {
        CB = valv[9];
        EX++;
        VALCD = 8;
      }
    }
  }

  if (F == 'P') // +
  {
    valv[VALC] = CA + CB;
    valv[VALCD] = 0;
//    printf("%d wurde auf %d gesetzt!\n", VALC, CA + CB);
    //printf("- %d wurde auf %d gesetzt!\n", VALCD, CA + CB);

  }

  if (F == 'M') // -
  {
    valv[VALC] = CA - CB;
    valv[VALCD] = 0;
//    printf("%d wurde auf %d gesetzt!\n", VALC, CA - CB);
    //printf("- %d wurde auf %d gesetzt!\n", VALCD, CA - CB);

  }

  if (F == 'A') // *
  {
    valv[VALC] = CA * CB;
    valv[VALCD] = 0;
//    printf("%d wurde auf %d gesetzt!\n", VALC, CA * CB);
    //printf("- %d wurde auf %d gesetzt!\n", VALCD, CA * CB);

  }

  if (F == 'D') // /
  {
    valv[VALC] = CA / CB;
    valv[VALCD] = 0;
//    printf("%d wurde auf %d gesetzt!\n", VALC, CA / CB);
    //printf("- %d wurde auf %d gesetzt!\n", VALCD, CA / CB);
  }

  return 0;
}
