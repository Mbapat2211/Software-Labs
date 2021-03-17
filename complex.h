#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

//class declaration

class complex
{
    private:
        int real_no;
        int img_no;

    public:
        complex();
        complex(const int&);
        complex(const int&, const int&);

        void getdata();
        void show();
        void sum(complex, complex);
};

#endif // COMPLEX_H_INCLUDED
