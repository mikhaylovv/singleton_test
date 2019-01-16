template<class T>
class Singleton
{
    Singleton() = default;
    Singleton(const Singleton &) = delete;
    Singleton(Singleton &&) = delete;
    Singleton & operator = (const Singleton &) = delete;
    Singleton & operator = (Singleton &&) = delete;
    
public:
    static T * getInstance() {
        static Singleton sin;
        return &sin.data;
    }
    
private:
    T data;
};

// Singleton<logger *>::getInstance() = new logger();