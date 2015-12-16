#include <inttypes.h>

class DoEvery
{
public:
    DoEvery(long);
    void reset();
    bool check();
    bool before(double);
private:
    unsigned long period;
    unsigned long lastTime;
};
