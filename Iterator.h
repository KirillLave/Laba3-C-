class IIterator {
	virtual void start() = 0;

	virtual int getElement() = 0;

	virtual void next() = 0;

	virtual bool finish() = 0;
};
