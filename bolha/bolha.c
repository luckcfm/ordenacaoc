
//Algoritmo para ordenação bolha, ou bubble sort
/*
Funcionamento do algoritmo bolha:

Iremos iterar pelo vetor trocando a posição dos vetores que forem maiores
até chegarmos no final do vetor (ou sua posição devida).


O algoritmo Bolha é de ordem quadrática. O(N²)
*/
//recebemos como parametro a quantidade de elementos e 
//o ponteiro do vetor que iremos ordenar

void bolha(int n, int* v)
{
	int i,j; 

	for(i = n-1; i>=1; i--)
	{
		for(j = 0; j < i; j++)
		{
			//se o vetor atual for maior que seu sucessor, troque-os
			if(v[j] > v[j+1])
			{
				int tmp = v[j];
				v[j] = v[j+1];
				v[j+1] = tmp;
			}
		}
	}

}

void bolhaRecursivo(int n, int* v)
{
	int j, troca = 0;

	for(j = 0; j < n-1; j++)
	{
		if(v[j]>v[j+1])
		{
			int temp = v[j];
			v[j] = v[j+1];
			v[j+1] = temp;
			troca = 1;
		}
	}
	if(troca != 0)
		bolha_rec(n-1,v);
}