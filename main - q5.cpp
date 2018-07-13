#include <iostream>

using namespace std;
/*5. Escreva um programa que lê uma sequência de números inteiros enquanto
o valor 0 não é digitado. Quando esse valor for digitado o programa
deve imprimir os dois menores valores que foram digitados e terminar.
Dica: você pode assumir que o usuário irá digitar pelo menos dois
valores diferentes de zero.
• Exemplos de entrada:
3 15 7 -4 0
10 5 3 4 0
• Exemplos de saída:
O menor valor foi -4 e o segundo menor foi 3.
O menor valor foi 3 e o segundo menor foi 4.
*/

int main()
{
    int x, valores[999], i=0, j=0, y=0,k=0;
    bool teste = false;
    cout<<"digite numeros (0 para parar)"<<endl;
    do{
        cin>>x;
        valores[i]=x;
        i++;
    }while(x!=0);

    for(j=0; j<=i; j++)
    {
        for(k=0 ; k<=i; k++)
        {
            if(valores[j] < valores[k])
                teste = true;
            else
            {
                teste = false;
                break;
            }
        }
        if (teste = true && )
        {
            cout<<valores[j];
        }
    }


    return 0;
}
