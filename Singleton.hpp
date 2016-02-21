//
// Created by jburzyns on 2/17/2016.
//

#ifndef SRENGINE_SINGLETON_HPP
#define SRENGINE_SINGLETON_HPP

namespace SREngine
{
    template <class T> class Singleton
    {
    public:
        inline Singleton();
        virtual inline ~Singleton();

        Singleton(const Singleton&) = delete;
        Singleton& operator= (const Singleton&) = delete;
    public:
        static inline T& Instance();
        static inline T* InstancePtr();
    private:
        static T* m_instance;
    };

    template <class T> T* Singleton<T>::m_instance = 0;
}


#endif //SRENGINE_SINGLETON_HPP
