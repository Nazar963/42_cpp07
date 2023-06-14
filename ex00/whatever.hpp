#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template < typename T >
void swap(T &a, T &b)
{
	T v;

	v = a;
	a = b;
	b = v;
}

template < typename N >
N	min(N a, N b) {return (a < b) ? a : b;}

template < typename Z >
Z	max(Z a, Z b) {return (a > b) ? a : b;}

#endif