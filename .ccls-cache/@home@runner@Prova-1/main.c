//1
// #include <stdio.h>
// #include <stdlib.h>
// int  trocarvalor(int A, int *B){
//   *B=*B-A;
// }
// int main(void) {
//   int A,B;
//   printf("Informe o Valor de A: ");
//   scanf("%d",&A);
//   printf("Informe o Valor de B: ");
//   scanf("%d",&B),
//   printf("O valor de A é : %d \n",A);
//   int resultado = trocarvalor(A,&B) ;
  
//   printf("O valor novo de B é : %d\n",B);
//   return 0;
// }
//2
// #include <stdio.h>
// #include <stdlib.h>
// int h(int n, int m){
//   if( n== 1  ){
//      m= m+1;
//     return 1;
//   }else if(m ==1 ){
//     n=n+1;
//   }else{
//     int resul = h(m,n-1)+h(m-1,n);
//     return resul;
//   }
// }
// int main (void){
//   int n,m;
//   printf("Informe o valor de N ");
//   scanf("%d",&n);
//   printf("Informe o valor de M ");
//   scanf("%d",&m);
//   // int resultado = h();
//   printf("%d",h(n,m));
// }
//3
// #include <stdio.h>
// #include <stdlib.h>
// int buscarElemento(int busca,int vetor[10]){
//   int i;
//   int result;
//   for(i=0;i<10;i++){
//     if(vetor[i]==busca){
//       return vetor[i];
//     }else{
//       return -1;
//     }
//   }
// }
// int main (void){
//   int vetor[10];
//   int i;
//   int busca;
//   for( i=0;i<=10;i++){
//     printf("informe o valor do %dº vetor",i);
//     scanf("%d",&vetor[i]);
//   }
//   printf("informe o qual valor você deseja procurar : %d",busca);
//   printf("Resultado do vetor :");
//   return buscarElemento( busca,  *vetor);
// }