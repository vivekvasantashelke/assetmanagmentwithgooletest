#ifndef ASSETMANAGERINTERFACE_H
#define ASSETMANAGERINTERFACE_H

#include<iostream>
#include<QString>
class AssetManagerinterface
{
public:

     virtual bool Savedata(QMap<QString,QString>)=0;
     virtual QString assetname(QString)=0;
     virtual QString assetype(QString)=0;
     virtual QString assetdescription(QString)=0;
     virtual QString assetowner(QString)=0;
     virtual QString assetmanufacture(QString)=0;
     virtual QString assetmodel(QString)=0;
     virtual QString assetserialnumber(QString)=0;
     virtual QString assetcondition(QString)=0;
     virtual QString aseetsite(QString)=0;
     virtual QString assetlocation(QString)=0;
     virtual QString assetimage(QString)=0;

    virtual bool Savedatafortestcase(QMap<QString,QString>)=0;

    virtual bool checkAssetName(QString)=0;
    virtual bool checkassetType(QString)=0;
    virtual bool checkassetDescription(QString)=0;
    virtual bool checkassetSerialNumber(QString)=0;
    virtual bool checkassetManufacturer(QString)=0;
    virtual bool checkassetModel(QString)=0;
    virtual bool checkassetOwner(QString)=0;
    virtual bool checkassetCondition(QString)=0;
    virtual bool checkassetSite(QString)=0;
    virtual bool checkassetLocation(QString)=0;
    virtual bool checkassetImage(QString)=0;



};

#endif // ASSETMANAGERINTERFACE_H
