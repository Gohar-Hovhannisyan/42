#include <iostream>
#include <time.h>
#include <string>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void* serialize(void)
{
	char* raw = new char[20];

	srand(time(nullptr));
	char arr[] = "abcdefghijklmnopqrstuvwxyz0123456789";
	for (int i = 0; i < 8; i++)
		raw[i] = arr[rand() % 35];
	*(reinterpret_cast<int*>(raw + 8)) = rand() % 42424242;
	for (int i = 12; i < 20; i++)
		raw[i] = arr[rand() % 35];
	return (reinterpret_cast<void*>(raw));
}

Data * deserialize(void * raw)
{
	Data* d = new Data;
	d->s1 = std::string(reinterpret_cast<char*>(raw), 8);
	d->n = *(reinterpret_cast<int*>(raw) + 8);
	d->s2 = std::string(reinterpret_cast<char*>(raw) + 12, 8);
	return d;
}

int main()
{
	void *smth = serialize();
	Data* d = deserialize(smth);
	std::cout << "s1 is: " << d->s1 << "\nnumber is: " << d->n << "\ns2  is: " << d->s2 << std::endl;
}
