/*

	É o algoritmo de ordenação mais rápido que se conhece

	A idéia consiste em dividir o problema e ordenar um conjunto de n elementos em dois
	problemas menores

	Dpois, os problemas menores são ordenados independentemente e os resultados
	combinados para produzir a solução do problema maior.

	Pontos positivos
	---------------------
	- É extremamente eficiente para ordenar arquivos de dados
	- Necessita de uma pequena pilha como memória auxiliar
	- Complexidade nlogn


	Pontos negativos
	---------------------
	- Não é estável
	- É ineficiente para arquivos já ordenados, quando a escolha do pivo é inadequada
	(escolha sistematica dos extremos)
	- Partições estremamente desiguais
		 O procedimento Ordena() será chamado n vezes, eliminando apenas um registro O(n²)
		 Necessidade de muita pilha de recusão
	
	- Algoritmo delicado e difícil de implementar
*/

	void quicksort(int *vetor, int esquerda, int direita)
	{
		int i,j,pivo,y;

		i = esquerda;
		j = direita;
		pivo = vetor[(esquerda+direita)/ 2]; //O vetor pivo, ou seja, onde irá dividir

		while(i <= k)
		{
			while(valor[i] < pivo && i < direita)
			{
				i++;
			}
			while(valor[j] > x && j > esquerda)
			{
				j--;
			}
			if(i <= j)
			{
				y = valor[i];
				valor[i] = valor[j];
				valor[j] = y;
				i++;
				j--;
			}
		}
		if(j > esquerda)
		{
			quicksort(vetor, esquerda, j);
		}
		if(i < direita)
		{
			quicksort(vetor, i, direita);
		}
	}