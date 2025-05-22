union uuu{
    int a;
    int b;
};

int main() {

    union uuu var;
    var.a = 90;
    union uuu *p = &var;
    printf("%d, %c", p->a, p->b);
    return 0;
}


//output: 90, Z
