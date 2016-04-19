﻿#ifndef PPP_DATE_H
#define PPP_DATE_H

#include<QString>
#include<QVector>

class ppp_sate
{
public:
    ppp_sate();
    QString PRN;
    double position_x;
    double position_y;
    double position_z;
    double clock;
    double elevation;
    double azimuth;
    double P1;
    double P2;
    double L1;
    double L2;
    double trop_delay;
    double trop_map;
    double relativity;
    double sagnac;
    double tide_effect;
    double antenna_height;
    double antenna;
    double offsetL1;
    double offsetL2;
    double windup;
    double P3;
    double L3;

};

class ppp_epoch
{
public:
    ppp_epoch();
    int sate_number;
    int year;
    int month;
    int day;
    int hour;
    int minute;
    double second;
    double zhd;
    double GPSS;
    QVector<ppp_sate> sate_info;
};

class ppp_file
{
public:
    ppp_file();
    QVector<ppp_epoch> file;
};


#endif // PPP_DATE_H
