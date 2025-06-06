#include <cstddef>
#include "Iterator.h"

class IList {
	virtual void pushAt(IIterator&, const int&) = 0;

	virtual void deleteAt(IIterator&) = 0;

	virtual IIterator& find(const int&) = 0;

	virtual void clear() = 0;

	virtual bool isEmpty() = 0;

	virtual size_t getCount() const = 0;

	virtual IIterator& iterator() = 0;
};