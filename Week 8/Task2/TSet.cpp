#include <iostream>

template <typename T>
class  Set
{
public:
	Set();
	Set(int _capacity);
	Set(const Set& other);
	Set& operator=(const Set& other);
	~Set();
	void add(T item);
	bool isEmpty();
	void print();
	bool contains(T item);
	int getCapacity();
	int getCurrentCount();
	T operator[](int index);
	bool operator<(Set<T> other);
	Set<T> operator+(Set<T> other);

private:
	T* set;
	int capacity;
	int currentCount;
	void copy(const Set& other);
	void destroy();
	void resize();
};



template<typename T>
Set<T>::Set()
{
	capacity = 10;
	currentCount = 0;
	set = new T[capacity];
}

template<typename T>
Set<T>::Set(int _capacity)
{
	capacity = _capacity;
	currentCount = 0;
	set = new T[capacity];
}

template<typename T>
Set<T>::Set(const Set& other)
{
	copy(other);
}

template<typename T>
Set<T>& Set<T>::operator=(const Set& other)
{
	if (this != &other)
	{
		destroy();
		copy(other);
	}

	return *this;
}

template<typename T>
Set<T>::~Set()
{
	destroy();
}

template<typename T>
void Set<T>::add(T item)
{
	resize();
	for (int i = 0; i < currentCount; i++)
	{
		if (contains(item))
		{
			std::cerr << "Set already contains item" << std::endl;
			return;
		}
	}
	set[currentCount] = item;
	currentCount++;
}

template<typename T>
bool Set<T>::isEmpty()
{
	return currentCount == 0;
}

template<typename T>
void Set<T>::print()
{
	if (!isEmpty())
	{
		for (int i = 0; i < currentCount; i++)
		{
			std::cout << set[i] << ' ';
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "Set is empty\n";
	}
}

template<typename T>
bool Set<T>::contains(T item)
{
	if (!isEmpty())
	{
		for (int i = 0; i < currentCount; i++)
		{
			if (set[i] == item)
			{
				return true;
			}
		}
	}

	return false;
}

template<typename T>
int Set<T>::getCapacity()
{
	return capacity;
}

template<typename T>
int Set<T>::getCurrentCount()
{
	return currentCount;
}

template<typename T>
T Set<T>::operator[](int index)
{
	if (index > capacity)
	{
		std::cerr << "Index out of bounds";
		return 0;
	}

	return set[index];
}

template<typename T>
void Set<T>::copy(const Set& other)
{
	capacity = other.capacity;
	currentCount = other.currentCount;
	set = new T[capacity];
	for (int i = 0; i < currentCount; i++)
	{
		set[i] = other.set[i];
	}
}

template<typename T>
void Set<T>::destroy()
{
	capacity = 0;
	currentCount = 0;
	delete[] set;
}

template<typename T>
void Set<T>::resize()
{
	if (capacity == currentCount)
	{
		capacity *= 2;

		T* temp = new T[capacity];
		for (int i = 0; i < currentCount; i++)
		{
			temp[i] = set[i];
		}

		delete[] set;
		set = temp;
	}
}

template<typename T>
Set<T> Set<T>::operator+(Set<T> other)
{
	if (isEmpty())
	{
		return other;
	}
	if (other.isEmpty())
	{
		return *this;
	}
	int newCapacity = currentCount + other.currentCount;
	Set<T> newSet(newCapacity);

	for (int i = 0; i < newCapacity; i++)
	{
		if (i < currentCount)
		{
			newSet.add(set[i]);
		}
		if (i < other.currentCount)
		{
			newSet.add(other[i]);
		}
	}

	return newSet;
}

template<typename T>
bool Set<T>::operator<(Set<T> other) {
	if (isEmpty())
	{
		return true;
	}
	if (other.isEmpty())
	{
		return false;
	}

	for (int i = 0; i < capacity; i++)
	{
		if (!other.contains(set[i]))
		{
			return false;
		}
	}

	return true;
}