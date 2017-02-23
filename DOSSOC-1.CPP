 /*
cout<<"agora vamo ordenar essa zona"<<endl;
aux=0;
i=1;
b=0;
while (b<17)
{
       while (aux<16)
       {
		if (a[aux] > a[i])
		{
			troca(&a[aux],&a[i]);

		}
		aux=aux+1;
		i=i+1;
       }
aux=0;
i=1;
b=b+1;
}

cout<<endl;
for (i=0;i<17;i++)
{
	cout<<"vetor de indice "<<i<<" vale: "<<a[i]<<endl;
}

getch();

}



*/




//-------------------------------------------------------------------
//     -FaNhO TeChNoLoGy inc. 2001-
//
//-------------------------------------------------------------------
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <process.h>
#include <dos.h>
#include <fstream.h>

//---------------------------------------------------------------------------








int continental=0;
int playoff=1;
int ponto=0;
int ponto1=0;
int ponto2=0;
int ponto3=0;
int b;
int sorteio[7];
int pena;
int tempo=0;
int inicial=0;
int minutos=2;
int minu=0;
int loader=0;
int contador=0;
char adversario[15];
int opcao;
int ngols=1;
char xestadio[15];
int aux=0;
char xequip_1[15];
int xequipn_1=0;
char xequip_2[15];
int xequipn_2=0;
char xequip_3[15];
int xequipn_3=0;
char xequip_4[15];
int xequipn_4=0;
char xequip_5[15];
int xequipn_5=0;
char xequip_6[15];
int xequipn_6=0;
char xequip_7[15];
int xequipn_7=0;
char xequip_8[15];
int xequipn_8=0;
int sorteio2[10];
int nivel=3;
int xgols=0;
int gols=0;
char equipe[15];
char estadio[15];

char jogador1[15];
char jogador2[15];
char jogador3[15];
char jogador4[15];
char jogador5[15];
char jogador6[15];
char jogador7[15];
char jogador8[15];
char jogador9[15];
char jogador10[15];
char jogador11[15];
char xjogador1[15];
char xjogador2[15];
char xjogador3[15];
char xjogador4[15];
char xjogador5[15];
char xjogador6[15];
char xjogador7[15];
char xjogador8[15];
char xjogador9[15];
char xjogador10[15];
char xjogador11[15];
void grupo();
int vitorias=0;
int i=0;
struct time t;

int main(void)
{
void troca(int *a, int *b);
struct date d;
void credits();
int gay(int op);
int sair(void);
int jogotreino();
void faltaperigosa();
void amistoso();
void xfaltaperigosa();
void xtiro_de_meta(void);
void tiro_de_meta();
void lateral();
void xlateral();
void inicio();
void faltameio();
void xfaltameio();
void logo();
void gol();
void xgol();
void arsenal();
void xarsenal();
void xjuventus();
void juventus();
void xmilan();
void milan();
void inter();
void xinter();
void manchester();
void xmanchester();
void real();
void xreal();
void xbeyern();
void beyern();
void barca();
void xbarca();
void america();
void penales();
void area();
//void xarea();
void meio();
void xmeio();
void defesa();
void xdefesa();
void xinicio();
void tabela();
void fim();
void xvalencia();
void xlazio();
void xroma();
void xporto();
void xpsg();
void xlacoruna();
void xliverpool();
void xparma();
void xpsv();
void valencia();
void lazio();
void roma();
void porto();
void psg();
void lacoruna();
void liverpool();
void parma();
void psv();
void boca();

int escolha;


clrscr();
cout<<"\n  FrUbBs TeChNoLoGy inc. \1 \n\n\n\n\n\n\n\n\n\n\n                                 Presents. . . ";
getch();
clrscr();
zera:;
logo();

clrscr();
comeco:;
contador=contador+1;
gols=0;
xgols=0;
clrscr();
cout<<"SUPER DOS SOCCER     uefa 2001/2002  "<<endl;

cout<<"\n\n\n\n\n0 - Amistoso europeu"<<endl;
cout<<"\n1 - Treinamento de penais"<<endl;
cout<<"\n2 - Copa dos campeoes"<<endl;
cout<<"\n3 - Instrucoes e OPCOES"<<endl;
cout<<"\n4 - Creditos e staff"<<endl;
cout<<"\n5 - sair do jogo"<<endl;




if (vitorias>0)
{
cout<<"\a6 - Copa intercontinental"<<endl;
}
if (continental>0&&ponto>8)
{
    cout<<"\a7 - Jogar contra Jotape FC   ";
}

cin>>opcao;
clrscr();
switch (opcao){
case (1):clrscr(); cout<<"TREAMENTO DE PENALTIS.\n\n\n\nEntre com o numero de cobrancas: "; cin>>pena; pena=pena/2;penales();goto comeco; break;
case (0):amistoso();goto comeco; break;
case (2): break;
case (3):instru:;
clrscr();

cout<<"INSTRUCOES\n\nNa primeira fase voce enfrentara os tres times do seu  ";
cout<<"\ngrupo em jogos apenas de ida, e se classificarao os dois melhores  .";
cout<<"\nNa segunda fase serao jogos eliminatorios somente de ida.";
cout<<"\nSe a partida terminar empatada nesta fase, havera disputa de penaltis\njogo termina ao final de "<<minutos<<" minutos.";
cout<<"\nPara escolher a acao de seus jogadores vc escolhera\no numero um (1) ou zero (0) apertando enter em seguida";
cout<<"\n\nATENCAO: Se vc apertar uma letra ao ives de um numero, havera erro de sistema\ne vc tera que reiniciar o prgorama, portanto, digite apenas numeros"<<endl;
cout<<"\nSempre que a tela parar, aperte uma tecla para continuar . . . "<<endl;
getch();
cout<<"\n\nBOA SORTE!!\n\n";
cout<<"ESCOLHA: "<<endl;
cout<<"0 - MODIFICAR O TEMPO DE DURACAO DA PARTIDA  ("<<minutos<<" min )"<<endl;
cout<<"1 - MODIFICAR O NIVEL DE DIFICULDADE"<<endl;
cout<<"2 - VOLTAR AO MENU INICIAL"<<endl;
cin>>opcao;

switch (opcao){
case (0):
    cout<<"ESCREVA QUANTOPS MINUTOS IRA DURAR O JOGO: "<<endl;
    cin>>minutos;
    if (minutos==99550933)
    {
    goto treta;
    }
    cout<<"\nMUDANCA CONCLUIDA"<<endl;
    getch();
    goto instru;
    break;
case (1):
cout<<"ESCOLHA O NIVEL:\n5-MUITO FACIL  4-FACIL  3-NORMAL  2-DIFICIL 1-CABULOSO"<<endl;
cin>>nivel;
goto instru;
break;

case(2): goto comeco; break;
}



getch();
clrscr();
goto comeco;break;
case (4):clrscr();credits();
goto comeco;
break;


case(5):
if (sair())
{
goto comeco;
}
else
{
cout<<"\n\n\n\n\n\n\n\n\n                             THANKS   FOR   PLAYNG \n\n                          FrUbSs TeChNoLoGy inc . .";
getch();
return 0;
}
break;
//--------------
case (7):
if (continental>0)
{
clrscr();
getch();
xestadio[0]=' ';
xestadio[1]=' ';
xestadio[2]='R';
xestadio[3]='e';
xestadio[4]='c';
xestadio[5]='r';
xestadio[6]='e';
xestadio[7]='i';
xestadio[8]='o';
xestadio[9]=' ';
xestadio[10]=' ';
xestadio[11]=NULL;


adversario[0]=' ';
adversario[1]=' ';
adversario[2]='J';
adversario[3]='o';
adversario[4]='t';
adversario[5]='a';
adversario[6]='p';
adversario[7]='e';
adversario[8]=' ';
adversario[9]='F';
adversario[10]='c';
adversario[12]=' ';
adversario[13]=' ';
adversario[14]=' ';
adversario[15]=' ';
adversario[16]=' ';
adversario[17]=' ';
adversario[18]=NULL;

xjogador1[0]='T';
xjogador1[1]='h';
xjogador1[2]='o';
xjogador1[3]='m';
xjogador1[4]='p';
xjogador1[5]='s';
xjogador1[6]=' ';
xjogador1[7]=NULL;


xjogador2[0]='M';
xjogador2[1]='a';
xjogador2[2]='d';
xjogador2[3]='o';
xjogador2[4]='n';
xjogador2[5]='n';
xjogador2[6]='a';
xjogador2[7]=' ';
xjogador2[8]=' ';
xjogador2[9]=NULL;

xjogador3[0]='G';
xjogador3[1]='u';
xjogador3[2]='t';
xjogador3[3]='o';
xjogador3[4]=NULL;

xjogador4[0]='K';
xjogador4[1]='a';
xjogador4[2]='r';
xjogador4[3]='a';
xjogador4[4]='t';
xjogador4[5]='e';
xjogador4[6]=' ';
xjogador4[7]=' ';
xjogador4[8]=NULL;

xjogador5[0]='V';
xjogador5[1]='i';
xjogador5[2]='n';
xjogador5[3]='i';
xjogador5[4]='c';
xjogador5[5]='i';
xjogador5[6]='u';
xjogador5[7]='s';
xjogador5[8]=' ';
xjogador5[9]=NULL;

xjogador6[0]='R';
xjogador6[1]='o';
xjogador6[2]='s';
xjogador6[3]='c';
xjogador6[4]='a';
xjogador6[5]=' ';
xjogador6[6]=' ';
xjogador6[7]=NULL;

xjogador7[0]='B';
xjogador7[1]='r';
xjogador7[2]='u';
xjogador7[3]='n';
xjogador7[4]='o';
xjogador7[5]=' ';
xjogador7[6]=' ';
xjogador7[7]=NULL;


xjogador8[0]='C';
xjogador8[1]='a';
xjogador8[2]='r';
xjogador8[3]='l';
xjogador8[4]='e';
xjogador8[5]='i';
xjogador8[6]=' ';
xjogador8[7]=NULL;

xjogador9[0]='F';
xjogador9[1]='r';
xjogador9[2]='u';
xjogador9[3]='b';
xjogador9[4]='b';
xjogador9[5]='s';
xjogador9[6]=' ';
xjogador9[7]=NULL;

xjogador10[0]='M';
xjogador10[1]='a';
xjogador10[2]='r';
xjogador10[3]='c';
xjogador10[4]='e';
xjogador10[5]='l';
xjogador10[6]='o';
xjogador10[7]=' ';
xjogador10[8]=' ';
xjogador10[9]=NULL;

xjogador11[0]='R';
xjogador11[1]='e';
xjogador11[2]='m';
xjogador11[3]='o';
xjogador11[4]=NULL;

getch();
clrscr();
cout<<"jogo de hoje:   \n";
cout<<equipe<<"   X    "<<adversario<<endl;
cout<<"Data: ";
printf("%d",
       (d.da_day+1));
printf("/%d",
       d.da_mon);
printf("/%d",
       d.da_year);
cout<<"\nestadio: Jorge Valenca"<<endl;
cout<<"arbitro: Pierre Luigi COLINA "<<endl;
cout<<"\n\n\n\nAperte qualquer tecla para comecar o jogo";
getch();
clrscr();

cout<<equipe<<"                                       "<<adversario<<endl;
cout<<endl;
cout<<jogador1<<"                                       "<<xjogador1<<endl;
cout<<jogador2<<"                                       "<<xjogador2<<endl;
cout<<jogador3<<"                                       "<<xjogador3<<endl;
cout<<jogador4<<"                                       "<<xjogador4<<endl;
cout<<jogador5<<"                                       "<<xjogador5<<endl;
cout<<jogador6<<"                                       "<<xjogador6<<endl;
cout<<jogador7<<"                                       "<<xjogador7<<endl;
cout<<jogador8<<"                                       "<<xjogador8<<endl;
cout<<jogador9<<"                                       "<<xjogador9<<endl;
cout<<jogador10<<"                                       "<<xjogador10<<endl;
cout<<jogador11<<"                                       "<<xjogador11<<endl;
getch();
clrscr();

gettime(&t);
inicial=t.ti_min;
minu=inicial+minutos;
gols=0;
xgols=0;
inicio();

if (gols>xgols)
{
    cout<<"VOCE VENCEU O JOTAPE FUTEBOL CLUBE!!  PARABENS";
}
else
{
    cout<<"O JOTAPE VENCEU MAIS UM FREGUES !!!";
}

getch();
goto comeco;
}
else
{
cout<<"NUMERO INVALIDO !!  ;-)"<<endl;
getch();
clrscr();
goto comeco;
}

break;

//-------------

case (6):
if (vitorias>0)
{
clrscr();
cout<<"MUNDIAL INTERCLUBES\n\n\n\nParabens , voce venceu com louvor o campeonato mais dificil e cobicado\ndo mundo, a COPA DOS CAMPEOAS DA UEFA .\nAgora esta diante de um novo desafio, o MUNDIAL INTERCLUBES em tokio.\nVoce enfrentara a equipe vencedora da Taca LIBERTADORES DA AMERICA 2000,\no BOCA JUNIORS da argentina. \n Boa Sorte."<<endl;

boca();

getch();
clrscr();
cout<<"final mundial interclubes:  \n";
cout<<equipe<<"   X    "<<adversario<<endl;
cout<<"Data: ";
printf("%d",
       (d.da_day+1));
printf("/%d",
       d.da_mon);
printf("/%d",
       d.da_year);
cout<<"\nestadio: Olimpico ( TOKIO )"<<endl;
cout<<"arbitro: Pierre Luigi COLINA "<<endl;
cout<<"\n\n\n\nAperte qualquer tecla para comecar o jogo";
getch();
clrscr();

cout<<equipe<<"                                       "<<adversario<<endl;
cout<<endl;
cout<<jogador1<<"                                       "<<xjogador1<<endl;
cout<<jogador2<<"                                       "<<xjogador2<<endl;
cout<<jogador3<<"                                       "<<xjogador3<<endl;
cout<<jogador4<<"                                       "<<xjogador4<<endl;
cout<<jogador5<<"                                       "<<xjogador5<<endl;
cout<<jogador6<<"                                       "<<xjogador6<<endl;
cout<<jogador7<<"                                       "<<xjogador7<<endl;
cout<<jogador8<<"                                       "<<xjogador8<<endl;
cout<<jogador9<<"                                       "<<xjogador9<<endl;
cout<<jogador10<<"                                       "<<xjogador10<<endl;
cout<<jogador11<<"                                       "<<xjogador11<<endl;
getch();
clrscr();
gols=0;
xgols=0;
gettime(&t);
inicial=t.ti_min;
minu=inicial+minutos;

inicio();

if (gols>xgols)
{
    cout<<"VOCE EH O CAMPEAO DO MUNDO !!!  PARABENS\n\nTokio esta aos seus pes, assim como todo o planeta."<<endl;
    continental=continental+4;
    getch();
    clrscr();
cout<<"             .*''''*.         "<<endl;
cout<<"            /        \\       _   _          _   _   _    "<<endl;
cout<<"           (          )     /   |_|  /\\/\\  |_| |_  |_| /\\         "<<endl;
cout<<"            \\        /      \\_  | | /    \\ |   |_  | | \\/       "<<endl;
cout<<"            '========'       "<<endl;
cout<<"             || || ||        "<<endl;
cout<<"             || || ||                             .   _ "<<endl;
cout<<"             || || ||       /\\/\\  |  |  |\\ |  |\\  |  |_|  |    "<<endl;
cout<<"             || || ||      /    \\ |__|  | \\|  |/  |  | |  |_    "<<endl;
cout<<"             || || ||        "<<endl;
cout<<"             ||_||_||        "<<endl;
cout<<"            /||_||_||\\      "<<endl;
cout<<"            \\________/       "<<endl;
cout<<"           "<<equipe<<endl;
getch();
cout<<"                               "<<endl;
cout<<"    T O Y O T A 'S                 "<<endl;
cout<<"         _                _          		   "<<endl;
cout<<"  /\\/\\  |_  |\\ |      /\\ |_                                  ______ "<<endl;
cout<<" /    \\ |_  | \\|      \\/ |                        __________/      \\  "<<endl;
cout<<"___      _            _  ___  _                  /                 O|   "<<endl;
cout<<" |  |_| |_     /\\/\\  |_|  |  /   |_|             \\_/\\/\\/\\___ toyota |   "<<endl;
cout<<" |  | | |_    /    \\ | |  |  \\_  | |                        \\______/"<<endl;
cout<<"                                                    "<<jogador10<<endl;
getch();
clrscr();
cout<<"\n\nIS THIS THE END ? . . . "<<endl;
getch(); clrscr();
cout<<"\n\nnot yet . . ;-)"<<endl;
getch();
clrscr();




}
else
{
    cout<<"Não foi dessa vez que voce conquistou o campeonato mundial . . .";
}

getch();
goto comeco;
}
else
{
cout<<"NUMERO INVALIDO !!  ;-)"<<endl;
getch();
clrscr();
goto comeco;
}

break;










default:cout<<"numero invalido !!!! "<<endl; getch(); clrscr(); goto comeco;break;
}
numeroerrado:;


//--escolha timne
cout<<"ESCOLHA SEU TIME:\n\n"<<endl;
cout<<"0-  Real Madrid Club de Futbol"<<endl;
cout<<"1-  Manchester United"<<endl;
cout<<"2-  Futbol Club Barcelona"<<endl;
cout<<"3-  Arsenal football club"<<endl;
cout<<"4-  Beyern Munchen"<<endl;
cout<<"5-  Internacionale de milano"<<endl;
cout<<"6-  Associacion Calcio Milan"<<endl;
cout<<"8-  Valencia Futbol Club"<<endl;
cout<<"9-  Sociedad Sportiva Lazio"<<endl;
cout<<"10- Associacion Calcio Roma"<<endl;
cout<<"11- Futebol Clube do Porto"<<endl;
cout<<"12- Paris Saint German"<<endl;
cout<<"13- Deportivo La Coruna"<<endl;
cout<<"14- Liverpool Football Club"<<endl;
cout<<"15- Associacion calcio Parma"<<endl;
cout<<"16- PSV Einhoven"<<endl;





cin>>escolha;
switch (escolha){
case (0): clrscr(); real();break;
case (1): clrscr(); manchester();break;
case (2): clrscr(); barca();break;
case (3): clrscr(); arsenal();break;
case (4): clrscr(); beyern();break;
case (5): clrscr(); inter();break;
case (6): clrscr(); milan();break;
case (7): clrscr(); juventus();break;
case (8): clrscr(); valencia();break;
case (9): clrscr(); lazio();break;
case (10): clrscr(); roma();break;
case (11): clrscr(); porto();break;
case (12): clrscr(); psg();break;
case (13): clrscr(); lacoruna();break;
case (14): clrscr(); liverpool();break;
case (15): clrscr(); parma();break;
case (16): clrscr(); psv();break;








case (383032):clrscr();cout<<"\nINFO DO PROGRAMADOR: ";
cout<<"\nRafael Henrique Santos Soares";
getch();
clrscr();


goto numeroerrado;break;

case (666):


clrscr();
cout<<"X   X     /\\       X X X X     X   XXXXX    X      X  X    X      X X X    "<<endl;
cout<<" X X    X X X     X           X   X  X    X   X   X X X  X   X  X      "<<endl;
cout<<"  X     X   X       X X X     XXXXX  X    XXXXX   X X X  XXXXX   X X X  "<<endl;
cout<<" X X    X   X             X   X   X  X    X   X   X X X  X   X        X   "<<endl;
cout<<"X   X   X X X      X X X X    X   X  X    X   X   X  X   X   X  X X X     "<<endl;
cout<<"\n\nO senhor eh meu pastor e nada me faltara\n    E mesmo que eu ande no vale da sombra e da morte nao temerei mal algum\npois o senhor esta comigo . . .";
cout<<"\n";
cout<<"                                                         "<<endl;
cout<<"                             ____                        "<<endl;
cout<<"                             \\  /                      "<<endl;
cout<<"                             |  |                       "<<endl;
cout<<"                             |  |                       "<<endl;
cout<<"                     |\\_ _ _/    \\_ _ _/|                    "<<endl;
cout<<"                     | _ _ _      _ _ _ |           "<<endl;
cout<<"                     |/     \\    /     \\|         "<<endl;
cout<<"                             |  |                     "<<endl;
cout<<"                             |  |                     "<<endl;
cout<<"                             |  |                      "<<endl;
cout<<"                             |  |                      "<<endl;
cout<<"                             |  |       "<<endl;
cout<<"                            /____\\      "<<endl;
getch();
return 0;
break;
case (230383): america();
break;

default:cout<<"\nESCOLHA UM NUMERO VALIDO!!";getch();clrscr();goto numeroerrado;
break;
}
getch();
clrscr();
//fim escolha time




if (escolha>7)
{
escolha=escolha-8;
}


cout<<"LOADING . . .  "<<endl;



cout<<"loading ";

while (i<8)
{
	randomize();
	sorteio[i] = rand() %8;
	i=i+1;
}


for (i=0;i<7;i++)
{
	for (b=0;b<7;b++)
	{
		while (sorteio[i]==sorteio[b]&&b!=i||sorteio[i]==escolha)
		{
			randomize();
			sorteio[i]=rand() %8;
			b=0;
			i=0;
		}
	}
clrscr();
cout<<"CARREGANDO, AGUARDE . . .   "<<loader<<" %";
loader=loader+2;
}

cout<<endl;
for (i=0;i<7;i++)
{
	cout<<"vetor de indice "<<i<<" vale: "<<sorteio[i]<<endl;
}











while (i<8)
{
	randomize();
	sorteio[i] = rand() %8;
	i=i+1;
}


for (i=0;i<7;i++)
{
	for (b=0;b<7;b++)
	{
		while (sorteio2[i]==sorteio2[b]&&b!=i||sorteio2[i]==escolha)
		{
			randomize();
			sorteio2[i]=rand() %8;
			b=0;
			i=0;
		}
	}
clrscr();
cout<<"CARREGANDO, AGUARDE . . .   "<<loader<<" %";
loader=loader+2;
}


cout<<endl;
for (i=0;i<7;i++)
{
	cout<<"vetor de indice "<<i<<" vale: "<<sorteio2[i]<<endl;
}




//-------------


grupo();

getch();

cout<<"\n\n\n        Jogos de hoje :\n\n";
cout<<equipe<<"   X   ";
switch (sorteio2[0]){
case (0): xvalencia();break;
case (1): xlazio();break;
case (2): xroma();break;
case (3): xporto();break;
case (4): xpsg();break;
case (5): xlacoruna();break;
case (6): xliverpool();break;
case (7): xparma();break;
case (8): xpsv();break;
}cout<<adversario<<endl;




cout<<endl;
switch (sorteio2[1]){
case (0): xvalencia();break;
case (1): xlazio();break;
case (2): xroma();break;
case (3): xporto();break;
case (4): xpsg();break;
case (5): xlacoruna();break;
case (6): xliverpool();break;
case (7): xparma();break;
case (8): xpsv();break;
}cout<<adversario<<"   X   ";
switch (sorteio[6]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}cout<<adversario<<endl;
ponto1=ponto1+3;
getch();
clrscr();

cout<<"\n\nPrimeiro jogo: \n\n";


cout<<equipe<<"   X    ";
switch (sorteio2[0]){
case (0): xvalencia();break;
case (1): xlazio();break;
case (2): xroma();break;
case (3): xporto();break;
case (4): xpsg();break;
case (5): xlacoruna();break;
case (6): xliverpool();break;
case (7): xparma();break;
case (8): xpsv();break;
}cout<<adversario<<endl;



getdate(&d);
cout<<"Data: ";
printf("%d",
       d.da_day);
printf("/%d",
       d.da_mon);
printf("/%d",
       d.da_year);

cout<<"\nEstadio: "<<estadio<<endl;
randomize();
cout<<"Publico pagante: "<<(rand() %9+rand() %9)<<rand() %8<<'.'<<rand() %9<<"00    pessoas"<<endl;
cout<<"Arbitro: Pierre Luigi COLINA  (ita) "<<endl;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nAperte qualquer tecla para comecar o jogo";
getch();
clrscr();

cout<<equipe<<"                                       "<<adversario<<endl;
cout<<endl;
cout<<jogador1<<"                                       "<<xjogador1<<endl;
cout<<jogador2<<"                                       "<<xjogador2<<endl;
cout<<jogador3<<"                                       "<<xjogador3<<endl;
cout<<jogador4<<"                                       "<<xjogador4<<endl;
cout<<jogador5<<"                                       "<<xjogador5<<endl;
cout<<jogador6<<"                                       "<<xjogador6<<endl;
cout<<jogador7<<"                                       "<<xjogador7<<endl;
cout<<jogador8<<"                                       "<<xjogador8<<endl;
cout<<jogador9<<"                                       "<<xjogador9<<endl;
cout<<jogador10<<"                                       "<<xjogador10<<endl;
cout<<jogador11<<"                                       "<<xjogador11<<endl;
getch();
clrscr();
//--------------------

gettime(&t);
inicial=t.ti_min;
minu=inicial+minutos;

gols=0;
xgols=0;

inicio();

if (gols==xgols)
{
    cout<<"Voce empatou !!! "<<endl;
    ponto=ponto+1;
    ponto2=ponto2+1;
}
else
{
    if(gols>xgols)
    {
        cout<<"VOCE GANHOU"<<endl;
        ponto=ponto+3;
    }
    else
    {
        cout<<"voce perdeu"<<endl;
        ponto2=ponto2+3;
    }
}

getch();
clrscr();
grupo();

 getch();

cout<<"\n\nJogos de hoje :\n\n";
cout<<equipe<<"   X   ";
switch (sorteio2[1]){
case (0): xvalencia();break;
case (1): xlazio();break;
case (2): xroma();break;
case (3): xporto();break;
case (4): xpsg();break;
case (5): xlacoruna();break;
case (6): xliverpool();break;
case (7): xparma();break;
case (8): xpsv();break;
}cout<<adversario<<endl;




cout<<endl;
switch (sorteio[6]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}cout<<adversario<<"   X   ";

switch (sorteio2[0]){
case (0): xvalencia();break;
case (1): xlazio();break;
case (2): xroma();break;
case (3): xporto();break;
case (4): xpsg();break;
case (5): xlacoruna();break;
case (6): xliverpool();break;
case (7): xparma();break;
case (8): xpsv();break;
}cout<<adversario<<endl;

ponto1=ponto1+3;
getch();
clrscr();


cout<<"\n\nSegundo jogo: \n\n";


cout<<equipe<<"   X    ";
switch (sorteio2[1]){
case (0): xvalencia();break;
case (1): xlazio();break;
case (2): xroma();break;
case (3): xporto();break;
case (4): xpsg();break;
case (5): xlacoruna();break;
case (6): xliverpool();break;
case (7): xparma();break;
case (8): xpsv();break;
}cout<<adversario<<endl;



getdate(&d);
cout<<"Data: ";
printf("%d",
       d.da_day);
printf("/%d",
       d.da_mon);
printf("/%d",
       d.da_year);

cout<<"\nEstadio: "<<estadio<<endl;
randomize();
cout<<"Publico pagante: "<<(rand() %9+rand() %9)<<rand() %8<<'.'<<rand() %9<<"00    pessoas"<<endl;
cout<<"Arbitro: DICK JOL (hol)"<<endl;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nAperte qualquer tecla para comecar o jogo";
getch();
clrscr();

cout<<equipe<<"                                       "<<adversario<<endl;
cout<<endl;
cout<<jogador1<<"                                       "<<xjogador1<<endl;
cout<<jogador2<<"                                       "<<xjogador2<<endl;
cout<<jogador3<<"                                       "<<xjogador3<<endl;
cout<<jogador4<<"                                       "<<xjogador4<<endl;
cout<<jogador5<<"                                       "<<xjogador5<<endl;
cout<<jogador6<<"                                       "<<xjogador6<<endl;
cout<<jogador7<<"                                       "<<xjogador7<<endl;
cout<<jogador8<<"                                       "<<xjogador8<<endl;
cout<<jogador9<<"                                       "<<xjogador9<<endl;
cout<<jogador10<<"                                       "<<xjogador10<<endl;
cout<<jogador11<<"                                       "<<xjogador11<<endl;
getch();
clrscr();
//--------------------

gettime(&t);
inicial=t.ti_min;
minu=inicial+minutos;



gols=0;
xgols=0;
inicio();

if (gols==xgols)
{
    cout<<"Voce empatou !!! "<<endl;
    ponto=ponto+1;
    ponto3=ponto3+1;
}
else
{
    if(gols>xgols)
    {
        cout<<"VOCE GANHOU"<<endl;
        ponto=ponto+3;
    }
    else
    {
        cout<<"voce perdeu"<<endl;
        ponto3=ponto3+3;
    }
}

getch();
clrscr();
grupo();

cout<<"\n\nJogos de hoje :\n\n";
cout<<equipe<<"   X   ";
switch (sorteio[6]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}cout<<adversario<<endl;




cout<<endl;
switch (sorteio2[0]){
case (0): xvalencia();break;
case (1): xlazio();break;
case (2): xroma();break;
case (3): xporto();break;
case (4): xpsg();break;
case (5): xlacoruna();break;
case (6): xliverpool();break;
case (7): xparma();break;
case (8): xpsv();break;
}cout<<adversario<<"   X   ";

switch (sorteio2[1]){
case (0): xvalencia();break;
case (1): xlazio();break;
case (2): xroma();break;
case (3): xporto();break;
case (4): xpsg();break;
case (5): xlacoruna();break;
case (6): xliverpool();break;
case (7): xparma();break;
case (8): xpsv();break;
}cout<<adversario<<endl;

randomize();
aux=rand() %3;

switch(aux){
case(0): ponto2=ponto2+3; break;
case(1): ponto3=ponto3+3; break;
case(2): ponto3=ponto3+1; ponto2=ponto2+1; break;
}
getch();
clrscr();


cout<<"\n\nSegundo jogo: \n\n";


cout<<equipe<<"   X    ";
switch (sorteio[6]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}cout<<adversario<<endl;



getdate(&d);
cout<<"Data: ";
printf("%d",
       d.da_day);
printf("/%d",
       d.da_mon);
printf("/%d",
       d.da_year);

cout<<"\nEstadio: "<<estadio<<endl;
randomize();
cout<<"Publico pagante: "<<(rand() %9+rand() %9)<<rand() %8<<'.'<<rand() %9<<"00     pessoas"<<endl;
cout<<"Arbitro: Pierre Luigi COLINA (ita)"<<endl;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nAperte qualquer tecla para comecar o jogo";
getch();
clrscr();

cout<<equipe<<"                                       "<<adversario<<endl;
cout<<endl;
cout<<jogador1<<"                                       "<<xjogador1<<endl;
cout<<jogador2<<"                                       "<<xjogador2<<endl;
cout<<jogador3<<"                                       "<<xjogador3<<endl;
cout<<jogador4<<"                                       "<<xjogador4<<endl;
cout<<jogador5<<"                                       "<<xjogador5<<endl;
cout<<jogador6<<"                                       "<<xjogador6<<endl;
cout<<jogador7<<"                                       "<<xjogador7<<endl;
cout<<jogador8<<"                                       "<<xjogador8<<endl;
cout<<jogador9<<"                                       "<<xjogador9<<endl;
cout<<jogador10<<"                                       "<<xjogador10<<endl;
cout<<jogador11<<"                                       "<<xjogador11<<endl;
getch();
clrscr();
//--------------------

gols=0;
xgols=0;


gettime(&t);
inicial=t.ti_min;
minu=inicial+minutos;



inicio();

if (gols==xgols)
{
    cout<<"Voce empatou !!! "<<endl;
    ponto=ponto+1;
    ponto1=ponto1+1;
}
else
{
    if(gols>xgols)
    {
        cout<<"VOCE GANHOU"<<endl;
        ponto=ponto+3;
    }
    else
    {
        cout<<"voce perdeu"<<endl;
        ponto1=ponto1+3;
    }
}

getch();
clrscr();

grupo();


getch();

if (ponto<ponto1&&ponto<ponto2||ponto<ponto1&&ponto<ponto3||ponto<ponto2&&ponto<ponto3)
{
    clrscr();
    cout<<"Voce nao passou da fase classificatoria !!!\nA torcida do "<<equipe<<" nao merece isso"<<endl;
    getch();
    ponto=0;
    ponto1=0;
    ponto2=0;
    ponto3=0;
    goto comeco;

}

    ponto=0;
    ponto1=0;
    ponto2=0;
    ponto3=0;

cout<<"\n\nPARABENS !!  voce avancou para a faze eliminatoria!!  \nBOA SORTE!"<<endl;
getch();
clrscr();

// -----------    quartas ----------
playoff=1;
cout<<"                             ________                     "<<endl;
cout<<equipe;

cout<<"               .<__________>.              ";


switch (sorteio[0]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}
cout<<adversario;cout<<endl;
switch (sorteio[1]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}
cout<<adversario;

cout<<"            /\\/              \\/\\           ";
switch (sorteio[2]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}
cout<<adversario;cout<<endl;

cout<<"                      /  \\     /__\\     /  \\\                "<<endl;
cout<<"                      \\   \\    \\  /    /   /           "<<endl;
switch (sorteio[3]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}
cout<<adversario;

cout<<"            \\___\\          /___/             "<<endl;
switch (sorteio[4]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}
cout<<adversario;

cout<<"                 \\  UEFA  /                ";
switch (sorteio[5]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}
cout<<adversario<<endl;

cout<<"                             \\______/                  ";
switch (sorteio[6]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}
cout<<adversario;cout<<endl;
cout<<"                            /________\\                    "<<endl;
cout<<"                                                            "<<endl;
cout<<"                                                              "<<endl;
getch();


//---Jogo1----
clrscr();
cout<<"\n\nPrimeiro jogo: \n\n";


cout<<equipe<<"   X    ";
switch (sorteio[1]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}
cout<<adversario;cout<<endl;


getdate(&d);
cout<<"Data: ";
printf("%d",
       d.da_day);
printf("/%d",
       d.da_mon);
printf("/%d",
       d.da_year);

cout<<"\nEstadio: "<<estadio<<endl;
randomize();
cout<<"Publico pagante: "<<(rand() %9+rand() %9)<<rand() %8<<'.'<<rand() %9<<"00    pessoas"<<endl;
cout<<"Arbitro:DICK JOL (hol) "<<endl;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nAperte qualquer tecla para comecar o jogo";
getch();
clrscr();

cout<<equipe<<"                                       "<<adversario<<endl;
cout<<endl;
cout<<jogador1<<"                                       "<<xjogador1<<endl;
cout<<jogador2<<"                                       "<<xjogador2<<endl;
cout<<jogador3<<"                                       "<<xjogador3<<endl;
cout<<jogador4<<"                                       "<<xjogador4<<endl;
cout<<jogador5<<"                                       "<<xjogador5<<endl;
cout<<jogador6<<"                                       "<<xjogador6<<endl;
cout<<jogador7<<"                                       "<<xjogador7<<endl;
cout<<jogador8<<"                                       "<<xjogador8<<endl;
cout<<jogador9<<"                                       "<<xjogador9<<endl;
cout<<jogador10<<"                                       "<<xjogador10<<endl;
cout<<jogador11<<"                                       "<<xjogador11<<endl;
getch();
clrscr();
//--------------------

gettime(&t);
inicial=t.ti_min;
minu=inicial+minutos;

gols=0;
xgols=0;

inicio();
if (gols>xgols)
{
gols=0;
xgols=0;
getch();
clrscr();
cout<<"Parabens, vc venceu o "<<adversario<<endl;
cout<<"Avanca para as semi-finais"<<endl;
getch();

clrscr();


cout<<"                            ________                     "<<endl;
cout<<equipe;

cout<<"               .<__________>.              ";


switch (sorteio[0]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}
cout<<adversario;cout<<endl;
cout<<"           ";

cout<<"            /\\/              \\/\\           ";
cout<<endl;

cout<<"                      /  \\     /__\\     /  \\\                "<<endl;
cout<<"                      \\   \\    \\  /    /   /           "<<endl;


cout<<"                       \\___\\          /___/             "<<endl;
switch (sorteio[4]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}
cout<<adversario;

cout<<"                 \\  UEFA  /                ";
switch (sorteio[5]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}
cout<<adversario<<endl;

cout<<"                             \\______/                  ";
cout<<endl;
cout<<"                            /________\\                    "<<endl;
cout<<"                                                             "<<endl;
cout<<"                                                              "<<endl;
getch();




//----fim da segunda fase------

switch (sorteio[4]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}
getch();
clrscr();
cout<<"Semi final:  \n";
cout<<equipe<<"   X    "<<adversario<<endl;
cout<<"Data: ";
printf("%d",
       (d.da_day+1));
printf("/%d",
       d.da_mon);
printf("/%d",
       d.da_year);
cout<<"\nestadio: "<<xestadio<<endl;
cout<<"Publico pagante: "<<(rand() %9+rand() %9)<<rand() %8<<'.'<<rand() %9<<"00    pessoas"<<endl;
cout<<"arbitro: Pierre Luigi COLINA (ita) "<<endl;
cout<<"\n\n\n\nAperte qualquer tecla para comecar o jogo";
getch();
clrscr();

cout<<equipe<<"                                       "<<adversario<<endl;
cout<<endl;
cout<<jogador1<<"                                       "<<xjogador1<<endl;
cout<<jogador2<<"                                       "<<xjogador2<<endl;
cout<<jogador3<<"                                       "<<xjogador3<<endl;
cout<<jogador4<<"                                       "<<xjogador4<<endl;
cout<<jogador5<<"                                       "<<xjogador5<<endl;
cout<<jogador6<<"                                       "<<xjogador6<<endl;
cout<<jogador7<<"                                       "<<xjogador7<<endl;
cout<<jogador8<<"                                       "<<xjogador8<<endl;
cout<<jogador9<<"                                       "<<xjogador9<<endl;
cout<<jogador10<<"                                       "<<xjogador10<<endl;
cout<<jogador11<<"                                       "<<xjogador11<<endl;
getch();
clrscr();

gettime(&t);
inicial=t.ti_min;
minu=inicial+minutos;

inicio();


if (gols>xgols)
{
gols=0;
xgols=0;

getch();
clrscr();
cout<<"Parabens, vc venceu o "<<adversario<<endl;
cout<<"Preparado para a grande final ??"<<endl;
getch();
clrscr();
//TABELA DA FINAL------
cout<<"                                 ________                "<<endl;
cout<<"                              .<__________>.              "<<endl;
cout<<"                           /\\/              \\/\\        "<<endl;
cout<<"                          /  \\      /_\\     /  \\\       "<<endl;
aux=11;
for (aux=0;aux<11;aux++)
{
cout<<equipe[aux];
}cout<<"               \\   \\     \\ /    /   /      ";switch (sorteio[5]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}
cout<<adversario<<endl;
cout<<"                           \\___\\          /___/        "<<endl;
cout<<"                                \\  UEFA  /              "<<endl;
cout<<"                                 \\______/            "<<endl;
cout<<"                                /________\\          "<<endl;
cout<<"                                            "<<endl;
getch();
clrscr();


//----fim da tabela da final------



cout<<"Final: \n";
cout<<equipe<<"   X    "<<adversario<<endl;
cout<<"Data: ";
printf("%d",
       (d.da_day+2));
printf("/%d",
       d.da_mon);
printf("/%d",
       d.da_year);
cout<<endl;
cout<<"estadio: Parc des Princes (Franca)  "<<endl;
cout<<"Publico pagante: "<<(rand() %9+rand() %9)<<rand() %8<<'.'<<rand() %9<<"00    pessoas"<<endl;
cout<<"arbitro: Pierre Luigi COLINA (ita) "<<endl;
cout<<"\n\n\n\nAperte qualquer tecla para comecar o jogo";

getch();
clrscr();

cout<<equipe<<"                                       "<<adversario<<endl;
cout<<endl;
cout<<jogador1<<"                                       "<<xjogador1<<endl;
cout<<jogador2<<"                                       "<<xjogador2<<endl;
cout<<jogador3<<"                                       "<<xjogador3<<endl;
cout<<jogador4<<"                                       "<<xjogador4<<endl;
cout<<jogador5<<"                                       "<<xjogador5<<endl;
cout<<jogador6<<"                                       "<<xjogador6<<endl;
cout<<jogador7<<"                                       "<<xjogador7<<endl;
cout<<jogador8<<"                                       "<<xjogador8<<endl;
cout<<jogador9<<"                                       "<<xjogador9<<endl;
cout<<jogador10<<"                                       "<<xjogador10<<endl;
cout<<jogador11<<"                                       "<<xjogador11<<endl;
getch();
clrscr();

gettime(&t);
inicial=t.ti_min;
minu=inicial+minutos;


inicio();

if (gols>xgols)
{
treta:;
clrscr();
cout<<"Parabens cara!!! voce eh o campeao!!\nA copa dos campeoes 2001/2002 eh sua!\n";
getch();
clrscr();
cout<<"                                                                            "<<endl;
cout<<"             _______________________________                  "<<jogador1<<endl;
cout<<"            / _____________________________ \\ "<<endl;
cout<<"           / /                             \\ \\              "<<jogador2<<endl;
cout<<"           \\ \\_____________________________/ /              "<<endl;
cout<<"    _____   \\                               /  ____          "<<jogador3<<endl;
cout<<"   //    \\  /                              \\  //  \\\\      "<<endl;
cout<<"  //      \\/            ___  ___  ___       \\//    \\\\     "<<jogador4<<endl;
cout<<"  \\\\      \\\\     |   | |    |    |   |     //      //     "<<endl;
cout<<"    \\\\     \\\\    |   | |--  |--  |---|    //     //       "<<jogador5<<endl;
cout<<"      \\\\    \\\\   |___| |___ |    |   |   //    //         "<<endl;
cout<<"        \\\\   \\\\                         //   //           "<<jogador6<<endl;
cout<<"          \\\\__\\\\         CHAMPIONS     //__//             "<<endl;
cout<<"               \\\\             League  //                    "<<jogador7<<endl;
cout<<"                \\\\                   //                     "<<endl;
cout<<"                 \\\\                 //                      "<<jogador8<<endl;
cout<<"                  \\\\               //                       "<<endl;
cout<<"                   \\\\             //                        "<<jogador9<<endl;
cout<<"                    \\\\           //                         "<<endl;
cout<<"                    //           \\\\                         "<<jogador10<<endl;
cout<<"                   //             \\\\                        "<<endl;
cout<<"                  /_________________\\                        "<<jogador11<<endl;
cout<<"\n                        "<<equipe<<endl;
getch();
clrscr();
cout<<"                          H A L L   O F   F A M E"<<endl;

cout<<endl;
cout<<" 1956 - REAL MADRID       esp               1979 - NOTTINGHAM FOREST     ing"<<endl;
cout<<" 1957 - REAL MADRID       esp               1980 - NOTHINGHAM FOREST     ing"<<endl;
cout<<" 1958 - REAL MADRID       esp               1981 - LIVERPOOL             ing"<<endl;
cout<<" 1959 - REAL MADRID       esp               1982 - ASTON VILLA           ing"<<endl;
cout<<" 1960 - REAL MADRID       esp               1983 - HAMBURGO              ale"<<endl;
cout<<" 1961 - BENFICA           por               1984 - LIVERPOOL             ing"<<endl;
cout<<" 1962 - BENFICA           por               1985 - JUVENTUS              ita"<<endl;
cout<<" 1963 - MILAN             ita               1986 - STEUA BUCARESTE       rom"<<endl;
cout<<" 1964 - INTERNAZIONALE    ita               1987 - PORTO                 por"<<endl;
cout<<" 1965 - INTERNAZIONALE    ita               1988 - PSV                   hol"<<endl;
cout<<" 1966 - REAL MADRID       esp               1989 - MILAN                 ita"<<endl;
cout<<" 1967 - CELTIC            esc               1990 - MILAN                 ita"<<endl;
cout<<" 1968 - MANCHESTER UNITED ing               1991 - ESTRELHA VERMELHA     iug"<<endl;
cout<<" 1969 - MILAN             ita               1992 - BARCELONA             esp"<<endl;
cout<<" 1970 - FEYENOORD         hol               1993 - OLIMPIQUE DE MARSELHA fra"<<endl;
cout<<" 1971 - AJAX              hol               1994 - MILAN                 ita"<<endl;
cout<<" 1972 - AJAX              hol               1995 - AJAX                  hol"<<endl;
cout<<" 1973 - AJAX              hol               1996 - JUVENTUS              ita"<<endl;
cout<<" 1974 - BAYERN MUNCHEN    ale               1997 - BORUSSIA DORTIMOUND   ale"<<endl;
cout<<" 1975 - BAYERN MUNCHEN    ale               1998 - REAL MADRID           esp"<<endl;
cout<<" 1976 - BAYERN MUNCHEN    ale               1999 - MANCHESTER UNITED     ing"<<endl;
cout<<" 1977 - LIVERPOOL         ing               2000 - REAL MADRID           esp"<<endl;
cout<<" 1978 - LIVERPOOL         ing               2001 - "<<equipe;

getch();
clrscr();
cout<<endl;





credits();
cout<<"\n            A todos os grandes jogadores do mundo,\n      obrigado pela inspiracao. "<<endl;
getch();

clrscr();
cout<<"FaNhO TeChNoLoGy inc. \1 \n\n\n\n\n\n\n\n\n\n\n\nThanks for playing\n\n\nChose team Cheat code: 230383\n\nmail us for more secret codes\nhsoares@gold.com.br";
getch();
vitorias=vitorias+13;
clrscr();














goto zera;

}
else
{
cout<<"voce eh o vice campeao !!!";
getch();
clrscr();
cout<<"                                 ________                "<<endl;
cout<<"                              .<__________>.              "<<endl;
cout<<"                           /\\/              \\/\\        "<<endl;
cout<<"                          /  \\      /_\\     /  \\\       "<<endl;
cout<<"                          \\   \\     \\ /    /   /      "<<endl;
cout<<"                           \\___\\          /___/        "<<endl;
cout<<"                                \\  UEFA  /              "<<endl;
cout<<"                                 \\______/            "<<endl;
cout<<"                                /________\\          "<<endl;
cout<<endl;
cout<<"                               "<<adversario<<endl;
getch();
clrscr();
void credits();
goto comeco;
}










}
else
{
getch();
clrscr();
cout<<"Eh cara, Voce parou na semi final\nA torcida do "<<equipe<<" esta bastante triste agora\nquem sabe na proxima temporada . . .";
getch();
fim();
getch();
goto comeco;
}


}
else
{
getch();
clrscr();
cout<<"Eh cara, o "<<adversario<<" foi muito pra vc . .  treine mais!";
getch();
fim();
getch();
goto comeco;
}
}














//===========================================
//=========  T  I  M  E  S ===========

void inter(void)
{

ifstream equipef("data1.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}

void xinter(void)
{

ifstream xequipef("data1.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}



void arsenal(void)
{

ifstream equipef("data2.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}

void xarsenal(void)
{

ifstream xequipef("data2.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}

void real(void)
{

ifstream equipef("data3.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}

void xreal(void)
{

ifstream xequipef("data3.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}

void manchester(void)
{

ifstream equipef("data4.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}

void xmanchester(void)
{

ifstream xequipef("data4.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}
void barca()
{

ifstream equipef("data5.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}
void xbarca(void)
{

ifstream xequipef("data5.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}

void beyern(void)
{

ifstream equipef("data6.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}

void xbeyern(void)
{

ifstream xequipef("data6.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}
void milan(void)
{

ifstream equipef("data7.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}
void xmilan(void)
{

ifstream xequipef("data7.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}
void juventus(void)
{
ifstream equipef("data8.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}

void xjuventus(void)
{

ifstream xequipef("data8.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}


void valencia(void)
{

ifstream equipef("data9.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}

void xvalencia(void)
{

ifstream xequipef("data9.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}



void lazio(void)
{

ifstream equipef("data10.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}

void xlazio(void)
{

ifstream xequipef("data10.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}

void roma(void)
{

ifstream equipef("data11.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}

void xroma(void)
{

ifstream xequipef("data11.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}


void porto(void)
{

ifstream equipef("data12.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}

void xporto(void)
{

ifstream xequipef("data12.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}


void psg(void)
{

ifstream equipef("data13.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}

void xpsg(void)
{

ifstream xequipef("data13.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}


void lacoruna(void)
{

ifstream equipef("data14.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}

void xlacoruna(void)
{

ifstream xequipef("data14.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}


void liverpool(void)
{

ifstream equipef("data15.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}

void xliverpool(void)
{

ifstream xequipef("data15.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}


void parma(void)
{

ifstream equipef("data16.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}

void xparma(void)
{

ifstream xequipef("data16.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}


void psv(void)
{

ifstream equipef("data17.fut");

equipef>>equipe;
equipef>>estadio;
equipef>>jogador1;
equipef>>jogador2;
equipef>>jogador3;
equipef>>jogador4;
equipef>>jogador5;
equipef>>jogador6;
equipef>>jogador7;
equipef>>jogador8;
equipef>>jogador9;
equipef>>jogador10;
equipef>>jogador11;

cout<<equipe<<endl;
cout<<endl;
cout<<jogador1<<endl;
cout<<jogador2<<endl;
cout<<jogador3<<endl;
cout<<jogador4<<endl;
cout<<jogador5<<endl;
cout<<jogador6<<endl;
cout<<jogador7<<endl;
cout<<jogador8<<endl;
cout<<jogador9<<endl;
cout<<jogador10<<endl;
cout<<jogador11<<endl;
getch();

}

void xpsv(void)
{

ifstream xequipef("data17.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;
}

void boca(void)
{

ifstream xequipef("data18.fut");

xequipef>>adversario;
xequipef>>xestadio;
xequipef>>xjogador1;
xequipef>>xjogador2;
xequipef>>xjogador3;
xequipef>>xjogador4;
xequipef>>xjogador5;
xequipef>>xjogador6;
xequipef>>xjogador7;
xequipef>>xjogador8;
xequipef>>xjogador9;
xequipef>>xjogador10;
xequipef>>xjogador11;

}








void america(void)
{



estadio[0]=' ';
estadio[1]=' ';
estadio[2]='I';
estadio[3]='n';
estadio[4]='d';
estadio[5]='e';
estadio[6]='p';
estadio[7]='e';
estadio[8]='n';
estadio[9]='d';
estadio[10]='e';
estadio[11]='n';
estadio[12]='c';
estadio[13]='i';
estadio[14]='a';
estadio[15]=' ';
estadio[16]=' ';
estadio[17]=NULL;


equipe[0]='A';
equipe[1]='m';
equipe[2]='e';
equipe[3]='r';
equipe[4]='i';
equipe[5]='c';
equipe[6]='a';
equipe[7]='M';
equipe[8]='G';
equipe[9]=' ';
equipe[10]='9';
equipe[11]='7';
equipe[12]=NULL;

jogador1[0]='G';
jogador1[1]='i';
jogador1[2]='l';
jogador1[3]='b';
jogador1[4]='e';
jogador1[5]='r';
jogador1[6]='t';
jogador1[7]='o';
jogador1[8]=NULL;


jogador2[0]='E';
jogador2[1]='s';
jogador2[2]='t';
jogador2[3]='e';
jogador2[4]='v';
jogador2[5]='a';
jogador2[6]='m';
jogador2[7]=' ';
jogador2[8]=' ';
jogador2[9]=NULL;

jogador3[0]='D';
jogador3[1]='e';
jogador3[2]='n';
jogador3[3]='i';
jogador3[4]='s';
jogador3[5]=' ';
jogador3[6]=NULL;

jogador4[0]='J';
jogador4[1]='u';
jogador4[2]='n';
jogador4[3]='i';
jogador4[4]='o';
jogador4[5]='r';
jogador4[6]=' ';
jogador4[7]=' ';
jogador4[8]=NULL;

jogador5[0]='M';
jogador5[1]='.';
jogador5[2]='P';
jogador5[3]='a';
jogador5[4]='u';
jogador5[5]='l';
jogador5[6]='o';
jogador5[7]=' ';
jogador5[8]=NULL;

jogador6[0]='P';
jogador6[1]='i';
jogador6[2]='n';
jogador6[3]='t';
jogador6[4]='h';
jogador6[5]='a';
jogador6[6]='d';
jogador6[7]='o';
jogador6[8]=NULL;

jogador7[0]='B';
jogador7[1]='o';
jogador7[2]='i';
jogador7[3]='a';
jogador7[4]='d';
jogador7[5]='e';
jogador7[6]='i';
jogador7[7]='r';
jogador7[8]='o';
jogador7[9]=' ';
jogador7[10]=' ';
jogador7[11]=NULL;

jogador8[0]='T';
jogador8[1]='u';
jogador8[2]='p';
jogador8[3]='a';
jogador8[4]='n';
jogador8[5]='z';
jogador8[6]='i';
jogador8[7]='n';
jogador8[8]='h';
jogador8[9]='o';
jogador8[10]=NULL;

jogador9[0]='I';
jogador9[1]='r';
jogador9[2]='e';
jogador9[3]='n';
jogador9[4]='i';
jogador9[5]='o';
jogador9[6]=NULL;

jogador10[0]='R';
jogador10[1]='i';
jogador10[2]='n';
jogador10[3]='a';
jogador10[4]='l';
jogador10[5]='d';
jogador10[6]='o';
jogador10[7]=' ';
jogador10[8]=' ';
jogador10[9]=NULL;

jogador11[0]='C';
jogador11[1]='e';
jogador11[2]='l';
jogador11[3]='s';
jogador11[4]='o';
jogador11[5]=NULL;
}



void troca(int *a, int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}



void amistoso(void)
{
struct date d;
int escolha;
void inicio();
void arsenal();
void xarsenal();
void xjuventus();
void juventus();
void xmilan();
void milan();
void inter();
void xinter();
void manchester();
void xmanchester();
void real();
void xreal();
void xbeyern();
void beyern();
void barca();
void xbarca();

clrscr();


numerra:;
cout<<"ESCOLHA SEU TIME:\n\n"<<endl;
cout<<"0-  Real Madrid Club de Futbol"<<endl;
cout<<"1-  Manchester United"<<endl;
cout<<"2-  Futbol Club Barcelona"<<endl;
cout<<"3-  Arsenal football club"<<endl;
cout<<"4-  Beyern Munchen"<<endl;
cout<<"5-  Internacionale de milano"<<endl;
cout<<"6-  Associacion Calcio Milan"<<endl;
cout<<"8-  Valencia Futbol Club"<<endl;
cout<<"9-  Sociedad Sportiva Lazio"<<endl;
cout<<"10- Associacion Calcio Roma"<<endl;
cout<<"11- Futebol Clube do Porto"<<endl;
cout<<"12- Paris Saint German"<<endl;
cout<<"13- Deportivo La Coruna"<<endl;
cout<<"14- Liverpool Football Club"<<endl;
cout<<"15- Associacion calcio Parma"<<endl;
cout<<"16- PSV Einhoven"<<endl;





cin>>escolha;
switch (escolha){
case (0): clrscr(); real();break;
case (1): clrscr(); manchester();break;
case (2): clrscr(); barca();break;
case (3): clrscr(); arsenal();break;
case (4): clrscr(); beyern();break;
case (5): clrscr(); inter();break;
case (6): clrscr(); milan();break;
case (7): clrscr(); juventus();break;
case (8): clrscr(); valencia();break;
case (9): clrscr(); lazio();break;
case (10): clrscr(); roma();break;
case (11): clrscr(); porto();break;
case (12): clrscr(); psg();break;
case (13): clrscr(); lacoruna();break;
case (14): clrscr(); liverpool();break;
case (15): clrscr(); parma();break;
case (16): clrscr(); psv();break;


default : cout<<"numero invalido"<<endl; getch();clrscr();goto numerra;
}
clrscr();


numer:;
cout<<"ESCOLHA ADVERSAIO\n\n"<<endl;
cout<<"0-  Real Madrid Club de Futbol"<<endl;
cout<<"1-  Manchester United"<<endl;
cout<<"2-  Futbol Club Barcelona"<<endl;
cout<<"3-  Arsenal football club"<<endl;
cout<<"4-  Beyern Munchen"<<endl;
cout<<"5-  Internacionale de milano"<<endl;
cout<<"6-  Associacion Calcio Milan"<<endl;
cout<<"8-  Valencia Futbol Club"<<endl;
cout<<"9-  Sociedad Sportiva Lazio"<<endl;
cout<<"10- Associacion Calcio Roma"<<endl;
cout<<"11- Futebol Clube do Porto"<<endl;
cout<<"12- Paris Saint German"<<endl;
cout<<"13- Deportivo La Coruna"<<endl;
cout<<"14- Liverpool Football Club"<<endl;
cout<<"15- Associacion calcio Parma"<<endl;
cout<<"16- PSV Einhoven"<<endl;





cin>>escolha;
switch (escolha){
case (0): clrscr(); xreal();break;
case (1): clrscr(); xmanchester();break;
case (2): clrscr(); xbarca();break;
case (3): clrscr(); xarsenal();break;
case (4): clrscr(); xbeyern();break;
case (5): clrscr(); xinter();break;
case (6): clrscr(); xmilan();break;
case (7): clrscr(); xjuventus();break;
case (8): clrscr(); xvalencia();break;
case (9): clrscr(); xlazio();break;
case (10): clrscr(); xroma();break;
case (11): clrscr(); xporto();break;
case (12): clrscr(); xpsg();break;
case (13): clrscr(); xlacoruna();break;
case (14): clrscr(); xliverpool();break;
case (15): clrscr(); xparma();break;
case (16): clrscr(); xpsv();break;

default: cout<<"NUMERRO INVALIDO!!!"; getch(); clrscr(); goto numer;
}
cout<<"\n\njogo: \n\n";


cout<<equipe<<"   X    "<<adversario<<endl;


getdate(&d);
cout<<"Data: ";
printf("%d",
       d.da_day);
printf("/%d",
       d.da_mon);
printf("/%d",
       d.da_year);

cout<<"\nEstadio: "<<estadio<<endl;
randomize();
cout<<"Publico pagante: "<<(rand() %9+rand() %9)<<rand() %8<<'.'<<rand() %9<<"00      pessoas"<<endl;
cout<<"Arbitro: Pierre Luigi COLINA "<<endl;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nAperte qualquer tecla para comecar o jogo";
getch();
clrscr();

cout<<equipe<<"                                       "<<adversario<<endl;
cout<<endl;
cout<<jogador1<<"                                       "<<xjogador1<<endl;
cout<<jogador2<<"                                       "<<xjogador2<<endl;
cout<<jogador3<<"                                       "<<xjogador3<<endl;
cout<<jogador4<<"                                       "<<xjogador4<<endl;
cout<<jogador5<<"                                       "<<xjogador5<<endl;
cout<<jogador6<<"                                       "<<xjogador6<<endl;
cout<<jogador7<<"                                       "<<xjogador7<<endl;
cout<<jogador8<<"                                       "<<xjogador8<<endl;
cout<<jogador9<<"                                       "<<xjogador9<<endl;
cout<<jogador10<<"                                       "<<xjogador10<<endl;
cout<<jogador11<<"                                       "<<xjogador11<<endl;
getch();
clrscr();
//--------------------

gettime(&t);
inicial=t.ti_min;
minu=inicial+minutos;



inicio();
if (gols>xgols)
{
gols=0;
xgols=0;
getch();
clrscr();
cout<<"Parabens, vc venceu o "<<adversario<<endl;
}
else
{
cout<<"voce perdeu o jogo, treine mais antes de \nencarar a UEFA CHAMPIONS LEAGUE"<<endl;
}
getch();


}












void credits(void)
{
cout<<"                MAIN PRODUCER"<<endl;
cout<<"               Rafael Henrique "<<endl;
cout<<"                "<<endl;
cout<<"                  PROGRAMER"<<endl;
cout<<"               Rafael Henrique"<<endl;
cout<<"                "<<endl;
cout<<"                  FINAL ART"<<endl;
cout<<"               Rafael Henrique"<<endl;
cout<<"                                 "<<endl;
cout<<"                                 "<<endl;
cout<<"                 LANGUAGE USED"<<endl;
cout<<"                       C    "<<endl;
cout<<"                               "<<endl;
cout<<"                   COMPILER"<<endl;
cout<<"     Borland c++ builder -client/server suite  ver 3.0"<<endl;
cout<<"                                  "<<endl;
cout<<"                              "<<endl;
cout<<"                             "<<endl;
cout<<"                CONTATC US "<<endl;
cout<<"                               "<<endl;
cout<<"            (-=Rafa=-)  # 102471826  "<<endl;
cout<<"                031 99550933  "<<endl;
cout<<"              hsoares@gold.com.br  "<<endl;
getch();
clrscr();

cout<<"                   SPECIAL THANKS :"<<endl;
cout<<"                                                      "<<endl;
cout<<"                  "<<endl;
cout<<"                              "<<endl;
cout<<"                 Thales C. Araujo (testes)            "<<endl;
cout<<"                 Breno T.M Silveira (idem)"<<endl;
cout<<"                               "<<endl;
cout<<"                 Valdemar M. Macedo (CD Builder)"<<endl;
cout<<"                 "<<endl;
cout<<"                 Cris Jamsa (livro)"<<endl;
cout<<"                 Paulo Amaral  (fessor)"<<endl;
cout<<"                 and    YOU   "<<endl;
cout<<"                  "<<endl;
getch();
clrscr();
}




//---funcao abertura---
void logo(void)
{
clrscr();
cout<<"    # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #"<<endl;
cout<<"    #                                                                     #"<<endl;
cout<<"    #   S U P E R                                                         #"<<endl;
cout<<"    #                                                                     #"<<endl;
cout<<"    #                                                                     #"<<endl;
cout<<"    #       X X         X  X      X X X                                   #"<<endl;
cout<<"    #       X   X     X      X   X                                        #"<<endl;
cout<<"    #       X    X    X      X     X                                      #"<<endl;
cout<<"    #       X    X    X      X       X                                    #"<<endl;
cout<<"    #       X   X     X      X         X                                  #"<<endl;
cout<<"    #       X X         X  X      X X X                                   #"<<endl;
cout<<"    #                                                                     #"<<endl;
cout<<"    #                                                                     #"<<endl;
cout<<"    #             X X X      X  X      X  X     X  X   X X X    X  X      #"<<endl;
cout<<"    #            X         X      X  X        X       X        X    X     #"<<endl;
cout<<"    #              X       X      X  X        X       X        X   X      #"<<endl;
cout<<"    #                X     X      X  X        X       X X      X X        #"<<endl;
cout<<"    #                  X   X      X  X        X       X        X   X      #"<<endl;
cout<<"    #             X X X      X  X      X  X     X  X   X X X   X    X     #"<<endl;
cout<<"    #                                                                     #"<<endl;
cout<<"    #                                                                     #"<<endl;
cout<<"    #                                                                     #"<<endl;
cout<<"    #                                the UEFA CHAMPIONS LEAGUE            #"<<endl;
cout<<"    #                                                  2000/2001          #"<<endl;
cout<<"    # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #";
getch();
clrscr();
}

//-----fim da abertura----

void penales()
{
int jogotreino();
struct date d;
int escolha;
void inicio();
void arsenal();
void xarsenal();
void xjuventus();
void juventus();
void xmilan();
void milan();
void inter();
void xinter();
void manchester();
void xmanchester();
void real();
void xreal();
void xbeyern();
void beyern();
void barca();
void xbarca();

clrscr();
numerr:;
cout<<"ESCOLHA SEU TIME:\n\n"<<endl;
cout<<"0-  Real Madrid Club de Futbol"<<endl;
cout<<"1-  Manchester United"<<endl;
cout<<"2-  Futbol Club Barcelona"<<endl;
cout<<"3-  Arsenal football club"<<endl;
cout<<"4-  Beyern Munchen"<<endl;
cout<<"5-  Internacionale de milano"<<endl;
cout<<"6-  Associacion Calcio Milan"<<endl;
cout<<"8-  Valencia Futbol Club"<<endl;
cout<<"9-  Sociedad Sportiva Lazio"<<endl;
cout<<"10- Associacion Calcio Roma"<<endl;
cout<<"11- Futebol Clube do Porto"<<endl;
cout<<"12- Paris Saint German"<<endl;
cout<<"13- Deportivo La Coruna"<<endl;
cout<<"14- Liverpool Football Club"<<endl;
cout<<"15- Associacion calcio Parma"<<endl;
cout<<"16- PSV Einhoven"<<endl;





cin>>escolha;
switch (escolha){
case (0): clrscr(); real();break;
case (1): clrscr(); manchester();break;
case (2): clrscr(); barca();break;
case (3): clrscr(); arsenal();break;
case (4): clrscr(); beyern();break;
case (5): clrscr(); inter();break;
case (6): clrscr(); milan();break;
case (7): clrscr(); juventus();break;
case (8): clrscr(); valencia();break;
case (9): clrscr(); lazio();break;
case (10): clrscr(); roma();break;
case (11): clrscr(); porto();break;
case (12): clrscr(); psg();break;
case (13): clrscr(); lacoruna();break;
case (14): clrscr(); liverpool();break;
case (15): clrscr(); parma();break;
case (16): clrscr(); psv();break;

default : cout<<"numero invalido"<<endl; getch();clrscr();goto numerr;
}
clrscr();
clrscr();

cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nAperte qualquer tecla para comecar o treino";
getch();
clrscr();


//--------------------

gettime(&t);
inicial=t.ti_min;
minu=inicial+minutos;


if (jogotreino())
{
cout<<"\nVoce esta batendo bem.\n"<<endl;
gols=gols+1;
getch();
}
else
{
xgols=xgols+1;
cout<<"\nVoce esta batendo mal.\n"<<endl;
getch();
}
}















//----- funcao falta perigosa ----
void faltaperigosa(void)
{
void xtiro_de_meta(void);
void gol();
void area();
void meio();


clrscr();
cout<<"Falta perigosa para "<<equipe<<" cobrar.\nChance de gol eminente."<<endl;
cout<<"Correu pra bola . . . olho no lanceeee . . . . "<<endl;
cout<<"0 -Bater no canto oposto a barreira\n1-bater no canto da barreira";
getche();
getch();
switch (rand()%4){
case (0):cout<<"Pra fora!! ela passa a direita do gol";getch();
xtiro_de_meta();
break;
case (1):cout<<"Na trave!! O rebote eh seu";getch();
area();
break;
case (2):cout<<"Tah lah deeentrooo !!";getch();
gol();
break;
case (3):cout<<"Voce bateu mal !! o goleiro catou facil e bicudou pro meio";getch();
meio();
break;
}
}

//-----fim falta perigosa ------

//----funcao falta perigosa contra ---

void xfaltaperigosa(void)
{
void tiro_de_meta();
void xgol();
void defesa();
void meio();

clrscr();
cout<<"Falta perigosa para "<<adversario<<" cobrar.\nChance de gol eminente."<<endl;
cout<<"Correu pra bola . . . olho no lanceeee . . . . "<<endl;
getch();
switch (rand()%4){
case (0):cout<<"Pra fora!! ela passa a direita da sua meta";
getch();
tiro_de_meta();
break;
case (1):cout<<"Na trave!! "<<jogador3<<" alivia isolando pro meio";
getch();
meio();
break;
case (2):cout<<"Tah lah deeentrooo !!";getch();
getch();
xgol();
break;
case (3):cout<<"Bem colocado, "<<jogador1<<" pega firme e sai jogando com "<<jogador2;
getch();
defesa();
break;
}
}
//-----fim da falta contra -----

//------ tiro de meta favor ----
void tiro_de_meta(void)
{
void meio();
void xmeio();
void defesa();

cout<<jogador1<<" autorizado a bater o tiro de meta. . ."<<endl;
cout<<"0- Chutao pro meio\n1- tocar pro zagueiro"<<endl;
cin>>opcao;
if (opcao)
{defesa();
}
else{
      if (rand()%2)
   {xmeio();}
    else {meio();}
}
}
//--------fim tiro de meta------

//-------tiro de meta do adversario -----

void xtiro_de_meta(void)
{
void meio();
void xmeio();

clrscr();
cout<<"O goleiro adversario bate o tiro de meta\n";
cout<<"Ele deu um chutao pro meio do campo";
if (rand()%2)
{
meio();
}
else
{
xmeio();
}
}

//---fim do tiro de meta deles----



/*

//------lateral no meio--------
void lateral(void)
{
void xdefesa();
void xmeio();
//void xarea();
cout<<"Bata o lateral: \n";
cout<<"0- pra tras\n1- pro meio\n2-pra frente";
cin>>opcao;
switch (opcao){
case (0):defesa();break;
case (1):meio();break;
case (2):if (rand()%2){
cout<<"boa jogada!";
area();}
else{
cout<<"vacilo!! o adversario antecipou e ficou com a bola";
xdefesa();
}
}
}
//--- fim lateral -----
*/
//--- lateral adversario------
void xlateral(void)
{
void xdefesa();
void xmeio();
switch (rand()%3){
case (0):cout<<"\nlateral batido, bola pro meio"; xmeio();
break;
case (1):cout<<"\nlateral batido, bola pra tras"; xdefesa();
break;
case (2):cout<<"\nlateral batido, bola pra frente";xmeio();
break;
}
}

// fim lateral adversario -----

//------Falta a favor no meio--------
void faltameio(void)
{
void meio();
void defesa();
void area();
void xdefesa();

clrscr();
cout<<"Falta no meio de campo, "<<jogador6<<" vai bater."<<endl;
cout<<"0- Tocar pra tras\n1 - tocar pro "<<jogador7<<" no meio\n2- fazer o lancamento pra frente"<<endl;
cin>>opcao;
switch (opcao){
case (0):defesa();
break;
case (1):meio();break;
case (2): if (rand()%2){area();}
          else {cout<<xjogador3<<" interceptou o passe"<<endl; getch();xdefesa();}
break;
}
}
//-----fim da funcao falta a fqavor no meio -------

//---Falta contra no meio------
void xfaltameio(void)
{

void defesa();
void xmeio();
void xdefesa();
void meio();
clrscr();   cout<<xjogador6<<" vai bater a falta no meio"<<endl;
switch (rand()%3){
case (0):cout<<"ele bateu pra tras "<<endl;getch(); xdefesa();break;
case (1):cout<<"ele tocou curtinha no meio"<<endl;getch(); xmeio();break;
case (2):cout<<"ele lancou a bola pra frente"<<endl;
if (rand()%2){
cout<<"Ele tem uma boa mira, comacam a armar a jogada"; getch(); xmeio ();
break;}
else {
cout<<"Voce interceptou!! que beleza!"<<endl; getch(); defesa(); break;
}
}
}
//----fim falta meio adversario------

//-- GOL A FAVIR ------

void gol(void)
{
void xinicio();

clrscr();
cout<<endl;
cout<<"      x x x x x x         x x x x x x        x x"<<endl;
cout<<"     x x x x x x x       x x x x x x x       x x"<<endl;
cout<<"    x x                 x x         x x      x x"<<endl;
cout<<"    x x                 x x         x x      x x"<<endl;
cout<<"    x x                 x x         x x      x x"<<endl;
cout<<"    x x    x x x        x x         x x      x x"<<endl;
cout<<"    x x     x x x       x x         x x      x x"<<endl;
cout<<"    x x        x x      x x         x x      x x"<<endl;
cout<<"    x x        x x      x x         x x      x x"<<endl;
cout<<"     x x x x x x x       x x x x x x x        x x x x x x"<<endl;
cout<<"      x x x x x x         x x x x x x          x x x x x x"<<endl;
cout<<endl;

gols=gols+1;
getch();
cout<<equipe<<" tem agora "<<gols<<"gols"<<endl;
getch();
xinicio();
}
//----fim do gola favor---

//-----inico gol contra------
void xgol(void)
{
void inicio();
clrscr();
cout<<endl;
cout<<"      x x x x x x         x x x x x x        x x"<<endl;
cout<<"     x x x x x x x       x x x x x x x       x x"<<endl;
cout<<"    x x                 x x         x x      x x"<<endl;
cout<<"    x x                 x x         x x      x x"<<endl;
cout<<"    x x                 x x         x x      x x"<<endl;
cout<<"    x x    x x x        x x         x x      x x"<<endl;
cout<<"    x x     x x x       x x         x x      x x"<<endl;
cout<<"    x x        x x      x x         x x      x x"<<endl;
cout<<"    x x        x x      x x         x x      x x"<<endl;
cout<<"     x x x x x x x       x x x x x x x        x x x x x x"<<endl;
cout<<"      x x x x x x         x x x x x x          x x x x x x"<<endl;
cout<<endl;
xgols=xgols+1;
getch();
cout<<adversario<<" tem agora "<<xgols<<"gols"<<endl;
getch();
inicio();
}
//-----fim da funcao gomcomntra----


int jogotreino(void)
{
int penalti(void);
int xpenalti(void);
int gol1=0;
int gol2=0;
int cobrancas1=0;
int cobrancas2=0;
i=12;


do{
clrscr();
i=i-1;
switch (i){
case (2):cout<<jogador2;break;
case (3):cout<<jogador3;break;
case (4):cout<<jogador4;break;
case (5):cout<<jogador5;break;
case (6):cout<<jogador6;break;
case (7):cout<<jogador7;break;
case (8):cout<<jogador8;break;
case (9):cout<<jogador9;break;
case (10):cout<<jogador10;break;
case (11):cout<<jogador11;break;
}
cobrancas1=cobrancas1+1;
if (penalti())
gol1=gol1+1;
else
gol1=gol1;
getch();
clrscr();
cout<<jogador1;
cobrancas2=cobrancas2+1;
if (xpenalti())
gol2=gol2+1;
else
gol2=gol2;
getch();
clrscr();
}while (cobrancas1<pena||cobrancas2<pena||gol1==gol2);
clrscr();
cout<<"Apos "<<cobrancas2<<" cobrancas, voce marcou "<<gol1<<" gols e sofreu "<<gol2<<" gols";
getch();
if (gol1>gol2){ return (1);}
else{return (0);}
}






 // pelates 777777777777

int jogo(void)
{
int penalti(void);
int xpenalti(void);
int gol1=0;
int gol2=0;
int cobrancas1=0;
int cobrancas2=0;



do{
clrscr();
cout<<equipe;
cobrancas1=cobrancas1+1;
if (penalti())
gol1=gol1+1;
else
gol1=gol1;
getch();
clrscr();
cout<<adversario;
cobrancas2=cobrancas2+1;
if (xpenalti())
gol2=gol2+1;
else
gol2=gol2;
getch();
clrscr();
}while (cobrancas1<5||cobrancas2<5||gol1==gol2);
clrscr();
cout<<"Apos "<<cobrancas2<<" cobrancas, "<<equipe<<" fez "<<gol1<<" gols e "<<adversario<<" fez "<<gol2<<" gols";
getch();
if (gol1>gol2){ return (1);}
else{return (0);}
}
//----------------------------
int penalti(void)
{
int goleiro;
int batedor;

cout<<"\nAutorizada a cobranca\nOlho no lanceeee . . . "<<endl;
cout<<"\n\n0 - Canto direito\n1 - meio do gol\n2 - canto esquerdo ";
cin>>batedor;
   randomize();
   goleiro=rand()%3;
   if(goleiro==batedor){
	    if(goleiro%2==0&&batedor!=2){
	    cout<<"Pra fora!!";}
	    else{
	    cout<<"Mal Batido!! o goleiro pegou . . .";}
    return (0);}


   else {cout<<"GOL! boa cobranca!";
   return (1);
}


}


int xpenalti(void)
{
int goleiro;
int batedor;


cout<<"\nAutorizada a cobranca\nOlho no lanceeee . . . "<<endl;
cout<<"\n\n0 - pular no Canto direito\n1 - ficar no meio do gol\n2 - pular no canto esquerdo";
cin>>batedor;
   randomize();
   goleiro=rand()%3;
   if(goleiro==batedor){ cout<<"BOUA!! Voce catou !!!";
    return (0);}
   else {cout<<"GOL! Goleiro Prum lado, bola pro outro . . . !";
   return (1);
	}
}

//---------------------fim penaltes










//--inicio do inicio do jogo - kick off----



//------fim da funcao inicio kick off


void fim()
{
cout<<"fim";
getch();
}


//-------inicio da xinicio-------

void xinicio(void)
{
void xmeio();
void inicio();

gettime(&t);
tempo=t.ti_min;


if (tempo<minu)
{
    cout<<xjogador10<<"sai a bola em favor do "<<adversario<<endl;
    cout<<"ele toca para "<<xjogador9<<endl;
    getch();
    xmeio();
}
else
inicio();
}


//------fim da xinicio------

//-------inicio da inicio----


void inicio(void)
{
void xdefesa();
void defesa();
void meio();
void xtiro_de_meta();
void gol();
void area();
void xlateral();
int opcao;
int jogo();


gettime(&t);
tempo=t.ti_min;








if (tempo<minu&&gols<3&&xgols<3)
{
    cout<<"inicio: "<<tempo<<"   fim: "<<minu<<endl; 
    cout<<"KICK OFF. BOLA ROLANDO......\n";
    cout<<jogador10<<" saiu a bola com "<<jogador11<<endl;
    cout<<"0 - Tocar pro "<<jogador7<<" mais atras."<<endl;
    cout<<"1 - Tocar pro "<<jogador2<<" que sobe pela lateral."<<endl;
    cin>>opcao;

    if (opcao)
    {
        randomize();
        opcao=rand() %nivel;

        if (opcao)
        {
            cout<<"Boa Jogada! "<<jogador2<<" domina com categoria"<<endl;
            cout<<xjogador5<<" aparece na marcacao"<<endl;
            cout<<"0 - fazer o passe para "<<jogador6<<" que se apresenta"<<endl;
            cout<<"1 - tentar o drible"<<endl;
            cin>>opcao;

            if (opcao)
            {
                randomize();
                opcao=rand() %2;

                if (opcao)
                {
                    cout<<"OLEh !! Que grande jogada! Voce avanca com a bola"<<endl;
                    cout<<"Ainda nao tem ninguem dentro da area para receber o cruzamento"<<endl;
                    cout<<"0 - Tocar a bola para "<<jogador11<<" que se apresenta na entrada da area"<<endl;
                    cout<<"1 - Arriscar o chute pro gol"<<endl;
                    cin>>opcao;

                    if (opcao)
                    {
                        randomize();
                        opcao=rand() %4;

                        if (opcao)
                        {
                            cout<<"Chutou mal, veh se melhora essa pontaria, "<<jogador2<<endl;
                            getch();
                            xtiro_de_meta();
                        }
                        else
                        {
                            cout<<"que beleza!! incobriu o goleiro!"<<endl;
                            getch();
                            gol();
                        }

                    }
                    else
                    {
                        randomize();
                        opcao=rand() %nivel;

                        if (opcao)
                        {
                            cout<<"Bom passe!! bela jogada criada"<<endl;
                            getch();
                            area();
                        }
                        else
                        {
                            cout<<jogador4<<" interceptou a bola!!"<<endl;
                            getch();
                            xdefesa();
                        }

                    }
                }
              else
                {
                    cout<<"UUUHHH  a galera vaia sua tentativa frustrada de drible"<<endl;
                    cout<<"Perdeu-se uma otima oportunidade";
                    getch();
                    xdefesa();
                  }

            }
            else
            {
                cout<<jogador6<<" domina a bola no meio de campo"<<endl;
                getch();
                meio();
            }
        }
        else
        {
            cout<<"Bola muito forte! lateral que favorece "<<adversario<<endl;
            getch();
            xlateral();
        }

    }
    else
    {
        cout<<"Bola dominada na defesa por "<<jogador7<<endl;
        getch();
        defesa();
    }
}
else
{
fimn:;
cout<<"Nao ha tempo pra mais nada!\no juiz determina o fim da partida";
getch();
cout<<"\n\n"<<endl;
cout<<"# # # # # # # # # # # # #"<<endl;
cout<<"#  "<<equipe<<"     "<<gols<<"    #"<<endl;
cout<<"#  "<<adversario<<"     "<<xgols<<"    #"<<endl;
cout<<"# # # # # # # # # # # # #"<<endl;
getch();


if (playoff)
{

if (gols==xgols)
{
cout<<"\nO jogo ficou empatado, vamos para a disputa de penatis"<<endl;
getch();
clrscr();

    if (jogo())
    {
        cout<<"\nvoce ganhou a disputa de penais\n"<<endl;
        gols=gols+1;
        getch();
    }
    else
    {
        xgols=xgols+1;
        cout<<"\nvc perdeu a disputa de penais\n"<<endl;
    getch();
    }

}
}


}
}

//fim da inicio---------------





int sair(void)
{
int sai;
clrscr();
cout<<"sair do jogo ??";
cout<<"\n\n0 - sim     1 - nao ";
cin>>sai;
if (sai)
{
return 1;
}
else
{
return 0;
}
}
//--------------

void area(void)
{
void xdefesa();
void defesa();
void meio();
void xtiro_de_meta();
void gol();
void area();
void xlateral();
int opcao;
int aux;

gettime(&t);
tempo=t.ti_min;


if (tempo<minu)
{


randomize();
opcao=rand() %2;

if (opcao)
{
    cout<<jogador8<<" recebe a bola na intermediaria."<<endl;
    cout<<"A marcacao eh feita por "<<xjogador4<<endl;
    cout<<"1- fazer a abertura na lateral com "<<jogador5<<endl;
    cout<<"0- tentar o drible "<<endl;
    cin>>opcao;

    if (opcao)
    {
        randomize();
        opcao=rand() %4;

        if (opcao)
        {

            cout<<"Boa bola!!"<<jogador5<<"tem agora uma boa portunidade de jogada"<<endl;
            cout<<jogador10<<" e "<<jogador11<<" estao na area esperando o cruzamento"<<endl;
            cout<<jogador7<<" esta na entrada da area em condicoes de receber o passe e chutar pro gol"<<endl;
            cout<<"1 - fazer o cruzamento"<<endl;
            cout<<"0 - Rolar a bola pro "<<jogador7<<endl;
            cin>>opcao;

            if (opcao)
            {    cruzamento:;
                 randomize();
                 opcao=rand() %nivel;

                 if (opcao)
                 {
                     cout<<"Belissimo cruzamento em direcao a "<<jogador10<<endl;
                     cout<<"0 - cabecear pro chao"<<endl;
                     cout<<"1 - cabecear no alto"<<endl;
                     cin>>opcao;

                     randomize();
                     aux=rand() %2;

                     if (aux==opcao)
                     {
                        cout<<"A bola passa raspando a trave!!!"<<endl;
                        getch();
                        xtiro_de_meta();
                     }
                     else
                     {
                        cout<<"Cabecada mortal"<<endl;
                        getch();
                        gol();
                     }
                 }
                 else
                 {
                    cout<<xjogador3<<" alivia com uma cabecada pra fora da area"<<endl;
                    cout<<jogador8<<" domina a bola na meia lua"<<endl;
                    cout<<xjogador2<<" chega na marcacao"<<endl;
                    cout<<"0 - tentar o drible pra cima do "<<jogador2<<endl;
                    cout<<"1 - xuxar o sabugo pro gol "<<endl;
                    cin>>opcao;

                      if (opcao)
                       {

                           randomize();
                           opcao=rand() %nivel;

                           if (opcao)
                           {
                                cout<<"Tah lah . . onde a coruja dorme"<<endl;
                                getch();
                                gol();

                           }
                           else
                           {
                                 cout<<"A bola bate em "<<xjogador2<<" e "<<xjogador5<<" fica com a sobra"<<endl;
                                 getch();
                                 xdefesa();
                       }
                       }
                       else
                       {
                            randomize();
                            opcao=rand() %4;

                            if (opcao)
                            {
                                cout<<"OLEH !! que beleza!!"<<endl;
                                cout<<"Cara a cara com o goleiro"<<endl;
                                cout<<"0 - tocar no canto esquerdo"<<endl;
                                cout<<"1 - tocar no canto direito"<<endl;
                                cout<<"2 - tocar por debaixo das perna do goleiro"<<endl;
                                cin>>opcao;

                                randomize();
                                aux=rand() %2;

                                if (aux==opcao)
                                {
                                    cout<<"CAXA!!!!";
                                    getch();
                                    gol();
                                }
                                else
                                {
                                    cout<<"Pra fora!!1 a torcida do "<<equipe<<" quer te matar por seu erro"<<endl;
                                    getch();
                                    xtiro_de_meta();
                                }

                            }
                            else
                            {
                                cout<<"Voce eh uma anta e nao sabe driblar"<<endl;
                                getch();
                                xdefesa();
                            }



                       }







                 }

            }
            else
            {
                cout<<"bola em direcao a"<<jogador7<<endl;
                cout<<"0 - pegar de primeira"<<endl;
                cout<<"1 - dominar e procurar um companheiro pra tocar";
                cin>>opcao;

                if (opcao)
                {
                    randomize();
                    opcao=rand() %nivel;

                    if (opcao)
                    {
                        cout<<"Bola dominada, mas nao tem ninguem pra tocar."<<endl;
                        cout<<"1 - Tentar o chute pro gol"<<endl;
                        cout<<"0- tocar pro "<<jogador7<<" atras no meio do campo"<<endl;
                        cin>>opcao;

                        if (opcao)
                        {
                          randomize();
                          opcao=rand() %4;

                          if (opcao)
                          {
                            cout<<"TAH LAH DENTROOO!"<<endl;
                            getch();
                            gol();
                          }
                          else
                          {
                            cout<<"Pra fora!!1 passou longe!!"<<endl;
                            getch();
                            xtiro_de_meta();
                          }


                        }
                        else
                        {
                           cout<<"volta toda a jogada"<<endl;
                           meio();
                        }

                    }
                    else
                    {
                        cout<<"Bola tocada muito atras, vc nao conseguiu faze o dominio."<<endl;
                        cout<<" a bola esta com eles"<<endl;
                        getch();
                        xdefesa();
                    }
                }
                else
                {
                    randomize();
                    opcao=rand() %4;

                    if (opcao)
                    {
                      cout<<"Belo chute!! no gogo da ema!!"<<endl;
                      getch();
                      gol();
                    }
                    else
                    {
                        cout<<"O que chutinho mais bostinha!!1/"<<endl;
                        cout<<xjogador1<<" apenas observa a bola sair em tiro de meta"<<endl;
                        getch();
                        xtiro_de_meta();
                    }

                }




            }




        }
        else       //91422056
        {
            cout<<"Que passe escumungado!!"<<xjogador5<<"interceptou"<<endl;
           getch();
           xdefesa();
        }


    }
    else
    {
        randomize();
        opcao=rand() %4;

        if (opcao)
        {
            cout<<"OLEH !!! "<<xjogador4<<" comeu bosta"<<endl;
            cout<<"Voce entrou na area"<<endl;
            cout<<"0 - tabelar com "<<jogador10<<endl;
            cout<<"1 - driblar outro zagueiro"<<endl;
            cin>>opcao;

               if (opcao)
                {
                    randomize();
                    opcao=rand() %nivel;

                    if (opcao)
                     {

                        cout<<"Oleh !!1 e vai "<<jogador8<<" vai fazendo fila"<<endl;
                        cout<<"cara a cara com "<<xjogador1<<endl;
                        caraacara:;
                        cout<<"0 - tocar na saida do goleiro"<<endl;
                        cout<<"1 - tentar driblar o goleiro"<<endl;
                        cin>>opcao;

                        if (opcao)
                        {
                            randomize();
                            aux=rand() %nivel;

                            if (aux)
                            {
                                cout<<xjogador1<<" derruba "<<jogador8<<"\nPENALTI !!"<<endl;
                                getch();

                                clrscr();
                                cout<<jogador10<<" na bola . . .\nolho no lance"<<endl;
                                cout<<"\n0 - bater no canto direito\n1 - bater no canto esquerdo"<<endl;
                                cin>>opcao;
                                randomize();
                                opcao=rand() %nivel;
                                if (opcao)
                                {
                                    cout<<"tah lah dentrooo"<<endl;
                                    getch();
                                    gol();
                                }
                                else
                                {
                                    cout<<"Pra fooorraaa"<<endl;
                                    getch();
                                    xtiro_de_meta();

                                }



                            }
                            else
                            {
                                cout<<"o goleiro pega a bola, vc nao eh tao competetente assim"<<endl;
                                cout<<"a defesa deles reinicia o jogo"<<endl;
                                getch();
                                xdefesa();
                            }


                        }
                        else
                        {
                            randomize();
                            aux=rand() %nivel;

                            if (aux)
                            {
                                cout<<"Tah lah dentro . . . "<<endl;
                                getch();
                                gol();
                            }
                            else
                            {
                                cout<<"Pra fora!!! peredu uma grande oportunidade!"<<endl;
                                getch();
                                xtiro_de_meta();
                            }
                        }
                     }
                     else
                     {
                        cout<<"mas como eh abusado esse tal de "<<jogador8<<endl;
                        cout<<"driblar o time todo num dah, neh amizade?!"<<endl;
                        cout<<"perdeu a bola"<<endl;
                        xdefesa();
                     }


                }
                else
                {
                    randomize();
                    opcao=rand() %nivel;

                    if (opcao)
                    {
                        cout<<"boa tabela!! voca eta agora cara a cara com "<<xjogador1<<endl;
                        goto caraacara;
                    }
                    else
                    {
                        cout<<"Voces ainda nao estao devidamente entrosados"<<endl;
                        cout<<"a tabela nao funcionou!!"<<endl;
                        getch();
                        xdefesa();
                    }


                  }

        }
        else
        {
            cout<<"A bola bateu na sua canela e foi pra longe!!"<<endl;
            cout<<"treine mais seus dribles"<<endl;
            xdefesa();
        }

    }


}
else
{
    cout<<"Bola dominada na intermediaria por "<<jogador9<<endl;
    cout<<"dentro da area, "<<jogador11<<" esta desmarcado"<<endl;
    cout<<"0 - fazer a enfiada de bola para "<<jogador11<<endl;
    cout<<"1 - tocar para "<<jogador8<<" ao lado"<<endl;
    cin>>opcao;

    if (opcao)
    {
        randomize();
        opcao=rand() %2;

        if (opcao)
        {
            cout<<jogador8<<" nao dominou a bola"<<endl;
            cout<<xjogador4<<" sai jogando em favor do "<<adversario<<endl;
            getch();
            xdefesa();
        }
        else
        {
            cout<<"Dominio na entrada da area."<<endl;
            cout<<"0 - chutar pro gol"<<endl;
            cout<<"1 - fazer a abertura para "<<jogador2<<"que desce para apoiar o ataque"<<endl;
            cin>>opcao;

            if (opcao)
            {
                randomize();
                opcao=rand() %nivel;

                if (opcao)
                {
                    cout<<"belo passe, "<<jogador2<<"tem boas condicoes\na marcacao chega. "<<endl;
                    cout<<"0 - Chuverar dentro da area"<<endl;
                    cout<<"1 - tentar o drible em cima do "<<xjogador5<<endl;
                    cin>>opcao;

                    if (opcao)
                    {
                        randomize();
                        opcao=rand() %nivel;

                        if (opcao)
                        {
                            cout<<"OLEH !! driblou com categoria!"<<endl;
                            cout<<"Voce esta na linha de fundo e dentro da gande area"<<endl;
                            cout<<"0 - Chutar pro gol, mesmo sem angulo"<<endl;
                            cout<<"1 - tocar para "<<jogador11<<" dentro da pequena area"<<endl;
                            cin>>opcao;

                            if (opcao)
                            {
                                randomize();
                                opcao=rand() %nivel;

                                if (opcao==0)
                                {
                                    cout<<"Bola interceptada por "<<xjogador5<<endl;
                                    getch();
                                    xdefesa();
                                }
                                else
                                {
                                    cout<<"Que beleza!! agora eh só empurrar pro gol"<<endl;
                                    cout<<"0 - Empurrar pro gol"<<endl;
                                    cout<<"1 - tocar pro gol de letra"<<endl;
                                    cin>>opcao;

                                    if (opcao)
                                    {
                                        randomize();
                                        opcao=rand() %2;

                                        if (opcao)
                                        {
                                            cout<<"Embolou com a bola, mascarado !!\n a defesa alivia"<<endl;
                                            getch();
                                            xdefesa();
                                        }
                                        else
                                        {
                                            cout<<"que golaco !!! gol de placa . . ."<<endl;
                                            getch();
                                            gol();
                                        }
                                    }
                                    else
                                    {
                                        cout<<"CAXA!!"<<endl;
                                        getch();
                                        gol();
                                    }

                                }

                            }
                            else
                            {
                                randomize();
                                opcao=rand() %4;

                                if (opcao)
                                {
                                    cout<<"Chute ruim . .  bola pra fora"<<endl;
                                    getch();
                                    xtiro_de_meta();
                                }
                                else
                                {
                                    cout<<"Mesmo sem angulo, a bola entrou !!!"<<endl;
                                    getch();
                                    gol();
                                }
                            }


                        }
                        else
                        {
                            cout<<"Que coisa feia!! treine mais seus dribles"<<endl;
                            getch();
                            xdefesa();


                        }

                    }
                    else
                    {
                        goto cruzamento;
                    }
                }
                else
                {
                    cout<<"Voce demorou a tocar.\n"<<jogador2<<" ficou impedido"<<endl;
                    cout<<xjogador6<<"cobrou a infracao e o jogo recomeca"<<endl;
                    getch();
                    xdefesa();

                }
            }
            else
            {
                randomize();
                opcao=rand() %4;

                if (opcao)
                {
                    cout<<"Bola pra fora, longe do gol"<<endl;
                    getch();
                    xtiro_de_meta();
                }
                else
                {
                    cout<<"CAXAAA . . . . "<<endl;
                    getch();
                    gol();
                }

            }
        }





    }
    else
    {
        randomize();
        opcao=rand() %nivel;

        if (opcao==0)
        {
            cout<<"Bola interceptada por "<<xjogador3<<endl;
            getch();
            xdefesa();
        }
        else
        {
            cout<<"Belo passe! "<<jogador11<<" saiu na cara do gol"<<endl;
            goto caraacara;

        }

    }


}


}
else
{
clrscr();
inicio();
}
}

//--------

void xdefesa(void)
{
void xmeio();
void area();
void xtiro_de_meta();
void xdefesa();
void defesa();
void meio();
void xtiro_de_meta();
void gol();
void area();
void xlateral();
int opcao=0;

gettime(&t);
tempo=t.ti_min;




if (tempo<minu)
{


randomize();
opcao=rand() %2;

switch (opcao){
case (0):

    cout<<xjogador3<<" domina a bola em favor do "<<adversario<<endl;
    cout<<jogador9<<" ali perto"<<endl;
    cout<<"dar um carrinho pra tentar tomar a bola ?"<<endl;
    cout<<"1 - sim    0 - nao"<<endl;
    cin>>opcao;

    if (opcao)
    {
        randomize();
        opcao=rand() %nivel;

        if (opcao)
        {
            cout<<jogador9<<" rouba a bola!! inicia-se uma boa jogada"<<endl;
            getch();
            area();
        }
        else
        {
            cout<<"FALTA !!! \n"<<xjogador2<<" fez um longo passe ate o meio"<<endl;
            getch();
            xmeio();
        }
     }
     else
     {
        cout<<xjogador3<<" fez o passe para "<<xjogador2<<endl;
        cout<<"aperte qualquer tecla para tentar roubar a bola com "<<jogador10<<endl;
        getch();

        randomize();
        opcao=rand() %nivel;

        if (opcao)
        {
            cout<<"Sorte !! vc roubou a bola!!!"<<endl;
            cout<<"0 - tocar no meio"<<endl;
            cout<<"1 - chutar pro gol"<<endl;
            cin>>opcao;

            if (opcao)
            {
                randomize();
                opcao=rand() %4;

                if (opcao)
                {
                    cout<<"passou longe!! tiro de meta!!"<<endl;
                    getch();
                    xtiro_de_meta();
                }
                else
                {
                    cout<<" é gooooooooollllll "<<endl;
                    getch();
                    gol();
                }
            }
            else
            {
                randomize();
                opcao=rand() %nivel;

                if (opcao)
                {
                    cout<<"bom passe!"<<endl;
                    getch();
                    meio();
                }
                else
                {
                    cout<<"passe ruim !!"<<endl;
                    getch();
                    xdefesa();
                }
            }
        }
        else
        {
            cout<<"ele te driblou! :-("<<endl;
            cout<<"fez um lancamento longo .  . ."<<endl;

            randomize();
            opcao=rand() %2;

            if (opcao)
            {
                cout<<"Eles agora tem a posse de bola no meio"<<endl;
                getch();
                xmeio();
            }
            else
            {
                cout<<jogador7<<" interceptou o passe ali no meio"<<endl;
                getch();
                meio();
            }
        }
     }
break;
case (1):

    cout<<"a bola esta dominada na defesa por "<<xjogador4<<endl;
    cout<<"dar combate com "<<jogador10<<endl;
    cout<<"0 - sim   1 - nao "<<endl;
    cin>>opcao;

    if (opcao)
    {
        cout<<xjogador4<<" toca para "<<xjogador5<<endl;

        randomize();
        opcao=rand() %2;

        if (opcao)
        {
            cout<<xjogador5<<" avanca com a bola pela lateral"<<endl;
            getch();

            randomize();
            opcao=rand() %2;

            if (opcao)
            {
                cout<<"e faz o passe no meio"<<endl;
                getch();
                xmeio();
            }
            else
            {
                cout<<"e lanca a bola para a intermediaria"<<endl;
                getch();

                randomize();
                opcao=rand() %2;

                if (opcao)
                {
                    cout<<" mas vc interceptou"<<endl;
                    getch();
                    defesa();
                }
                else
                {
                    cout<<"agora eles tem uma boa jogada a favor"<<endl;
                    getch();
                    xmeio();
                }


            }

        }
        else
        {
            cout<<"O passe foi fraco !!"<<endl;
            cout<<jogador11<<" recupera a posse de bola para "<<equipe<<endl;
            getch();
            area();
        }



    }
    else
    {
        randomize();
        opcao=rand() %nivel;

        if (opcao==0)
        {
            cout<<"Voce nao alcancou o zagueiro, que saiu jogando."<<endl;
            getch();
            cout<<"o passe foi feito pro meio"<<endl;
            getch();
            xmeio();

        }
        else
        {
            cout<<"Boa!! Bola roubada!! que oportunidade de ataque agora!"<<endl;
            getch();
            area();
        }
    }
break;
default: xdefesa();
break;
}
}

else
{
clrscr();
inicio();
}

}

//========================



void meio(void)
{
int opcao=0;
void xdefesa();
void defesa();
void meio();
void xtiro_de_meta();
void gol();
void area();
void xlateral();
void xmeio();
void meio();

gettime(&t);
tempo=t.ti_min;


if (tempo<minu)
{


    cout<<jogador6<<" com a bola"<<endl;
    cout<<"0 - tocar ao lado com "<<jogador7<<endl;
    cout<<"1 - virar o jogo para "<<jogador2<<endl;
    cin>>opcao;

    if (opcao)
    {
        randomize();
        opcao=rand() %nivel;

        if (opcao)
        {
            cout<<"Bela virada de jogo !"<<endl;
            cout<<jogador2<<" cruza o meio de campo livre"<<endl;
            cout<<"0 - avancar pela lateral"<<endl;
            cout<<"1 - conduzir a bola pro meio"<<endl;
            cin>>opcao;

            if (opcao)
            {   passe:;
                cout<<"A marcacao eh feita agora por "<<xjogador6<<endl;
                cout<<"0 - fazer o passe para "<<jogador8<<endl;
                cout<<"1 - tentar o drible"<<endl;
                cin>>opcao;

                if (opcao)
                {
                            randomize();
                            opcao=rand() %nivel;

                            if (opcao)
                            {
                                cout<<xjogador6<<" nao ta pra brincadeira!\nfalta!!!!"<<endl;
                                getch();
                                faltaperigosa();
                            }
                            else
                            {
                                cout<<"Nao deu certo seu drible!!"<<endl;
                                cout<<"bola deles"<<endl;
                                getch();
                                xdefesa();
                            }

                }
                else
                {
                    randomize();
                    opcao=rand() %2;

                    if (opcao)
                    {
                        cout<<"passe inteceptado!!"<<endl;
                        getch();
                        xdefesa();
                    }
                    else
                    {
                        cout<<"Bom passe!!"<<endl;
                        cout<<"bola dominada na intermediaria"<<endl;
                        cout<<"0 - tocar pro "<<jogador5<<" que desce pela lateral"<<endl;
                        cout<<"1 - fazer o passe no meio com "<<jogador10<<endl;
                        cin>>opcao;

                        if (opcao)
                        {
                           randomize();
                           opcao=rand() %4;

                           if (opcao)
                           {
                                cout<<"Bom passe, bola dominada na entrada da area."<<endl;
                                cout<<"0 - driblar o zagueiro"<<endl;
                                cout<<"1 - Chutar pro gol"<<endl;
                                cin>>opcao;

                                if (opcao)
                                {
                                    cout<<"o goleiro aceitou"<<endl;
                                    getch();
                                    gol();
                                }
                                else
                                {
                                    cout<<"vc tentou driblar e recebeu a falta"<<endl;
                                    getch();
                                    faltaperigosa();
                                }
                           }
                           else
                           {
                            cout<<"passe interceptado pela zaga!"<<endl;
                            getch();
                            xdefesa();
                           }
                        }
                        else
                        {
                            randomize();
                            opcao=rand() %nivel;

                            if (opcao)
                            {
                                cout<<"boa bola !! que bela jogada!"<<endl;
                                cout<<"0 - fazer o cruzamento para a area"<<endl;
                                cout<<"1 - chutar para o gol"<<endl;
                                cin>>opcao;
                                if (opcao)
                                {
                                    randomize();
                                    opcao=rand() %4;

                                    if (opcao)
                                    {
                                        cout<<"Bola pra longe!! "<<endl;
                                        getch();
                                        xtiro_de_meta();
                                    }
                                    else
                                    {
                                        cout<<"GOOOOLLLL!! "<<endl;
                                        getch();
                                       gol();
                                    }


                                }
                                else
                                {
                                     randomize();
                                     opcao=rand() %nivel;

                                     if (opcao)
                                     {
                                        cout<<"Bom cruzamento na direcao de "<<jogador10<<endl;
                                        cout<<"0 - cabecear"<<endl;
                                        cout<<"1 - bicicletar"<<endl;
                                        cin>>opcao;

                                          randomize();
                                          aux=rand() %nivel;

                                          if (aux)
                                          {
                                            cout<<"golaco "<<endl;
                                            getch();
                                            gol();
                                          }
                                          else
                                          {
                                             cout<<"bola pra fora . . ."<<endl;
                                             getch();
                                             xtiro_de_meta();
                                          }

                                     }
                                     else
                                     {
                                        cout<<"cruzamento ruim"<<endl;
                                        cout<<"bola deles"<<endl;
                                        getch();
                                        xdefesa();
                                     }
                                }
                            }
                            else
                            {
                                cout<<"O passe foi ruim . . . "<<endl;
                                cout<<"a bola esta dominada por eles"<<endl;
                                getch();
                                xdefesa();

                            }




                        }

                    }

                }

            }
            else
            {
                cout<<xjogador3<<" chega pra fazer a marcacao"<<endl;
                cout<<"0 - tocar para "<<jogador10<<" que se apresenta"<<endl;
                cout<<"1 - tentar o drible"<<endl;
                cin>>opcao;

                if (opcao)
                {
                    randomize();
                    opcao=rand() %nivel;

                    if (opcao)
                    {
                        cout<<"belo drible, mas foi puxado! FALTA!"<<endl;
                        getch();
                        faltaperigosa();
                    }
                    else
                    {
                        cout<<"perdeu a bola, perna de pau"<<endl;
                        getch();
                        xdefesa();
                    }

                }
                else
                {
                    cout<<"bom passe\nele arma a jogada"<<endl;
                    getch();
                    area();
                }

            }
        }
        else
        {
            cout<<"Bola muito forte!! lateral que favorece "<<"adversario"<<endl;
            getch();
            xlateral();

        }



    }
    else
    {
        cout<<"a marcacao chega!"<<endl;
        cout<<"0 - driblar"<<endl;
        cout<<"1 - tocar pro lado novamente"<<endl;
        cin>>opcao;

        if (opcao)
        {
            randomize();
            opcao=rand() %2;

            if (opcao)
            {
                cout<<"Passe mal feito !!"<<endl;
                getch();
                xmeio();
            }
            else
            {
                goto passe;
            }

        }
        else
        {
            randomize();
            opcao=rand() %nivel;

            if (opcao)
            {
                cout<<"Bom drible. . . avanca com a bola"<<endl;
                cout<<jogador9<<" se movimenta pelos flancos "<<endl;
                cout<<xjogador6<<" aparece para lhe marcar! "<<endl;
                cout<<"0 - tocar para "<<jogador9<<endl;
                cout<<"1 - tentar o drible em cima de "<<xjogador6<<endl;
                cin>>opcao;

                if (opcao)
                {
                    randomize();
                    opcao=rand() %4;

                    if (opcao)
                    {
                        cout<<"Voce recebeu a falta ao tentar o drible"<<endl;
                        getch();
                        faltaperigosa();
                    }
                    else
                    {
                        cout<<"vc eh muito fominha! perdeu a bola"<<endl;
                        getch();
                        xmeio();
                    }
                }
                else
                {
                    randomize();
                    opcao=rand() %nivel;

                    if (opcao)
                    {
                        cout<<"Boa abertura de bola com "<<"jogador9"<<endl;
                        cout<<"ele arma a jogada em favor do "<<"equipe"<<endl;
                        cout<<"0 - fazer o cruzamento na area"<<endl;
                        cout<<"1 - correr com a bola pro meio "<<endl;
                        cin>>opcao;

                        if (opcao)
                        {
                            randomize();
                            opcao=rand() %nivel;

                            if (opcao)
                            {
                                cout<<"clareou, cabe o chute !!"<<endl;
                                cout<<"1 - chutar pro gol"<<endl;
                                cout<<"0 - tentar driblar o marcador e entrar na area"<<endl;
                                cin>>opcao;

                                if (opcao)
                                {
                                    randomize();
                                    opcao=rand() %2;

                                    if (opcao)
                                    {
                                        cout<<"pra fora!!"<<endl;
                                        getch();
                                        xtiro_de_meta();

                                    }
                                    else
                                    {
                                        cout<<"gol"<<endl;
                                        getch();
                                        gol();
                                    }
                                }
                                else
                                {
                                    randomize();
                                    opcao=rand() %2;

                                    if (opcao)
                                    {
                                        cout<<"perdeu a bola, nas sabe driblar, cuzao"<<endl;
                                        getch();
                                        xdefesa();
                                    }
                                    else
                                    {
                                        cout<<"Falta marcada!! vc tomou uma botinada!"<<endl;
                                        getch();
                                        faltaperigosa();
                                    }



                                }
                            }
                            else
                            {
                                cout<<"voce tropecou com a bola!! que feio"<<endl;
                                getch();
                                xmeio();

                            }


                            }
                            else
                            {
                                randomize();
                                opcao=rand() %nivel;

                                if (opcao)
                                {
                                    cout<<"bola em direcao de "<<jogador11<<endl;
                                    cout<<"0 - cabecear"<<endl;
                                    cout<<"1 - Bicicletar"<<endl;
                                    cin>>opcao;

                                    randomize();
                                    aux=rand() %nivel;

                                    if (aux)
                                    {
                                        cout<<"GOL"<<endl;
                                        getch();
                                        gol();
                                    }
                                    else
                                    {
                                        cout<<"pra fora!!"<<endl;
                                        getch();
                                        xtiro_de_meta();
                                    }

                                }
                                else
                                {
                                    cout<<"A zaga alivia!!  a sobra eh sua!"<<endl;
                                    getch();
                                    area();
                                }
                            }

                    }
                    else
                    {
                        cout<<"passe ruim . .  bola deles"<<endl;
                        getch();
                        xmeio();
                    }


                }

            }
            else
            {
                cout<<"não driblou bem, eles pegam a bola"<<endl;
                getch();
                xmeio();
            }
        }
    }

    }
    else
    {
    clrscr();
    inicio();
    }


    }






//-------------------



void xmeio(void)
{
void xfaltameio();
void meio();
void defesa();
void xdefesa();
void gol();
void xgol();
void tiro_de_meta();
void area();

gettime(&t);
tempo=t.ti_min;


if (tempo<minu&&gols<3)
{


randomize();
opcao=rand() %2;

if (opcao)

{
    cout<<adversario<<" tem a bola dominada no meio"<<endl;
    cout<<"0 - chegar junto com "<<jogador7<<endl;
    cout<<"1 - mostrar o cartao de visitas de "<<jogador5<<endl;
    cin>>opcao;

    if (opcao)
    {
        randomize();
        opcao=rand() %nivel;

        if (opcao)
        {
            cout<<"Arrancou as pernas do cara.\ne o juiz nao deu nada!"<<endl;
            cout<<"Boa oportunidade de contra-ataque"<<endl;
            cout<<"0 - Tocar para "<<jogador9<<" aberto na direita"<<endl;
            cout<<"1 - lancar "<<jogador10<<" na meia lua"<<endl;
            cin>>opcao;

            if (opcao)
            {
                randomize();
                opcao=rand() %nivel;

                if (opcao)
                {
                    cout<<jogador10<<" domina no peito com categoria, de costas para o gol"<<endl;
                    cout<<"apenas "<<xjogador3<<" a sua frente"<<endl;
                    cout<<"0 - tentar o drible"<<endl;
                    cout<<"1 - escorar para "<<jogador8<<endl;
                    cin>>opcao;

                    if (opcao)
                    {
                        randomize();
                        opcao=rand() %nivel;

                        if (opcao)
                        {
                            cout<<"Bela bola para "<<jogador8<<endl;
                            cout<<"cabe o chute . . . "<<endl;
                            cout<<"0 - enfiar o canudo pro gol"<<endl;
                            cout<<"1 - tentar bater colocainha"<<endl;
                            cin>>opcao;

                            if (opcao)
                            {
                                randomize();
                                opcao=rand() %2;

                                if (opcao)
                                {
                                    cout<<"Que golaco !!  no gogo da ema!!!"<<endl;
                                    getch();
                                    gol();
                                }
                                else
                                {
                                    cout<<"Bola fraca!! o goleiro sai jogando se problema"<<endl;
                                    getch();
                                    xdefesa();
                                }
                            }
                            else
                            {
                                randomize();
                                opcao=rand() %nivel;

                                if (opcao)
                                {
                                    cout<<"Que bomba!!\nGOOOOOOOOOLLLLLLLL"<<endl;
                                    getch();
                                    gol();
                                }
                                else
                                {
                                    cout<<"Pra Foooraa !!1 a bola foi parar na arquibancada!"<<endl;
                                    getch();
                                    xtiro_de_meta();
                                }
                            }
                        }
                        else
                        {
                            cout<<"bola muito fraca!1 a defesa adversaria domina e sai jogando"<<endl;
                            getch();
                            xdefesa();
                        }
                    }
                    else
                    {
                        randomize();
                        opcao=rand() %nivel;

                        if (opcao)
                        {
                            cout<<"OLEH !!!  voce tah na cara do gol agora!!\no goleiro saiu do gol em sua direcao"<<endl;
                            cout<<"0 - driblar o goleiro"<<endl;
                            cout<<"1 - tocar de cobertinha"<<endl;
                            cin>>opcao;

                            if (opcao)
                            {
                                randomize();
                                opcao=rand() %nivel;

                                if (opcao)
                                {
                                    cout<<"GOOOOLLLAAAACCCOOOOO"<<endl;
                                    getch();
                                    gol();
                                }
                                else
                                {
                                    cout<<"FORA!! Muito alta! !! tiro de meta"<<endl;
                                    getch();
                                    xtiro_de_meta();
                                }

                            }
                            else
                            {
                                randomize();
                                opcao=rand() %nivel;

                                if (opcao)
                                {
                                    cout<<"OLEH !!!"<<endl;
                                    getch();
                                    cout<<"ele puxou seu pe !!  PENALTI!"<<endl;
                                    getch();

                                clrscr();
                                cout<<jogador10<<" na bola . . .\nolho no lance"<<endl;
                                cout<<"\n0 - bater no canto direito\n1 - bater no canto esquerdo"<<endl;
                                cin>>opcao;
                                randomize();
                                opcao=rand() %4;
                                if (opcao)
                                {
                                    cout<<"tah lah dentrooo"<<endl;
                                    getch();
                                    gol();
                                }
                                else
                                {
                                    cout<<"Pra fooorraaa"<<endl;
                                    getch();
                                    xtiro_de_meta();

                                }

                                    //@@@@@@@@@@@@@@@@@@@@@@@@


                                }
                                else
                                {
                                    cout<<"O goleiro pega a bola!! perdeu-se uma bela oportunidade"<<endl;
                                    getch();
                                    xdefesa();
                                }

                            }

                        }
                        else
                        {
                            cout<<"ih rapaiz . . . treine mais os dribles !!"<<endl;
                            getch();
                            xmeio();
                        }

                    }
                }
                else
                {
                    cout<<"Bola cabeceada pra fora da area por "<<xjogador4<<endl;
                    getch();
                    xdefesa();

                }



            }
            else
            {
                randomize();
                opcao=rand() %nivel;

                if (opcao)
                {
                    cout<<"Belissima bola . . ."<<jogador9<<" tem agora "<<xjogador5<<" a sua frente"<<endl;
                    cout<<"1 - partir pra cima da marcacao"<<endl;
                    cout<<"0 - voltar a bola pro meio"<<endl;
                    cin>>opcao;

                    if (opcao)
                    {
                        randomize();
                        opcao=rand() %nivel;

                        if (opcao)
                        {
                            cout<<jogador9<<" eh mesmo muito talentoso. deixou "<<xjogador5<<" no chao"<<endl;
                            cout<<"0 - fazer o cruzamento na area"<<endl;
                            cout<<"1 - voltar a bola para a entrada da area"<<endl;
                            cin>>opcao;

                            if (opcao)
                            {
                                area();
                            }
                            else
                            {
                                randomize();
                                opcao=rand() %nivel;

                                if (opcao)
                                {
                                    cout<<"0 - cabecear no chao"<<endl;
                                    cout<<"1 - cabecear no alto"<<endl;
                                    cin>>opcao;

                                    if (opcao)
                                    {
                                         randomize();
                                         opcao=rand() %nivel;

                                         if (opcao)
                                         {
                                            cout<<"TAH LAH DENTROOOOOOOOOO"<<endl;
                                            getch();
                                            gol;
                                         }
                                         else
                                         {
                                            cout<<"pra foraaaa"<<endl;
                                            getch();
                                            xtiro_de_meta();

                                         }
                                    }
                                    else
                                    {
                                        randomize();
                                        opcao=rand() %4;

                                        if (opcao)
                                        {
                                            cout<<"CABECADA MORTAL . . ."<<endl;
                                            getch();
                                            gol();
                                        }
                                        else
                                        {
                                            cout<<"foooooraaaa!!!"<<endl;
                                            getch();
                                            xtiro_de_meta();
                                        }
                                    }
                                }
                                else
                                {
                                    cout<<"a zaga alivia"<<endl;
                                    getch();
                                    area();
                                }

                            }


                        }
                        else
                        {
                            cout<<"Errou !! menos fomiagem da proxima vez, sr "<<jogador9<<endl;
                            getch();
                            xmeio();
                        }


                    }
                    else
                    {
                      meio();
                    }







                }
                else
                {
                    cout<<"Bola muito forte, se perde pela lateral . . ."<<endl;
                    getch();
                    xlateral();
                }
            }


        }
        else
        {
            cout<<"Epa!!1 pega leve aih, maluco.  \nFALTA! "<<endl;
            getch();
            xfaltameio();
        }


    }
    else
    {
        randomize();
        opcao=rand() %nivel;

        if (opcao)
        {
            cout<<"Bela roubada!! o adversario dormiu no ponto, mas vc nao !"<<endl;
            cout<<"0 - carregar a bola pra frente"<<endl;
            cout<<"1 - passar para o lateral "<<jogador2<<endl;
            cin>>opcao;

            if (opcao)
            {
                randomize();
                opcao=rand() %4;

                if (opcao)
                {
                    cout<<jogador2<<" pega a bola e avanca pela lateral"<<endl;
                    cout<<xjogador5<<" esta a sua frente"<<endl;
                    cout<<"0 - driblar e ficar livre para cruzar"<<endl;
                    cout<<"1 - fazer o passe para tras"<<endl;
                    cin>>opcao;

                    if (opcao)
                    {
                        randomize();
                        opcao=rand() %nivel;

                        if (opcao)
                        {
                            cout<<"passe feito"<<endl;
                            getch();
                            defesa();
                        }
                        else
                        {
                            cout<<"passe mal feito, bola interceptada por "<<xjogador8<<endl;
                            getch();
                            xmeio();
                        }
                    }
                    else
                    {
                        randomize();
                        opcao=rand() %nivel;

                        if (opcao)
                        {
                            cout<<"belo drible!! "<<endl;
                            cout<<"0 - Chutar mesmo sem angulo"<<endl;
                            cout<<"1 - Fazer o cruzamento"<<endl;
                            cin>>opcao;

                            if (opcao)
                            {
                                randomize();
                                opcao=rand() %nivel;

                                if (opcao)
                                {
                                    cout<<"Bola a meia altura na direcao de "<<jogador11<<endl;
                                    cout<<"0 - dar um peixinho"<<endl;
                                    cout<<"1 - pegar de primeira na veia"<<endl;
                                    cin>>opcao;

                                    if (opcao)
                                    {
                                        randomize();
                                        opcao=rand() %nivel;

                                        if (opcao)
                                        {
                                            cout<<"Que golacoooo !!! no gogo da emaaa !!"<<endl;
                                            getch();
                                            gol();
                                        }
                                        else
                                        {
                                            cout<<"Espirrou o taco !!  seu chute furou e eles dominam a bola!\nperdeu-se uma excepcional oportunidade"<<endl;
                                            getch();
                                            xdefesa();
                                        }
                                    }
                                    else
                                    {
                                        randomize();
                                        opcao=rand() %nivel;

                                        if (opcao)
                                        {
                                            cout<<"No cantinho que a galera gostaaaaa"<<endl;
                                            getch();
                                            gol();
                                        }
                                        else
                                        {
                                            cout<<"Pra foooraaa!!1   inacreditavel !!!"<<endl;
                                            getch();
                                            xtiro_de_meta();

                                        }
                                    }


                                }
                                else
                                {
                                    cout<<"cruzou mal !!! a bola se perde por tras do gol"<<endl;
                                    getch();
                                    xtiro_de_meta();
                                }

                            }
                            else
                            {
                                randomize();
                                opcao=rand() %nivel;

                                if (opcao)
                                {
                                    cout<<"FORAAA!!Seu fominha!! \nse cruzasse essa bola poderia estar ganhando o jogo !!"<<endl;
                                    getch();
                                    xtiro_de_meta();
                                }
                                else
                                {
                                    cout<<"caxaaaa"<<endl;
                                    getch();
                                    gol();
                                }
                            }

                        }
                        else
                        {
                            cout<<"nao driblou bem . . . bola pertence agora a "<<adversario<<endl;
                            getch();
                            xdefesa();

                        }
                  }



                }
                else
                {
                    cout<<"passe forte demais !! bola sai pela lateral"<<endl;
                    getch();
                    xlateral();



                }


            }
            else
            {
                randomize();
                opcao=rand() %nivel;

                if (opcao)
                {
                    cout<<jogador7<<" com a bola dominada no meio, observa a movimentacao do time."<<endl;
                    cout<<jogador10<<" movimenta-se pelos flancos"<<endl;
                    cout<<jogador11<<" ja pediu bola no comando de ataque"<<endl;
                    cout<<"0 - Lancar "<<jogador10<<endl;
                    cout<<"1 - Acionar "<<jogador11<<endl;
                    cin>>opcao;

                    if (opcao)
                    {
                        randomize();
                        opcao=rand() %nivel;

                        if (opcao)
                        {
                            cout<<"Bom dominio de bola de "<<jogador11<<endl;
                            cout<<"0 - Driblar "<<xjogador3<<" ,que o marca."<<endl;
                            cout<<"1 - Tocar para "<<jogador9<<" na ponta direita"<<endl;
                            cin>>opcao;

                            if (opcao)
                            {
                               randomize();
                               opcao=rand() %nivel;

                               if (opcao)
                               {
                                    cout<<jogador9<<" com a bola."<<endl;
                                    cout<<"0 - fazer o cruzamento"<<endl;
                                    cout<<"1 - driblar o marcador e entrar na area coma bola"<<endl;
                                    cin>>opcao;

                                    if (opcao)
                                    {
                                          randomize();
                                          opcao=rand() %nivel;

                                          if (opcao)
                                          {
                                                cout<<"oleh !!  voce entra na area agora !!"<<endl;
                                                cout<<"0 - cruzar rasteira para "<<jogador10<<endl;
                                                cout<<"1 - bater pro gol daih, mesmo sendo diicil"<<endl;
                                                cin>>opcao;

                                                if (opcao)
                                                {
                                                     randomize();
                                                     opcao=rand() %(nivel-1);

                                                     if (opcao)
                                                     {
                                                        cout<<"GOOOOLLLL"<<endl;
                                                        getch();
                                                        gol();
                                                     }
                                                     else
                                                     {
                                                        cout<<"daih , nem maradona marcaria . . .  seja menos fominha"<<endl;
                                                        getch();
                                                        xtiro_de_meta();
                                                     }
                                                }
                                                else
                                                {
                                                     randomize();
                                                     opcao=rand() %nivel;

                                                     if (opcao)
                                                     {
                                                        cout<<"fileh mignon para "<<jogador10<<endl;
                                                        cout<<"bola dominada na pequena area. soh o goleiro a sua frente"<<endl;
                                                        cout<<"0 - tocar no canto esquerdo"<<endl;
                                                        cout<<"1 - tocar no canto direito"<<endl;
                                                        cin>>opcao;

                                                         randomize();
                                                         aux=rand() %nivel;

                                                        if (opcao==aux)
                                                        {
                                                            cout<<"o goleiro catou !! que feio heim "<<jogador10<<endl;
                                                            getch();
                                                            defesa();
                                                        }
                                                        else
                                                        {
                                                            cout<<"CAXAAAAAA   "<<endl;
                                                            getch();
                                                            gol();
                                                        }

                                                     }
                                                     else
                                                     {
                                                        cout<<xjogador2<<" intercepta e sai jogando"<<endl;
                                                        getch();
                                                        defesa();

                                                     }
                                                }

                                          }
                                          else
                                          {
                                            cout<<"drible nao foi bem executado !1 bola deles"<<endl;
                                            getch();
                                            defesa();

                                          }
                                    }
                                    else
                                    {
                                         randomize();
                                         opcao=rand() %nivel;

                                         if (opcao)
                                         {


                                                  cout<<"Belissimo cruzamento em direcao a "<<jogador10<<endl;
                                                     cout<<"0 - cabecear pro chao"<<endl;
                                                    cout<<"1 - cabecear no alto"<<endl;
                                                    cin>>opcao;

                                                  randomize();
                                                  aux=rand() %2;

                                                 if (aux==opcao)
                                                 {
                                                      cout<<"A bola passa raspando a trave!!!"<<endl;
                                                       getch();
                                                       xtiro_de_meta();
                                                 }
                                                 else
                                                 {
                                                     cout<<"Cabecada mortal"<<endl;
                                                     getch();
                                                     gol();
                                                 }

                                         }
                                         else
                                         {
                                            cout<<"que cruzamento horrivel !! treine mais "<<endl;
                                            getch();
                                            xtiro_de_meta();
                                         }

                                    }


                               }
                               else
                               {
                                    cout<<"passe mal feito, bola deles"<<endl;
                                    getch();
                                    xdefesa();
                               }
                            }
                            else
                            {
                               randomize();
                               opcao=rand() %nivel;

                               if (opcao)
                               {
                                    cout<<"Bom drible!! Mas recebeu a falta!"<<endl;
                                    getch();
                                    faltaperigosa();

                               }
                               else
                               {
                                    cout<<" perdeu a bola! foi deveras fominha"<<endl;
                                    getch();
                                    defesa();
                               }
                            }

                        }
                        else
                        {
                            cout<<"Voce demorou demais. a marcacao chegou e tomou a bola"<<endl;
                            getch();
                            xmeio();
                        }

                    }
                    else
                    {
                        randomize();
                        opcao=rand() %nivel;

                        if (opcao)
                        {
                            cout<<"Que beleza de lancamento .. . \n"<<jogador10<<" tem apenas "<<jogador4<<" a sua frente"<<endl;
                            cout<<"1 - driblar e sair na cara do "<<xjogador1<<endl;
                            cout<<"0 - segurar a bola e esperar os companheiros de ataque"<<endl;
                            cin>>opcao;

                            if (opcao)
                            {
                                cout<<"OLEEEEHHHHH  que belissima jogada!!!!"<<endl;
                                getch();
                               //caraacara
                                cout<<"0 - tocar na saida do goleiro"<<endl;
                        cout<<"1 - tentar driblar o goleiro"<<endl;
                        cin>>opcao;

                        if (opcao)
                        {
                            randomize();
                            aux=rand() %nivel;

                            if (aux)
                            {
                                cout<<xjogador1<<" derruba "<<jogador8<<"\nPENALTI !!"<<endl;
                                getch();

                                clrscr();
                                cout<<jogador10<<" na bola . . .\nolho no lance"<<endl;
                                cout<<"\n0 - bater no canto direito\n1 - bater no canto esquerdo"<<endl;
                                cin>>opcao;
                                randomize();
                                opcao=rand() %nivel;
                                if (opcao)
                                {
                                    cout<<"tah lah dentrooo"<<endl;
                                    getch();
                                    gol();
                                }
                                else
                                {
                                    cout<<"Pra fooorraaa"<<endl;
                                    getch();
                                    xtiro_de_meta();

                                }



                            }
                            else
                            {
                                cout<<"o goleiro pega a bola, vc nao eh tao competetente assim"<<endl;
                                cout<<"a defesa deles reinicia o jogo"<<endl;
                                getch();
                                xdefesa();
                            }


                        }
                        else
                        {
                            randomize();
                            aux=rand() %nivel;

                            if (aux)
                            {
                                cout<<"Tah lah dentro . . . "<<endl;
                                getch();
                                gol();
                            }
                            else
                            {
                                cout<<"Pra fora!!! peredu uma grande oportunidade!"<<endl;
                                getch();
                                xtiro_de_meta();
                            }
                        }
                        //fimcaraacara
                            }
                            else
                            {
                                cout<<"O zageirao te desarmou. .  . voce marcou touca"<<endl;
                                getch();
                                defesa();
                            }


                        }
                        else
                        {
                            cout<<"o bandeirinha aponta impedimento!!\na torcida fica enfurecida"<<endl;
                            getch();
                            defesa();
                        }
                    }






                }
                else
                {
                    cout<<"Adiantou demais a bola . . . . "<<xjogador6<<" domina para "<<adversario<<endl;
                    cout<<"Ele prepara o chute para o gol. Goleiro adiantado"<<endl;
                    cout<<"1 - tentar interceptar o chute"<<endl;
                    cout<<"0 - fazer a falta"<<endl;
                    cin>>opcao;

                    if (opcao)
                    {
                        randomize();
                        opcao=rand() %nivel;

                        if (opcao)
                        {
                            cout<<"Beleza!! salvou o chute!1 bola nossa!"<<endl;
                            getch();
                            defesa();
                        }
                        else
                        {
                            cout<<"voce nao interceptou . .  :-((\no chute incobriu o goleiro"<<endl;
                            getch();
                            xgol();
                        }
                    }
                    else
                    {
                        cout<<"FALTA!! SUA EGUA PRENHA!!"<<endl;
                        getch();
                        xfaltaperigosa();
                    }

                }
            }




        }
        else
        {
            cout<<"ele te driblou !!! e lancou nas costas do lateral"<<endl;
            cout<<xjogador11<<" fez o toque no meio"<<endl;
            getch();
            xmeio();
        }


    }







}
else
{
    cout<<adversario<<" tem a bola dominada no meio"<<endl;
    cout<<xjogador7<<" faz o passe para "<<xjogador8<<endl;
    cout<<"0 - dar combate com "<<jogador8<<endl;
    cout<<"1 - chegar na ignorancia com "<<jogador6<<endl;
    cin>>opcao;

    if (opcao)
    {
        randomize();
        opcao=rand() %2;

        if (opcao)
        {
            cout<<"Falta marcada!!1 vá com calma, mano!"<<endl;
            getch();
            xfaltameio();
        }
        else
        {
            cout<<"Boa roubada, o juiz nao deu a falta!!"<<endl;
            getch();
            meio();
        }
    }
    else
    {
        randomize();
        opcao=rand() %2;

        if (opcao)
        {
            cout<<"Entra igual homem na bola, rapaz!!"<<endl;
            cout<<"desse jeito num vai pegar a bola nunca!"<<endl;
            cout<<xjogador8<<" prepara o passe para "<<xjogador11<<endl;
            cout<<"tentar fazer a ´linha burra´ de impedimento?"<<endl;
            cout<<"0 - sim     1 - nao"<<endl;
            cin>>opcao;

            if (opcao)
            {
                randomize();
                opcao=rand() %2;

                if (opcao)
                {
                    cout<<"bola muito forte!! Sai pela linha de fundo"<<endl;
                    getch();
                    tiro_de_meta();
                }
                else
                {
                    cout<<xjogador11<<" recebe uma boa bola"<<endl;
                    cout<<jogador3<<" eh o ultmo homem!"<<endl;
                    cout<<"0 - fazer a falta";
                    cout<<"1 - tentar tirar a bola na manha"<<endl;
                    cin>>opcao;

                    if (opcao)
                    {
                        randomize();
                        opcao=rand() %nivel;

                        if (opcao)
                        {
                            cout<<"Boua zagueirao!! sai jogando com categoria!"<<endl;
                            getch();
                            defesa();
                        }
                        else
                        {
                            cout<<"parabens,retardado! ele te deu um ole"<<endl;
                            cout<<"0 - agarra-lo pela camisa"<<endl;
                            cout<<"1 - rezar pra ele errar o chute"<<endl;
                            cin>>opcao;

                            if (opcao)
                            {
                                randomize();
                                opcao=rand() %nivel;

                                if (opcao)
                                {
                                    cout<<"eh macumbeiro !!! a bola pass alonge do gol!"<<endl;
                                    getch();
                                    tiro_de_meta();
                                }
                                else
                                {
                                     cout<<"vc tah prescisando ir mais a igreja"<<endl;
                                     getch();
                                     xgol();
                                }
                            }
                            else
                            {
                                cout<<"o juiz marca a falta e vc ganha um cartao"<<endl;
                                getch();
                                xfaltaperigosa();

                            }

                        }
                    }
                    else
                    {
                        randomize();
                        opcao=rand() %2;

                        if (opcao)
                        {
                            cout<<"beleza!1 o juiz nao marcou a falta!"<<endl;
                            getch();
                            defesa();

                        }
                        else
                        {
                            cout<<"Falta!! e de gracas a Deus que ele nao te expulsou!"<<endl;
                            getch();
                            xfaltaperigosa();
                        }

                    }



                }

            }
            else
            {
                randomize();
                opcao=rand() %2;

                if (opcao)
                {
                    cout<<"sua zaga ainda não esta entrosada"<<endl;
                    cout<<xjogador11<<"esta agora cara-a-cara com "<<jogador1<<endl;
                    cout<<"0 - tentar defender a bola saindo do gol"<<endl;
                    cout<<"1 - sair no jogador e tentar fazer o penalti"<<endl;
                    cin>>opcao;

                    if (opcao)
                    {
                        randomize();
                        opcao=rand() %2;

                        if (opcao)
                        {
                            cout<<"PENALTI!!!!"<<endl;
                            getch();
                            clrscr();
                                cout<<xjogador10<<" na bola . . .\nolho no lance"<<endl;
                                cout<<"\n0 - pular no canto direito\n1 - pular no canto esquerdo"<<endl;
                                cin>>opcao;
                                randomize();
                                opcao=rand() %nivel;
                                if (opcao)
                                {
                                    cout<<"tah lah dentrooo"<<endl;
                                    getch();
                                    xgol();
                                }
                                else
                                {
                                    cout<<"Pra fooorraaa"<<endl;
                                    getch();
                                    xtiro_de_meta();

                                }
                        }
                        else
                        {
                            cout<<"Voce mandou o cara pro ar e o juiz nao deu nada!!"<<endl;
                            cout<<"que sorte"<<endl;
                            getch();
                            tiro_de_meta();
                        }
                    }
                    else
                    {
                        randomize();
                        opcao=rand() %nivel;

                        switch (opcao){
                        case (2): cout<<jogador1<<" defendeu a bola!!\ne sai jogando "; getch(); defesa();
                        break;
                        case (1): cout<<"bola pra fora!!! que sorte!"<<endl; getch(); tiro_de_meta();
                        break;
                        case (0): cout<<"ele tocou na sua saida\nCAXA"<<endl; getch(); xgol();
                        break;
                        default:cout<<"fora"<<endl; tiro_de_meta();break;
                        }
                    }



                }
                else
                {
                    cout<<"O bandeirinha levanta seu instrumento"<<endl;
                    cout<<jogador4<<"se apresenta para bater a falta"<<endl;
                    cout<<"0 - tocar pro meio"<<endl;
                    cout<<"1 - lancar lah pra frente, na area adversaria"<<endl;
                    cin>>opcao;

                    if (opcao)
                    {
                        area();
                    }
                    else
                    {
                        meio();
                    }
                }

            }



        }
        else
        {
            cout<<"bela roubada de bola, com categoria"<<endl;
            cout<<"0 - fazer o passe aki mesmo no meio"<<endl;
            cout<<"1 - lancar a bola para frente"<<endl;
            cin>>opcao;

            if (opcao)
            {
                randomize();
                opcao=rand() %nivel;

                if (opcao)
                {
                    cout<<"bom passe"<<endl;
                    getch();
                    area();
                }
                else
                {
                    cout<<"passe ruim"<<endl;
                    cout<<"bola inteceptada"<<endl;
                    getch();
                    xdefesa();
                }
            }
            else
            {
                randomize();
                opcao=rand() %nivel;

                if (opcao)
                {
                    cout<<"bom passe"<<endl;
                    getch();
                    meio();

                }
                else
                {
                    cout<<"passe ruim"<<endl;
                    getch();
                    xmeio();
                }

            }
        }
    }
    }
}
    else
    {
    clrscr();
    inicio();

    }

       }
//------------------------------------------------------------


void defesa()

{
void xfaltameio();
void meio();
void defesa();
void xdefesa();
void gol();
void xgol();
void tiro_de_meta();
void area();

gettime(&t);
tempo=t.ti_min;


if (tempo<minu)
{

    cout<<"Bola dominada na defesa por "<<jogador3<<endl;
    cout<<"0 - tocar de lado com "<<jogador4<<endl;
    cout<<"1 - tentar lancar "<<jogador8<<" lah na frente"<<endl;
    cin>>opcao;

    if (opcao)
    {
        randomize();
        opcao=rand() %nivel;

        if (opcao)
        {
            cout<<"Bom lancamento!! que pontaria!! "<<endl;
            getch();
            area();
        }
        else
        {
            cout<<"Lancamento mal feito, bola dominada pelo adversario"<<endl;
            getch();
            xmeio();
        }

    }
    else
    {
        cout<<"Bola dominada por "<<jogador4<<endl;
        cout<<"0 - Abrir com "<<jogador5<<endl;
        cout<<"1 - Tocar com "<<jogador6<<" no meio"<<endl;
        cin>>opcao;

        if (opcao)
        {
            randomize();
            opcao=rand() %nivel;

            if (opcao)
            {
                cout<<"bom passe, inicia-se a jogada no meio"<<endl;
                getch();
                meio();
            }
            else
            {
                cout<<"que cagada!! eles agora tem a bola"<<endl;
                sabugo:;
                cout<<"vc esta mano a mano com "<<jogador10<<endl;
                cout<<"0 - Descer o sabugo do joelho do safado"<<endl;
                cout<<"1 - tentar fazer o desarme limpo"<<endl;
                cin>>opcao;
                if (opcao)
                {
                    randomize();
                    opcao=rand() %nivel;

                    if (opcao)
                    {
                        cout<<"Bom desarme, a torcida aplaude"<<endl;
                        getch();
                        meio();
                    }
                    else
                    {
                        cout<<"Ele te driblou!!"<<endl;
                        cout<<"agora ele esta cara a cara com "<<jogador1<<endl;
                        cout<<"0 - Sair do gol"<<endl;
                        cout<<"1 - esperar o chute"<<endl;
                        cin>>opcao;

                        randomize();
                        aux=rand() %nivel;

                        if (aux==0)
                        {
                            cout<<"caxa!!1";
                            getch();
                            xgol();
                        }
                        else
                        {
                            cout<<"pra fora!! que sorte!"<<endl;
                            getch();
                            tiro_de_meta();
                        }

                    }

                }
                else
                {
                    cout<<"FALTA!!!  seu cavalo !!!"<<endl;
                    getch();
                    xfaltaperigosa();


                }
            }




        }
        else
        {
            randomize();
            opcao=rand() %nivel;

            if (opcao)
            {
               cout<<"bela abertura"<<endl;
               cout<<"0 - lancar para a area adversaria"<<endl;
               cout<<"1 - tocar no meio"<<endl;
               cin>>opcao;

               if (opcao)
               {
                  randomize();
                  opcao=rand() %nivel;

                  if (opcao)
                  {
                    cout<<"Belo lancamento , rapaiz"<<endl;
                    getch();
                    area();
                  }
                  else
                  {
                    cout<<"trene mais seus passes!!\nperdeu a posse de bola"<<endl;
                    getch();
                    xmeio();
                  }
               }
               else
               {
                    cout<<"bom passe"<<endl;
                    getch();
                    meio();
               }
            }
            else
            {
                cout<<"passe ruim, segura essa jaca agora zagueirao"<<endl;
                getch();
                goto sabugo;

            }

        }

    }

    }
    else
    {
    clrscr();
    inicio();

    }



  }






void grupo(void)
{
clrscr();
//------------------------
playoff=0;
cout<<"GRUPO "<<(rand() %5) + 1<<"\n\n"<<endl;




cout<<"Equipe           Pontos\n"<<endl;
cout<<equipe<<"     "<<ponto<<endl;
switch (sorteio[6]){
case (0):xreal();break;
case (1): xmanchester();break;
case (2): xbarca();break;
case (3): xarsenal();break;
case (4): xbeyern();break;
case (5): xinter();break;
case (6): xmilan();break;
case (7): xjuventus();break;
}cout<<adversario<<"     "<<ponto1<<endl;

switch (sorteio2[0]){
case (0): xvalencia();break;
case (1): xlazio();break;
case (2): xroma();break;
case (3): xporto();break;
case (4): xpsg();break;
case (5): xlacoruna();break;
case (6): xliverpool();break;
case (7): xparma();break;
case (8): xpsv();break;
}cout<<adversario<<"     "<<ponto2<<endl;

switch (sorteio2[1]){
case (0): xvalencia();break;
case (1): xlazio();break;
case (2): xroma();break;
case (3): xporto();break;
case (4): xpsg();break;
case (5): xlacoruna();break;
case (6): xliverpool();break;
case (7): xparma();break;
case (8): xpsv();break;
}cout<<adversario<<"     "<<ponto3<<endl;

}


int gay(int op)
{
int gayzola;
op=op+1;
gayzola=gay(op);
return (gayzola);
}


