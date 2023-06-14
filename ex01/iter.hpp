#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template < typename T >
T loco(T &num){return ++num;}

template < typename T, typename Z >
void	iter(T* arr, Z len, T(*loco)(T&))
{
	Z i = -1;
	while (++i < len)
		arr[i] = loco(arr[i]);
}

#endif