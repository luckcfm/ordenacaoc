/*
	Esse método de busca é análogo à organizar as cartas de um baralho na sua mão

	"Pega-se uma carta de cada vez e a coloca em seu devido lugar,
	sempre deixando as cartas da mão em ordem"

	Quando o vetor está ordenado, ocorre o meno número de comparaçãoes. que é f(n) = n-1;
	O pior caso é quando o vetor está ordenado em ordem decrescente.
	Complexidade O(n²), neste caso.

	Propriedades:
	Ele é estável
	O(n²) para comparações ou movimentação de dados
	O(N) para comparações ou movimentação de dados, quando o arquivo está ordenado
	na ordem desejada.

	Quando usar:
	- Arquivos(quase) ordenados devido ao comportamento das movimentações;
	- Para arquivos pequenos (menos de 20 registros)
*/


void insercao(int *vet, int n)
{
	int i,j,tmp;
	for(i = 0; i < n; i++)
	{
		tmp = vet[i];
		j = i-1;
		while(j >= 0 && vet[j] > tmp)
		{
			vet[j+1] = vet[j];
			j--;
		}
		vet[j+1] = tmp;
	}
}