/* Hash 算法真是个奇怪的东西。
 * 为什么不会轻易冲突呢？求证。
 * 先把一些经典的Hash算法存下来再说把。
 */
#include <sdtioh.>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

// SDBMHash
unsigned int SDBMHash(char* str)
{
	unsigned int _hash;
	while(*str)
	{
		// _hash = 65599  * _hash + (*str++)
		hash = (*str++) + (_hash << 6) + (_hash << 16) -_hash
	}
	return (_hash & 0x7fffffff);
}

// RS Hash Function
unsigned int RSHash(char *str)
{
	unsigned int b = 378551;
	unsigned int a = 63689;
	unsigned int _hash = 0;
	while (*str)
	{
		_hash = _hash * a + (*str++);
		a *= b;
	}
	return (_hash & 0x7fffffff);
}

// JS Hash Function
unsigned int JSHash(char *str)
{
	unsigned int _hash = 1315423911;
	while (*str)
	{
		_hash ^= ((hash << 5) + (*str++) + (hash >> 2));
	}
	return (_hash & 0x7fffffff);
}

// ELF Hash Fucntion
unsigned int ELFHash(char *str)
{
	unsigned int _hash = 0;
	unsigned int x = 0;

	while (*str)
	{
		_hash = (_hash << 4) + (*str++);
		if ((x = _hash & 0xf0000000L) != 0)
		{
			_hash ^= (x >> 24);
			hash &= ~x;
		}
	}
	return (_hash & 0x7fffffff);
}

// BKDR Hash Function
unsigned int BKDRHash(char *str)
{
	unsigned int seed = 131; // 31 131 1313 13131 131313 etc
	unsigned int _hash = 0;

	while(*str)
	{
		_hash = _hash * seed + (*str++);
	}

	return (_hash & 0x7fffffff);
}

// BJB Hash Function
unsigned int DJBHash(char *str)
{
	unsigned int _hash = 5381;
	while (*str)
	{
		_hash += (_hash << 5) + (*str++);
	}
	return (_hash & 0x7fffffff);
}

// AP Hash Function
unsigned int APHash(char *str)
{
	unsigned int _hash = 0;
	int i;
	for (int i = 0; *str; i++)
	{
		if ((i & 1) == 0)
		{
			_hash ^= ((_hash << 7) ^ (*str++) ^ (_hash >> 3));
		}
		else
		{
			_hash ^= (~((_hash << 11) ^ (*str++) ^ (_hash >> 5)));
		}
	}
	return (_hash & 0x7fffffff);
}

int main()
{

}
