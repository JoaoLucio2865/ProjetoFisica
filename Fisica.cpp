//create by Erik Abdala, João Lucio, Juan Ozeas, Vinicius Lima

#include <bits/stdc++.h>
#include <locale.h>

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int x, y=0, n;
    double U, R, I, P, F, L, T, E, M, VA[3];
    char res[10];
    
    while(y != 1) {
    	
    	inicio:
        
        printf("=========================== Calculadora básica para motores ===========================\n");
        printf("\nEscolha umas das funcionalidades abaixo:\n");
        printf("\n1 - Cálculo da variaçao da corrente elétrica\n");
        printf("\n2 - Cálculo da energia armazenada\n");
        printf("\n3 - Cálculo da potência\n");
        printf("\n4 - Cálculo da rotação\n");
        printf("\n=======================================================================================\n");
        
        printf("\n> "); scanf("%d", &x);
        
        switch(x) {
            
            case 1: printf("\nInsira o valor da tensão induzida, em V (Volts):\n\n(Modelo de entrada: Valor real) (Ex: 12.0; 6.0)\n\n> U = "); scanf("%lf", &U); printf("\nInsira o valor da indutância, em H (Henrys):\n\n(Modelo de entrada: Valor real) (Ex: 10.0; 5.0)\n\n> L = "); scanf("%lf", &L);
            
            printf("\nInsira o valor da variação do tempo, em s (segundos):\n\n(Modelo de entrada: Valor real) (Ex: 1.0; 0.1)\n\n> Dt = "); scanf("%lf", &T);
            
            I = T * U / L; printf("\nDi = ( %.2lf s x %.2lf V ) / %.2lf H = %.2lf A\nDi = %.2lf A\n", T, U, L, I, I); break;
            
            case 2: printf("\nInsira o valor da indutância, em H (Henrys):\n\n(Modelo de entrada: Valor real) (Ex: 10.0; 5.0)\n\n> L = "); scanf("%lf", &L); printf("\nInsira o valor da corrente elétrica induzida, em A (Amperes):\n\n(Modelo de entrada: Valor real) (Ex: 5.0; 2.5)\n\n> i = "); scanf("%lf", &I);
            
            E = 1.0/2 * L * pow(I, 2); printf("\nE = ( 1/2 ) x %.2lf H x ( %.2lf A )^2 = %.2lf J\nE = %.2lf J\n", L, I, E, E); break;
            
            case 3: printf("\nInsira o valor da tensão induzida, em V (Volts):\n\n(Modelo de entrada: Valor real) (Ex: 12.0; 6.0)\n\n> U = "); scanf("%lf", &U); printf("\nInsira o valor da corrente elétrica induzida, em A (Amperes):\n\n(Modelo de entrada: Valor real) (Ex: 5.0; 2.5)\n\n> i = "); scanf("%lf", &I);
            
            P = U * I; printf("\nP = %.2lf V x %.2lf A = %.2lf W   P = %.2lf W\n", U, I, P, P); break;
            
            case 4: printf("\nInsira o valor da tensão induzida, em V (Volts):\n\n(Modelo de entrada: Valor real) (Ex: 12.0; 6.0)\n\n> U = "); scanf("%lf", &U);
            
            printf("\nInsira o valor do número de espiras:\n\n(Modelo de entrada: Valor inteiro) (Ex: 2; 6)\n\n> n = "); scanf("%d", &n); printf("\nInsira o valor do fluxo magnético, em Wb (Webers):\n\n(Modelo de entrada: Valor real) (Ex: 0.5; 0.05)\n\n> F = "); scanf("%lf", &M);
            
            VA[0] = U * 3.14 / (2 * n * M); printf("\nVA = (( %.2lf V x 3.14 ) / ( 2 x %d x %.2lf W )) = %.2lf rad/s\n", U, n, M, VA[0]);
            
            VA[1] = VA[0] * 60 / ( 2 * 3.14 ); printf("\VA = (( %.2lf rad/s x 60 ) / ( 2 x 3.14 )) = %.2lf rpm\n", VA[0], VA[1]);
            
            VA[2] = VA[0] / (2 * 3.14); printf("\nf = %.2lf rad/s / ( 2 * 3.14 ) = %.2lf Hz\n", VA[0], VA[2]); 
            
            printf("\nVA = %.2lf rad/s   VA = %.2lf rpm   f = %.2lf Hz\n", VA[0], VA[1], VA[2]); break;
            
            default:
            	
            	printf("Por favor, insira uma opção valida!\n\n\n");
            	system("pause");
            	system("cls");
				goto inicio;
            	break;
            
        }
        
        while(1) {
            
            printf("\nAinda há cálculos a serem feitos? (S/N)\n\n> "); scanf("%s", res); printf("\n");
            
            if ((strcmp(res, "S") == 0)||(strcmp(res, "s") == 0)||(strcmp(res, "SIM") == 0)||(strcmp(res, "Sim") == 0)) { system("cls"); y = 0; break; }
            
            else if ((strcmp(res, "N") == 0)||(strcmp(res, "n") == 0)||(strcmp(res, "NÃO") == 0)||(strcmp(res, "Não") == 0)) { y = 1; break; }
            
            printf("\n");
            
        }
        
    }
    system("pause");
    
    return 0;
}
