
//Algoritmo para ordenação bolha, ou bubble sort
/*
Funcionamento do algoritmo bolha:

Iremos iterar pelo vetor trocando a posição dos vetores que forem maiores
até chegarmos no final do vetor (ou sua posição devida).

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