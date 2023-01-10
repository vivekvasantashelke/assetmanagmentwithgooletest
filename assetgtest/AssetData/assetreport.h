#ifndef ASSETREPORT_H
#define ASSETREPORT_H
#include<QString>
#include<QMap>
class AssetReport
{
public:
       AssetReport();
       bool makepdf(int,QString[]);
       QString data[100];
       QMap<QString,QString>map;
};

#endif // ASSETREPORT_H
