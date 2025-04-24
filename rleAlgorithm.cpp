#include "rleAlgorithm.h"

void rle(int array[], int size)
{
	int nElements = array[0];
	std::vector<int> v;
	bool zero = true;
	int element, sum = 0;
	for (int i = 1; i < size; i++)
	{
		if (array[i])
		{
			sum += array[i];
			if (zero)
			{
				element = 0;
				zero = false;
			}
			else
			{
				element = 1;
				zero = true;
			}
			for (int j = 0; j < array[i]; j++) v.push_back(element);
			if (sum == nElements)
			{
				zero = true;
				sum = 0;
			}
		}
		else zero = false;

	}
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i];
		if ((i + 1) % nElements == 0)
			std::cout << std::endl;
	}
}