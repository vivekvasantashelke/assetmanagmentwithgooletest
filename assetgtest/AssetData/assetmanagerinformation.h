#ifndef ASSETMANAGERINFORMATION_H
#define ASSETMANAGERINFORMATION_H

//#include"AssetManagerDBServiceInterface.h"
//#include"assetmanagerdbservice.h"
#include<assetreport.h>
#include<QMap>
#include "AssetManagerInterface.h"
#include<QSharedPointer>
#include<iostream>
using namespace std;
class AssetManagerInformation:public AssetManagerinterface
{
public:

     AssetManagerInformation();
      bool Savedata(QMap<QString,QString>);
      QString assetname(QString);
      QString assetype(QString);
      QString assetdescription(QString);
      QString assetowner(QString);
      QString assetmanufacture(QString);
      QString assetmodel(QString);
      QString assetserialnumber(QString);
      QString assetcondition(QString);
      QString aseetsite(QString);
      QString assetlocation(QString);
      QString assetimage(QString);
   bool Savedatafortestcase(QMap<QString,QString>);

      bool checkAssetName(QString);
      bool checkassetType(QString);
      bool checkassetDescription(QString);
      bool checkassetSerialNumber(QString);
      bool checkassetManufacturer(QString);
      bool checkassetModel(QString);
      bool checkassetOwner(QString);
      bool checkassetCondition(QString);
      bool checkassetSite(QString);
      bool checkassetLocation(QString);
      bool checkassetImage(QString);






private:
    //  AssetManagerDBServiceInterface  *ptrDB = AssetManagerDBService::CreateInstance();

   QMap<QString,QString> storage,DMAP;

};

#endif // ASSETMANAGERINFORMATION_H
