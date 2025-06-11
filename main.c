#include <stdio.h>

int main() {
    int opcao =1;
    float saldo = 10.000;
    float sacar;
    float depositar;



    while (opcao!=0)
    {
     
        
    printf("Bem vindo ao Banco supreme \n");

    printf("Escolha qual opcao deseja acessar:        ,[1]Verificar saldo ,[2]Sacar dinheiro , [3]Depositar dinheiro ,[0]Sair \n ");
    scanf("%d",&opcao);
 
            switch (opcao){

    case 1:
        printf("Seu Saldo eh %.3f \n",saldo);
        break;
    case 2:
    printf("Quanto deseja sacar? \n");

    scanf("%f",&sacar);
    printf("O valor restante da sua conta eh %.3f \n",saldo-sacar);    

                if (sacar > saldo)
                {
                    printf("Saldo insuficiente \n");
                    /* code */
                }else{
                    saldo -= sacar;
                    printf("saque feito,Saldo atual %.3f\n",saldo);
                }
                
        break;
    case 3:
    printf("Quanto deseja Depositar? \n");
    scanf("%f",&depositar);
    printf("O valor Total eh %.3f \n",saldo+depositar);
    
    if (depositar <=0)
    {
        printf("Erro");
        /* code */
    }else
    {
        saldo += depositar;
        printf("Deposito concluido,Saldo atual: %.3f \n");
    }
    
    break;
        case 0:
        printf("Saindo... \n");
        break;
    default:
    printf("Erro");
        break;
    }

    }
    
       

}