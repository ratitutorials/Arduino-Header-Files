
#ifndef fan_h
#define fan_h


class fclass
{
  public:
    fclass();
    void SETUP();
    void SPEED(int fan_speed);
    int rotation();

};

extern fclass fan;

#endif
