
int g_vars;

class SomeClass {
public:
    SomeClass() {}
    int pub;
    int get_g_var(){
        return g_vars;
    }
private:
    int priv;
};
