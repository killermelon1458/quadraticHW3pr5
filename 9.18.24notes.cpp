class bob{
    private:
        int data;
    public:
        bob() : data(66) {}
        int get() {return (*this).data;}
        void set(int newdata) {
            (*this).data = newdata;
            return;
            }

};

void set_value(int* pts2Val, int newVal){
    *pts2val = newVal
}
int main(){
    bob b;
    std::cout << b.get() << std::end1;
    b.set(42);
    std::cout << b.get() << std::end1;
    bob  ab(17, 25);
    std::cout << ab.get() << std::end1;
    
    return 0;
}