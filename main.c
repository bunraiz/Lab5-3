#include <stdio.h>
int main(void) {
  printf("M e n u\n");
  printf("1. Add (+)\n");
  printf("2. Subtract (-)\n");
  printf("3. Multiply (*)\n");
  printf("4. Devide (/)\n");
  printf("5. Modulo (%%)\n");
  float num1 ,num2;
  int index ,div ,mod1 ,mod2;
  printf("Enter Your Number 1 : ");
  scanf("%f",&num1);
  printf("Enter Your Number 2 : ");
  scanf("%f",&num2);
  printf("Select Choice : ");
  scanf("%d",&index);
  switch(index){
    case 1 : 
    printf("Answer is : %.3f + %.3f = %.3f",num1,num2,num1+num2);break;
    case 2 : 
    printf("Answer is : %.3f - %.3f = %.3f",num1,num2,num1-num2);break;
    case 3 : 
    printf("Answer is : %.3f * %.3f = %.3f",num1,num2,num1*num2);break;
    case 4 : 
    num2+=1;
    div = (int)num2;
    num2-=1;
    switch(div){
      case 1 :  printf("Devide By Zero !!!");break;
      default : printf("Answer is : %.3f / %.3f = %.3f",num1,num2,num1/num2);break;
    } break;
    case 5 :
    mod1 = (int)num1;
    mod2 = (int)num2;
    printf("Answer is : %.3f %% %.3f = %d",num1,num2,mod1%mod2);break;
  }
  return 0;
}


