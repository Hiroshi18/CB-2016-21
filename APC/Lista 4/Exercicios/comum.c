#include <stdio.h>

int gerarValor ( int entrada , int opcao ){
  int resultado, base, contador;
  switch (opcao)
  {
    case 1: return entrada %1000000/1000;

    case 2: return ( entrada %10000)/100;

    case 3: return ( entrada %100);

    case 4: resultado = 1; base = 2;
    for ( contador = 1; contador < entrada %10; contador ++)
    {
      resultado *= base ;
    }
    return resultado;

    case 5: resultado = 1; base = 3;

    for ( contador = 1; contador < opcao -1; contador ++){
      resultado *= base ;
    }
    return resultado ;
    case 6: resultado = 1; base = 2;
    for ( contador = 1; contador <= opcao ; contador ++){
      resultado *= base ;
    }
    return resultado;
    default : return opcao * opcao ;
  }
}
