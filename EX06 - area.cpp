/*
7.	Calcular a área total de uma residência (por exemplo, sala, cozinha, 
banheiro, quartos, área de serviço, quintal garagem, etc.). O programa deverá 
solicitar a entrada do nome, a largura e o comprimento de um determinado cômodo 
e armazenar estes dados em uma estrutura do tipo REGISTRO (typedef struct). 
Em seguida, deverá calcular a área do cômodo lido e armazenar o resultado no 
registro. Apresentar a mensagem solicitando do usuário a confirmação de 
continuar calculando novos cômodos. Caso o usuário responda "NÃO", o programa 
deverá recuperar e apresentar todos valores gravados na estrutura e o valor 
da área total.
*/

#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>

typedef struct comodo{
        char   nome[256];
        float  lado1;
        float  lado2;
        float  area;
} t_comodo;

typedef struct casa {
        t_comodo * cmds;
        int     qtd_cmds;
} t_casa;

int main()
{
            char str_nome[256];

            t_casa  * c = (t_casa *) malloc (sizeof(t_casa));
            c->qtd_cmds = 0;
            
            float   area_total = 0.;

            printf("Informe o nome do comodo ou F para finalizar\n");
            scanf("%s", &str_nome);
            while(str_nome[0] != 'F')
            {
                c->cmds = (t_comodo *) realloc (c->cmds, ++(c->qtd_cmds) * sizeof(t_comodo));

                printf("Informe as dimencoes dos lados, separadas por virgulas\n");
                scanf("%f, %f", &(c->cmds[c->qtd_cmds-1].lado1), &(c->cmds[c->qtd_cmds-1].lado2));
                getchar();
                
                strcpy(c->cmds[c->qtd_cmds-1].nome, str_nome);       
                c->cmds[c->qtd_cmds-1].area = c->cmds[c->qtd_cmds-1].lado1 * c->cmds[c->qtd_cmds-1].lado2;
                
                printf("O comodo %s tem area = %.2f\n", c->cmds[c->qtd_cmds-1].nome, c->cmds[c->qtd_cmds-1].area);  
                area_total += c->cmds[c->qtd_cmds-1].area;
                
                printf("Informe o nome do comodo\n");
                scanf("%s", &str_nome);   
            }
            
            getchar();
            printf("A area total da casa e %.2f\n", area_total);
            getchar();
}
