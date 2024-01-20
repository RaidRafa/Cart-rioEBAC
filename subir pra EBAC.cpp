#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das strings

int Registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a aer cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //responsavel por copiar os valores das string
	
	FILE *file; // d� a instru��o ao computador a criar um arquivo
	file = fopen(arquivo, "w"); //cria um arquivo 
	fprintf(file,cpf); //salva o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
}

int Consulta()
{
	 setlocale(LC_ALL, "Portuguese");
	 
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!. \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa�es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int Deletar()
{
	printf("Voc� escolheu Deletar nomes!\n");
	system("pause");
}

int main()
{
	int opcao=0; //Definindo variaveis
	int x=1;
	
	for(x=1;x=1;)
	{
	
	system("cls");
	
	    setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
	
	    printf("### Cart�rio da EBAC ###\n\n"); // Inicio do menu
	    printf("Escolha a op��o desejada do menu:\n\n");
	    printf("\t1 - Registrar nomes\n");
	    printf("\t2 - Consultar os nomes\n");
	    printf("\t3 - Deletar nomes\n");
	    printf("Op��o: ");
	
	    scanf("%d", &opcao); // Armazenamento a escolha do usu�rio
	
    	system("cls"); // Limpar a tela
	
    	switch(opcao)  // Sistema de sele��o (mais limpo que o "IF") 
    	{
    		case 1:
    			Registro();
		        break;
		        
		    case 2:
			     Consulta();
				 break;  
 		       
			case 3:
		        Deletar();
				break;	
			
			default:
			    printf("Essa op��o n�o est� disponivel!\n"); // Fim da sele��o
		        system("pause");
		        break;
		}
	
        } 
    }
