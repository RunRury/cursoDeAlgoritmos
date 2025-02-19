  #include<stdio.h>

int main() {
  int rafael, pedro, mariafernanda, ruanny;

printf("digite a idade de rafael: ");
scanf("%d", &rafael);

  printf( "Idade do pedro: ");
  scanf("%d", &pedro);

  printf("Idade da mariafernanda: ");
  scanf("%d", &mariafernanda);
  
  printf("Idade da ruanny:" );
  scanf("%d", &ruanny);
  
  float idademedia;
  idademedia = (rafael + pedro + mariafernanda + ruanny) / 4.0;


  printf("A idade média é: %.2f\n", idademedia);
  
  return 0;
}
