#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
    public:

        Sample(int i);
        ~Sample(void);

        int getfoo(void) const;
        int compare(Sample * other) const; // parameter: address of another 
                                            //instance

    private:

        int _foo;

};

#endif
