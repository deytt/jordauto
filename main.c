#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#define qt 20

void gotoxy(int x, int y);
void tela();

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i,j,opcao,op1,op2,op3,preco[qt][2],quant[20],total,total2;
	char nome[qt][20];
	
	for(j=0;j<qt;j++){
		strcpy(nome[j],"");
		preco[qt][0]=0;
		preco[qt][1]=0;
	}
	
	
	while(opcao!=5){
		tela();
		gotoxy(35,10);
		printf("CARDAPIO");
		gotoxy(35,12);
		printf("1 - Massas");
		gotoxy(35,14);
		printf("2 - Carnes");
		gotoxy(35,16);
		printf("3 - Peixes");
		gotoxy(35,18);
		printf("4 - Mostrar Nota Fiscal");
		gotoxy(35,20);
		printf("5 - Finalizar Pedido");
		gotoxy(35,22);
		printf("Opção: ");
		scanf("%d",&opcao);
		system("cls");
	
		switch(opcao){
			
			case 1:
				tela();
				gotoxy(15,10);
				printf("1 - Talharim.....R$35,00\n");
				gotoxy(15,12);
				printf("2 - Nhoque.....R$40,00\n");
				gotoxy(15,14);
				printf("3 - Espaguete.....R$15,00\n");
				gotoxy(15,16);
				printf("4 - Macarrão alho e ólho.....R$15,00\n");
				gotoxy(15,18);
				printf("5 - Voltar ao Cardapio\n");
				gotoxy(15,20);
				printf("Opção: ");
				scanf("%d",&op1);
				system("cls");
				
				switch(op1){
					case 1:
						strcpy(nome[i],"Talharim");
						gotoxy(15,10);
						printf("Opção Escolhida Talharim");
						gotoxy(15,14);
						printf("Quantidade Desejada: ");
						scanf("%d",&quant[i]);
						
						preco[i][1]=quant[i];
						total=quant[i]*35;
						preco[i][0]=total;
						
						gotoxy(15,18);
						printf("Prato: %s Quantidade: %d Preço: %d",nome[i],preco[i][1],preco[i][0]);
						getch();
						i++;
						system("cls");
					break;
					case 2:
						strcpy(nome[i],"Nhoque");
						gotoxy(15,10);
						printf("Opção Escolhida Nhoque");
						gotoxy(15,14);
						printf("Quantidade Desejada: ");
						scanf("%d",&quant[i]);
						
						preco[i][1]=quant[i];
						total=quant[i]*40;
						preco[i][0]=total;
						
						gotoxy(15,18);
						printf("Prato: %s Quantidade: %d Preço: %d",nome[i],preco[i][1],preco[i][0]);
						getch();
						i++;
						system("cls");
					break;
					case 3:
						strcpy(nome[i],"Espaguete");
						gotoxy(15,10);
						printf("Opção Escolhida Espaguete");
						gotoxy(15,14);
						printf("Quantidade Desejada: ");
						scanf("%d",&quant[i]);
						
						preco[i][1]=quant[i];
						total=quant[i]*15;
						preco[i][0]=total;
						
						gotoxy(15,18);
						printf("Prato: %s Quantidade: %d Preço: %d",nome[i],preco[i][1],preco[i][0]);
						getch();
						i++;
						system("cls");						
					break;
					case 4:
						strcpy(nome[i],"Macarrão alho e ólho");
						gotoxy(15,10);
						printf("Opção Escolhia Macarrão alho e ólho");
						gotoxy(15,14);
						printf("Quantidade Desejada: ");
						scanf("%d",&quant[i]);
						
						preco[i][1]=quant[i];
						total=quant[i]*15;
						preco[i][0]=total;
						
						gotoxy(15,18);
						printf("Prato: %s Quantidade: %d Preço: %d",nome[i],preco[i][1],preco[i][0]);
						getch();
						i++;
						system("cls");
						
					break;
				}
			break;
			case 2:
				tela();
				gotoxy(15,10);				
				printf("1 - Bife Acebolado.....R$25,00\n");
				gotoxy(15,12);
				printf("2 - Bife a Milanesa.....R$40,00\n");
				gotoxy(15,14);
				printf("3 - Bife a Cubana.....R$60,00\n");
				gotoxy(15,16);
				printf("4 - Bife com batata Sotê.....R$45,00\n");
				gotoxy(15,18);
				printf("5 - Voltar ao Cardapio\n");
				gotoxy(15,20);
				printf("Opção: ");
				scanf("%d",&op2);
				system("cls");
				switch(op2){
					case 1:
						strcpy(nome[i],"Bife Acebolado");
						gotoxy(15,10);
						printf("Opção Escolhia Bife Acebolado");
						gotoxy(15,14);
						printf("Quantidade Desejada: ");
						scanf("%d",&quant[i]);
						
						preco[i][1]=quant[i];
						total=quant[i]*15;
						preco[i][0]=total;
						
						gotoxy(15,18);
						printf("Prato: %s Quantidade: %d Preço: %d",nome[i],preco[i][1],preco[i][0]);
						getch();
						i++;
						system("cls");
					break;
					case 2:
						strcpy(nome[i],"Bife a Milanesa");
						gotoxy(15,10);
						printf("Opção Escolhia Bife a Milanesa");
						gotoxy(15,14);
						printf("Quantidade Desejada: ");
						scanf("%d",&quant[i]);
						
						preco[i][1]=quant[i];
						total=quant[i]*15;
						preco[i][0]=total;
						
						gotoxy(15,18);
						printf("Prato: %s Quantidade: %d Preço: %d",nome[i],preco[i][1],preco[i][0]);
						getch();
						i++;
						system("cls");
					break;
					case 3:
						strcpy(nome[i],"Bife a Cubana");
						gotoxy(15,10);
						printf("Opção Escolhia Bife a Cubana");
						gotoxy(15,14);
						printf("Quantidade Desejada: ");
						scanf("%d",&quant[i]);
						
						preco[i][1]=quant[i];
						total=quant[i]*15;
						preco[i][0]=total;
						
						gotoxy(15,18);
						printf("Prato: %s Quantidade: %d Preço: %d",nome[i],preco[i][1],preco[i][0]);
						getch();
						i++;
						system("cls");
					break;
					case 4:
						strcpy(nome[i],"Bife com batata Sotê");
						gotoxy(15,10);
						printf("Opção Escolhia Bife com batata Sotê");
						gotoxy(15,14);
						printf("Quantidade Desejada: ");
						scanf("%d",&quant[i]);
						
						preco[i][1]=quant[i];
						total=quant[i]*15;
						preco[i][0]=total;
						
						gotoxy(15,18);
						printf("Prato: %s Quantidade: %d Preço: %d",nome[i],preco[i][1],preco[i][0]);
						getch();
						i++;
						system("cls");
					break;
				}
				
				
			break;
			case 3: 
				tela();
				gotoxy(15,10);
				printf("1 - Peixe Milanesa.....R$50,00\n");
				gotoxy(15,12);
				printf("2 - Peixe c/Molho Branco.....R$70,00\n");
				gotoxy(15,14);
				printf("3 - Peixe com Batata.....R$45,00\n");
				gotoxy(15,16);
				printf("4 - Peixe frito com Batata frita.....R$35,00\n");
				gotoxy(15,18);
				printf("5 - Voltar ao Cardapio\n");
				gotoxy(15,20);
				printf("Opção: ");
				scanf("%d",&op3);
				system("cls");
				switch(op3){
					case 1:
						strcpy(nome[i],"Peixe Milanesa");
						gotoxy(15,10);
						printf("Opção Escolhia Peixe Milanesa");
						gotoxy(15,14);
						printf("Quantidade Desejada: ");
						scanf("%d",&quant[i]);
						
						preco[i][1]=quant[i];
						total=quant[i]*15;
						preco[i][0]=total;
						
						gotoxy(15,18);
						printf("Prato: %s Quantidade: %d Preço: %d",nome[i],preco[i][1],preco[i][0]);
						getch();
						i++;
						system("cls");
					break;
					case 2:
						strcpy(nome[i],"Peixe c/Molho Branco");
						gotoxy(15,10);
						printf("Opção Escolhia Peixe c/Molho Branco");
						gotoxy(15,14);
						printf("Quantidade Desejada: ");
						scanf("%d",&quant[i]);
						
						preco[i][1]=quant[i];
						total=quant[i]*15;
						preco[i][0]=total;
						
						gotoxy(15,18);
						printf("Prato: %s Quantidade: %d Preço: %d",nome[i],preco[i][1],preco[i][0]);
						getch();
						i++;
						system("cls");
					break;
					case 3:
						strcpy(nome[i],"Peixe com Batata");
						gotoxy(15,10);
						printf("Opção Escolhia Peixe com Batata");
						gotoxy(15,14);
						printf("Quantidade Desejada: ");
						scanf("%d",&quant[i]);
						
						preco[i][1]=quant[i];
						total=quant[i]*15;
						preco[i][0]=total;
						
						gotoxy(15,18);
						printf("Prato: %s Quantidade: %d Preço: %d",nome[i],preco[i][1],preco[i][0]);
						getch();
						i++;
						system("cls");
					break;
					case 4:
						strcpy(nome[i],"Peixe frito com Batata frita");
						gotoxy(15,10);
						printf("Opção Escolhia Peixe frito com Batata frita");
						gotoxy(15,14);
						printf("Quantidade Desejada: ");
						scanf("%d",&quant[i]);
						
						preco[i][1]=quant[i];
						total=quant[i]*15;
						preco[i][0]=total;
						
						gotoxy(15,18);
						printf("Prato: %s Quantidade: %d Preço: %d",nome[i],preco[i][1],preco[i][0]);
						getch();
						i++;
						system("cls");
					break;
				}
				
			break;
			case 4:
				tela();
				gotoxy(15,10);
				printf("Refeição\t\t Quatidade\t\t Preço");
				
				for(i=0;i<qt;i++){
					if(strcmp(nome[i],"")){
						
				gotoxy(15,14);			
				printf("%s\t\t %d\t\t %d",nome[i],preco[i][1],preco[i][0]);
				
				total2=total2+preco[i][0];
			}
		}
		gotoxy(15,18);
		printf("Total %d",total2);
		getch();
			break;
			case 5:
				tela();
				gotoxy(30,10);
				printf("Finalizando Pedido...");
			break;
		default:
			tela();
			gotoxy(22,14);
			printf("Opção Inválida, Escolha uma opção válida");
			gotoxy(19,17);
			printf("Pressione qualquer Tecla para Voltar ao Menu...");
			getch();
			system("cls");
		break;				
				
		}
	}
}


// Função posicionamento de cursor gotoxy(col, lin);
		void gotoxy(int x, int y) 
								{
			COORD c;
			c.X = x - 1;
			c.Y = y - 1;
			SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
			}

		// Função desenha moldura de tela
		void tela()
		{
		int	c,l;
     // Desenha as linhas horizontais
	     for(c=1; c<=80; c++)
	     {
	          gotoxy(c,1); printf("_");
	          gotoxy(c,5); printf("_");
	          gotoxy(c,24); printf("_");
	     }
     // Desenha as linhas verticais
	     for( l=1;l<=24;l++)
	     {
	          gotoxy(1,l); printf(".");
	          gotoxy(80,l); printf(".");
	     }
	     gotoxy(31,3);
     printf("Jordauto, O Embusteiro");
	 }

