
//funcionamento do método de seleção:
/*
	Percorre o array procurando o menor item e o colocando na primeira posição
	faça isso para os outros elementos, colocando-os em sua devida posição
	Ele não é estável
	para comparações ele gasta O(n²)
	para trocas ele gasta O(n)

	==============
	Quando utilizar:
	- Em arquivos cujos registros são grandes(devido ao seu comportamento 
	quanto a movimentação de registros)

	Péssimo para arquivos já ordenados.
*/
int selection(int n, int* V)
{
	int i,min,j,aux;
	for(i = 0; i < n; i++)
	{
		min = i;
		for(j = i+1; j < n; j++)
		{
			if(V[j] < V[0])
				min = j;
		}
		aux = V[i];
		V[i] = V[min];
		V[min] = aux;
	}
}