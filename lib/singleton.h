#ifdef _WIN32
#define DLLEXPORT __declspec( dllexport )
#else
#define DLLEXPORT
#endif

template<class T>
class DLLEXPORT Singleton
{
    Singleton() = default;
    Singleton(const Singleton &) = delete;
    Singleton(Singleton &&) = delete;
    Singleton & operator = (const Singleton &) = delete;
    Singleton & operator = (Singleton &&) = delete;
    
public:
    static T * getInstance();
    
private:
    T data;
};