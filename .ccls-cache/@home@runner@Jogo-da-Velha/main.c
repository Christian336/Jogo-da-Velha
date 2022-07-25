



#include <stdio.h>
#include <string.h>

void jogo(char arr[3][3]){
   printf("     1   2   3\n\n");
    printf(" 1   %c |", arr[0][0]);
    printf(" %c |", arr[0][1]);
    printf(" %c \n", arr[0][2]);
    printf("    ---+---+---\n");

    printf(" 2   %c |", arr[1][0]);
    printf(" %c |", arr[1][1]);
    printf(" %c \n", arr[1][2]);
    printf("    ---+---+---\n");

    printf(" 3   %c |", arr[2][0]);
    printf(" %c |", arr[2][1]);
    printf(" %c \n\n", arr[2][2]);
}


int main(void) {



  
  char arr[3][3];
  arr[0][0] = ' ';
  arr[0][1] = ' ';
  arr[0][2] = ' ';
  arr[1][0] = ' ';
  arr[1][1] = ' ';
  arr[1][2] = ' ';
  arr[2][0] = ' ';
  arr[2][1] = ' ';
  arr[2][2] = ' ';

  int i;
  int j;
  char xx = 'X';
  char oo = 'O';
  int v = 0;
  int a = 0;
  int a1 = 0;
  int a2 = 0;
  int a3 = 0;
  int a4 = 0;
  int a5 = 0;
  int a6 = 0;
  int a7 = 0;
  int a8 = 0;
  int a9 = 0;


  while (v != 1) {

    jogo(arr);

    printf("X joga:\n");
    int x;
    scanf("%d", &x);
    getchar();
    if (x != 11 && x != 12 && x != 13 && x != 21 && x != 22 && x != 23 && x != 31 &&
        x != 32 && x != 33) {
      printf("Casa inválida! Escolha uma das casas disponíveis:\n");
      continue;
    }

    if (x == 11) {

      if (a1 == 1) {
        printf("Casa inválida! Escolha uma das casas disponíveis:\n");
        continue;
      } else {
        arr[0][0] = xx;
        a1 = 1;
      }
    }

    else if (x == 12) {

      if (a2 == 1) {
        printf("Casa inválida! Escolha uma das casas disponíveis:\n");
        continue;
      } else {
        arr[0][1] = xx;
        a2 = 1;
      }

    }

    else if (x == 13) {

      if (a3 == 1) {
        printf("Casa inválida! Escolha uma das casas disponíveis:\n");
        continue;
      } else {
        arr[0][2] = xx;
        a3 = 1;
      }

    }

    else if (x == 21) {

      if (a4 == 1) {
        printf("Casa inválida! Escolha uma das casas disponíveis:\n");
        continue;
      } else {
        arr[1][0] = xx;
        a4 = 1;
      }

    }

    else if (x == 22) {
      if (a5 == 1) {
        printf("Casa inválida! Escolha uma das casas disponíveis:\n");
        continue;
      } else {
        arr[1][1] = xx;
        a5 = 1;
      }
    }

    else if (x == 23) {
      if (a6 == 1) {
        printf("Casa inválida! Selecione uma das casas disponíveis:\n");
        continue;
      } else {
        arr[1][2] = xx;
        a6 = 1;
      }
    }

    else if (x == 31) {
      if (a7 == 1) {
        printf("Casa inválida! Selecione uma das casas disponíveis:\n");
        continue;
      } else {
        arr[2][0] = xx;
        a7 = 1;
      }
    }

    else if (x == 32) {
      if (a8 == 1) {
        printf("Casa inválida! Selecione uma das casas disponíveis:\n");
        continue;
      } else {
        arr[2][1] = xx;
        a8 = 1;
      }
    }

    else if (x == 33) {
      if (a9 == 1) {
        printf("Casa inválida! Selecione uma das casas disponíveis:\n");
        continue;
      } else {
        arr[2][2] = xx;
        a9 = 1;
      }
    }

    if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][2] == xx) {

       jogo(arr);

      printf("X ganhou!!!");
      v = 1;
      break;
    }

    else if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][2] == xx) {

      jogo(arr);

      printf("X ganhou!!!");
      v = 1;
      break;
    }

    else if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2]  && arr[2][2] == xx) {

      jogo(arr);
      v = 1;
      break;
    }

    else if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[2][0] == xx) {

      jogo(arr);
      v = 1;
      break;
    }

    else if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[2][1] == xx) {

      jogo(arr);

      printf("X ganhou!!!");
      v = 1;
      break;
    }

    else if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[2][2] == xx) {

      jogo(arr);
      
    printf("X ganhou!!!");
      v = 1;
      break;
    }

    else if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2]== xx) {

       jogo(arr);

     printf("X ganhou!!!");
      v = 1;
      break;
    }

    else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] == xx) {

       jogo(arr);

     printf("X ganhou!!!");
      v = 1;
      break;
    }

    else if (a1 && a2 && a3 && a4 && a5 && a6 && a7 && a8 && a9 == 1) {

       jogo(arr);
      
      printf("Empate!!!");
      v = 1;
      break;
    } else

      while (1) {

        jogo(arr);

        printf("O joga:\n" );
        int o;
        scanf("%d", &o);
        getchar();
        if (o != 11 && o != 12 && o != 13 && o != 21 && o != 22 && o != 23 &&
            o != 31 && o != 32 && o != 33) {
         printf("Casa inválida! Selecione uma das casas disponíveis:\n");
          continue;
        }

        if (o == 11) {

          if (a1 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[0][0] = oo;
            a1 = 1;
            break;
          }

        }

        else if (o == 12) {
          if (a2 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[0][1] = oo;
            a2 = 1;
            break;
          }
        }

        else if (o == 13) {
          if (a3 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[0][2] = oo;
            a3 = 1;
            break;
          }
        }

        else if (o == 21) {
          if (a4 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[1][0] = oo;
            a4 = 1;
            break;
          }
        }

        else if (o == 22) {
          if (a5 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[1][1] = oo;
            a5 = 1;
            break;
          }
        }

        else if (o == 23) {
          if (a6 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[1][2] = oo;
            a6 = 1;
            break;
          }
        }

        else if (o == 31) {
          if (a7 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[2][0] = oo;
            a7 = 1;
            break;
          }
        }

        else if (o == 32) {
          if (a8 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[2][1] = oo;
            a8 = 1;
            break;
          }
        }

        else if (o == 33) {
          if (a9 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[2][2] = oo;
            a9 = 1;
            break;
          }
        }
      }

    if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][2] == oo) {

      jogo(arr);

      printf("O ganhou!!!");
      v = 1;
      break;
    }

    else if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][2] == oo) {

       jogo(arr);

       printf("O ganhou!!!");
      v = 1;
      break;
    }

    else if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][2] == oo) {

      jogo(arr);

      printf("O ganhou!!!");
      v = 1;
      break;
    }

    else if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[2][0] == oo) {

       jogo(arr);

     printf("O ganhou!!!");
      v = 1;
      break;
    }

    else if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[2][1] == oo) {

       jogo(arr);

      printf("O ganhou!!!");
      v = 1;
      break;
    }

    else if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[2][2] == oo) {

      jogo(arr);

      printf("O ganhou!!!");
      v = 1;
      break;
    }

    else if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] == oo) {

      jogo(arr);

       printf("O ganhou!!!");
      v = 1;
      break;
    }

    else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] == oo) {

       jogo(arr);

       printf("O ganhou!!!");
      v = 1;
      break;
    }
  }

  return 0;
}

