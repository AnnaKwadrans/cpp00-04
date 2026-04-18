#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
    public:

        int     publicint;

        Sample(void);
        ~Sample(void);

        void    publicbar(void) const;
    
    private:

        int     _privateint;

        void    _privatebar(void) const;

};

#endif
