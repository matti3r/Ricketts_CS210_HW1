#pragma once
template <typename Object>
class Queue
{
public:
    bool isEmpty() const
    {
        return theList.size() == 0;
    }
    const Object& getFront() const
    {
        return theList.front();
    }
    void enqueue(const Object& x)
    {
        theList.push_back(x);
    }
    Object& dequeue()
    {
        Object retVal = theList.front();
        theList.remove(theList.begin());
        return retVal;
    }
private:
    List<Object> theList;
};
