#define CIMA     'w'
#define BAIXO    's'
#define DIREITA  'd'
#define ESQUERDA 'a'
#define BOMBA    'b'

int acabou();
void move(char direcao);
int ehdirecao(char direcao);
void fantasmas();
int paraondefastasmavai(int xatual, int yatual, int* xdestino, int* ydestino);
void explodepilula();
void explodepilula2(int x, int y, int somax, int somay, int qtd);