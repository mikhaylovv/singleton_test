template<class T>
class __declspec( dllexport ) Singleton
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