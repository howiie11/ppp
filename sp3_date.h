﻿#ifndef SP3_DATE_H
#define SP3_DATE_H

#include<QString>
#include<QVector>

class sp3_heard_date
{
public:
    sp3_heard_date();
    /*#c*/
    QString mode_flag;
    int year;
    int month;
    int day;
    int hour;
    int minute;
    double second;
    int number_of_epoch;
    QString data_use;           //数据类型
    QString coordinate_system;  //坐标参考系
    QString orbit_type;         //轨道类型
    QString agency;             //发布轨道的机构

    /*##*/
    int GPS_week_number;
    double second_of_week;
    double interval;
    int modified_JD;
    double fractional_day;

    /*+*/
    int number_of_satellites;
    QStringList satellites;

    /*++*/
    QVector<int> accuracy;      //卫星的精度 orbit Accuracy Exponents

    /*%c*/
    QString file_type;
    QString time_type;

    /*%f*/
    double p_v_base;            //Position & Veclocity Base
    double c_c_base;            //Clock Corrections Base
};

class sp3_sate_date
{
public:
    sp3_sate_date();
    QString flag;               //has position & velocity
    QString sate_info;
    double x;                   //position or velocity
    double y;
    double z;
    double clock;               //satellite clock or Rate-of-change
};

class sp3_epoch_date
{
public:
    sp3_epoch_date();
    int year;
    int month;
    int day;
    int hour;
    int minute;
    double second;
    QVector<sp3_sate_date> epoch;
};

class sp3_file
{
public:
    sp3_file();
    QVector<sp3_epoch_date> file;
};

#endif // SP3_DATE_H