#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib> 

template <typename T>
class Array
{
	private:
		T* arr;
		int size;

	public:
		Array() : arr(0), size(0){}
		Array(unsigned int n) : arr(new T[n]), size(n) {}
		Array(Array& copy) : arr(new T[copy.size]), size(copy.size)
		{
			for(int i = 0; i < size; i++)
				arr[i] = copy.arr[i];
		}
		Array& operator=(Array& other)
		{
			if (this != &other)
			{
				delete[] arr;
				arr = new T[other.size];
				size = other.size;
				for(int i = 0; i < size; i++)
					arr[i] = other.arr[i];
			}
			return (*this);
		}

		T& operator[](int index)
		{
			// try
			// {
				if (index >= size || index < 0) 
					throw std::exception();
				return (arr[index]);
				// else
					// return (arr[index]);
			// }
			// catch (std::exception& e)
			// {
			// 	std::cout << "index is out of range " << e.what() << std::endl;
			// 	return (0);
			// }
			// return (arr[index]);
		}
		
		unsigned int getSize() const 
		{
			return size;
		}
		~Array() { delete[] arr; }
};

#endif