#include <iostream>
#include "complex.h"
#include <algorithm>

using namespace std;

void bubble_sort(complex *a,int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = 0; j < len - i - 1; ++j)
		{
			if (a[j].cAbs() > a[j+1].cAbs())
				swap(a[j], a[j + 1]);
		}
	}
}

int main()
{
	int len;

	cin >> len;

	complex *arr = new complex[len];

    for(int i = 0; i < len; ++i)
    {
        cin>>arr[i].valid >> arr[i].imaginary;
    }

	bubble_sort(arr,len);

	for (int i = 0; i < len; ++i)
		cout << arr[i].valid << ' ' << arr[i].imaginary << '\n';


	return 0;
}