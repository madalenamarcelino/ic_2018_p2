**2º Projecto de Introdução à Computação 2018/2019**

> Madalena Marcelino *a21700859*
> Afonso Rosa *a21802169*

**Solução**

* Para a estruturação geral do código utilizámos structs, switch cases, 
fors, ifs e pointers de modo a podermos obter os melhores resultados na 
execução do código. 

Fluxograma da nossa versão do jogo "Settlers of Catan:
![Fluxograma](fluxograma.png)


* estruturas de dados: grelha de simulação, outras estruturas auxiliares 
relevantes
* algoritmos relevantes


**Manual do Utilizador**

* Como compilar: qual o comando ou comandos necessários para gerar uma 
build do jogo

* Regras do jogo:

	Este jogo é um jogo turn based que ocorre num mapa 2D, cada 
posição no mapa tem terrenos 
adjacentes a Norte(N), a Sul (S), a Este 
(E) e a Oeste (O) que produzem recursos naturais e que estão associados 
a números. Estes recursos são: Wool (W), Brick (B), Lumber (L), Grain 
(G), Iron (I) ou Desert (D). 
	Este jogo é um jogo competitivo para duas pessoas, para ganhar é 
necessário que um dos jogadores acumule 6 pontos.
	No ínicio do jogo cada jogador escolhe um local para instalar a 
sua primeira aldeia (o jogador 1 escolhe primeiro a posição da sua 
aldeia, seguido de o jogador 2, cada posição só pode pertencer a um 
único jogador), em cada ronda, o jogador lança 2 dados. Todos os 
jogadores que tenham aldeias em posições com terrenos adjacentes cujo 
número seja igual à soma dos 2 dados, ganham uma carta com os recursos 
naturais produzidos pelos terrenos adjacentes.
	Quando chega a sua vez, o jogador, é obrigado a lançar os dados 
antes de fazer qualquer outra acção, depois de os mesmos terem sido 
lançados podem ser tomadas as seguintes acções, até que os seus recursos o permitam:

* Comprar uma aldeia e colocá-la numa posição adjacente;
* Transformar uma aldeia sua numa cidade. As cidades produzem duas 
unidades de recursos naturais em vez de uma;
* Efectuar uma troca com o banco ao rácio de 4 para 1, o jogador pode 
trocar 4 unidades do mesmo recurso natural, por uma que necessite de 
outro recurso;
* Efectuar uma troca com o banco ao rácio de 10 para 1, o jogador pode 
trocar 10 unidades do mesmo recurso natural, por 1 ponto (o jogo 
acaba quando um jogador chega a 6 pontos);
* Passar a sua vez ao outro jogador. 

Preços de construcção de aldeias e de cidades:

* Aldeia -> 1 B  +  1 L  +  1 G  +  1 W
* Cidade -> 2 G  +  3 I

* Cada aldeia vale 1 ponto e cada cidade vale 2 pontos. 


**Conclusões e matéria aprendida**

* Houve problemas persistentes nas structs e na execução geral do código 
realçando especialmente a incorporação das estructuras e o funcionamento 
das mesmas, garantir que os valores destas fossem alteradas como 
necessário e que estes se mantiam inalterados quando necessários foi 
também um desafio em sim. Foi também relativamente difícil manter uma 
organização persistente na estrutura do código.


**Referências**

* Este trabalho tirou várias referencias no que foi dado nas aulas da 
UC, e as dúvidas restantes foram retiradas ou com colegas ou pesquisadas 
na internet.

As bibliotecas utilizadas foram: 
* #include <stdio.h>
* #include <stdlib.h>
* #include <time.h>
* #include <ctype.h>


