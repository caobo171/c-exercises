#ifndef box_h
#define box_h

struct box
{
    public:
        int width;
        int height;
        int length;
    int volume(int width, int height, int length){
        return width * height * length;
    }
    /* data */
};


#endif box_h