#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
    public:

        Sample(void);
        ~Sample(void);

        int     getfoo(void) const;
        void    setfoo(int i);

    private:

        int     _foo;

};

#endif
