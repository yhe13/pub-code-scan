
int g_vars;

class SomeClass {
public:
    SomeClass() {
        pub = 0;
        g_vars = 123456;
    }
    int pub;
    int get_g_var(){
        return g_vars;
    }
private:
    int priv;
};
