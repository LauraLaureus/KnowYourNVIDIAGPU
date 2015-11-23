
#include "cuda_runtime.h"
#include <cstdio>

extern void printDeviceProperties(cudaDeviceProp devProp);

int main()
{
	printf("Buscando dispositivos CUDA ...\n");
	int devCount;
	cudaGetDeviceCount(&devCount);

	printf("Hay %d dispositivos CUDA\n",devCount);

	for (int i = 0; i < devCount; i++)
	{
		printf("\nDispositivo CUDA #%d\n", i);
		cudaDeviceProp devProp;
		cudaGetDeviceProperties(&devProp, i);
		printDeviceProperties(devProp);
	}

	std::getchar();
	return 0;
}
