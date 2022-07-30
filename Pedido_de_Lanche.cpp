#include <iostream>

using namespace std;

int main()
{
   
    
    int Hamburguer = 0, Batata_Frita = 0, Milksheik = 0, Coca_cola = 0;
    int opcao;
    char pedido = 's';
    float Valor;
    
    while(pedido == 's')
    {
    cout << "Digite o lanche escolhido \n [1] Hamburguer \t Valor: R$ 15,00 \n [2] Batata Frita \t Valor: R$ 5,00 \n [3] Coca-cola \t Valor: R$ 9,00 \n [4] Milksheik \t Valor: R$ 7,00 \n"<< endl;
    cin >> opcao;
    
        switch (opcao){
        case 1:
            cout << "Hamburguer" << endl;
            Hamburguer++;
        break;
        case 2:
            cout << "Batata Frita" << endl;
            Batata_Frita++;
        break;
        case 3:
            cout << "Coca-cola" << endl;
            Coca_cola++;
        break;
        case 4:
            cout << "Milksheik" << endl;
            Milksheik++;
        break;
        default :
            cout << "Erro, digite novamente";
        break;
        }
    cout << "Deseja continuar : s (sim)  ou  n (não)" << endl;
    cin >> pedido;
    
    }
    
    cout << " Seu pedido final " << endl;
    cout << "Hamburguer = " << Hamburguer << endl;
    cout << "Batata Frita = " << Batata_Frita << endl;
    cout << "Coca-cola = " << Coca_cola << endl;
    cout << "Milksheik = " << Milksheik << endl;
    
    Valor = ((Hamburguer*15) + (Batata_Frita*5) + (Milksheik*7) + (Coca_cola*9));
    cout << "O Valor a pagar e igual a : " << Valor ;

    return 0;
}
