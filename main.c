#include <stdio.h>

char game(char matriz[3][3] , int linha, int coluna){

for(linha = 0; linha < 3; linha++){
  for(coluna = 0; coluna < 3; coluna++){

    printf(" %c " , matriz[linha][coluna]);
    coluna == 2 && linha != 2? printf("\n-----------\n") : 
      coluna == 2? : printf("|");
  }
}

  return 0;
}


int main(void) {

char mat[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',};

  int l, c;

game(mat , l , c);

  return 0;
}