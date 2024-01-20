#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocação de texto por região
#include <string.h> //biblioteca responsável por cuidar das strings

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
	
	FILE *file; // dá a instrução ao computador a criar um arquivo
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
		printf("Não foi possivel abrir o arquivo, não localizado!. \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informaões do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int Deletar()
{
	printf("Você escolheu Deletar nomes!\n");
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
	
	    printf("### Cartório da EBAC ###\n\n"); // Inicio do menu
	    printf("Escolha a opção desejada do menu:\n\n");
	    printf("\t1 - Registrar nomes\n");
	    printf("\t2 - Consultar os nomes\n");
	    printf("\t3 - Deletar nomes\n");
	    printf("Opção: ");
	
	    scanf("%d", &opcao); // Armazenamento a escolha do usuário
	
    	system("cls"); // Limpar a tela
	
    	switch(opcao)  // Sistema de seleção (mais limpo que o "IF") 
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
			    printf("Essa opção não está disponivel!\n"); // Fim da seleção
		        system("pause");
		        break;
		}
	
        } 
    }
