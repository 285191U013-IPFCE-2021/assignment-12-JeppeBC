#ifndef _duration_H_
#define _duration_H_

class Duration
{
    private:
        int time;
        int alarm;
        bool checkAndUpdateAlarm();
    
    public:
        Duration();
        ~Duration();

    bool alarmHasBeenSet();
    int getDuration();
    Duration(int t);
    bool tick();
    bool tick(int dt);
    void setAlarm(int t);
    void Attribute(int t);

};

#endif