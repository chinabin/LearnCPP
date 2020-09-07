#ifndef __FATDOG_SINGLETON_H
#define __FATDOG_SINGLETON_H

namespace fatdog{
template<class T, class X = void, int N = 0>
class Singleton
{
public:
    static T* GetInstance()
    {
        static T v;
        return &v;
    }
};

template<class T, class X = void, int N = 0>
class SingletonPtr
{
    static std::shared_ptr<T> GetInstance()
    {
        static std::shared_ptr<T> v(new T);
        return v;
    }
};

}

#endif