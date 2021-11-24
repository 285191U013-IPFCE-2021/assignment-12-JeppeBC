#include "duration.hpp"
#include <assert.h>

// a) get duration
int Duration::getDuration()
{
    return time;
}

// b) constructer
Duration :: Duration()
{
    time=0;
}

// c) time = t
Duration :: Duration(int t)
{
    assert(time >= 0);
    time = t;
}

// e) tick adds 1 to time
bool Duration::tick()
{
    time++;
    if (time > alarm)
        return true;
    else
        return false;
}

//f)
bool Duration :: tick(int dt)
{
    assert(dt >= 0);
    time=time+dt;
    if (time > alarm)
        return true;
    else
        return false;
}

// g)
void Duration :: setAlarm(int t)
{
    assert(t > time);
    alarm = t;
}

bool Duration :: checkAndUpdateAlarm()
{
    if (time > alarm)
    {
        setAlarm(NULL);
        return true;
    }
    else
        return false;

}

void Duration :: Attribute(int t)
{
    assert(t >= 0);
    time = t;
}

bool Duration :: alarmHasBeenSet()
{
    if(alarm == NULL)
        return false;
    else
        return true;
}

Duration :: ~Duration(){}