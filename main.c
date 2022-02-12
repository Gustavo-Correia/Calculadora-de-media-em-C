#include <conio.h>

main()
{
   /*Programa calculador de média*/
   float media1,media2,media3,media4,mediageral;

   system("Color 0A");
   printf ("Agora vamos calcular a primeira media:");
   scanf ("%f", &media1);
   printf ("Agora vamos calcular a segunda media:");
   scanf ("%f", &media2);
   printf ("Agora vamos calcular a terceira media:");
   scanf ("%f", &media3);
   printf ("Agora vamos calcular a quarta media:");
   scanf ("%f", &media4);
   mediageral = (media1+media2+media3+media4)/4;
   printf ("A sua media geral e: %f\n", mediageral);

   system ("pause");

}
