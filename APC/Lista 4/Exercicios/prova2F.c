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


int main ()
{
  int indice , var1 [10] , var2 , var3 , matricula ;
  scanf ("%d" ,&matricula);
  for ( indice =0; indice <10; indice ++){
    var3 = indice -1;
    var1 [ indice ] = gerarValor(matricula, indice +1);
    while ( var3 > 0){
      if ( var1 [ var3 ]== var1 [ indice ]) break ;
      var3--;
    }
    if ( var3 > 0)
    var1 [ indice ] = -1;
  }
  for ( indice =0; indice <10; indice ++){
    if ( var1 [ indice ] >0)
    printf ( " % d " , var1 [ indice ]);
  }
  return 0;
}
