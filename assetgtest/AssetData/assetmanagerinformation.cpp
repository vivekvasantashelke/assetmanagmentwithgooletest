#include "assetmanagerinformation.h"
#include<QDebug>
//#include"assetmainwindow.h"
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QStandardItem>
#include<QSqlQuery>
#include<QSqlRecord>
#include"AssetManagerDBServiceInterface.h"
#include"assetmanagerdbservice.h"
QMap<QString, QString> storedge;
 AssetManagerDBServiceInterface  *ptrDB = AssetManagerDBService::CreateInstance();
 unique_ptr<AssetManagerDBService> ptrr=unique_ptr<AssetManagerDBService>(AssetManagerDBService::CreateInstance());
  QSqlQueryModel *model=new QSqlQueryModel();
AssetManagerInformation::AssetManagerInformation()
{
//ptrDB->createTable("F:/vivek/AssetManagement2/AssetManagement2.db");
}

bool AssetManagerInformation::Savedata(QMap<QString, QString> data)
{
    //ptrDB->isDBopen();
    storedge=data;
   ptrDB->passMap(storedge);
//ptrr->dbData();
  storedge.clear();
  data.clear();
  ptrDB->dbData();
}

QString AssetManagerInformation::assetname(QString i)
{

//    storage.insert(i,j);
    qDebug()<<"infun--"<<DMAP["AssetName"];
    return DMAP["AssetName"];
}

QString AssetManagerInformation::assetype(QString i)
{
   // storage.insert(i,j);
    return DMAP["AssetType"];
}

QString AssetManagerInformation::assetdescription(QString i)
{
//storage.insert(i,j);
     return DMAP["Description"];
}

QString AssetManagerInformation::assetowner(QString i)
{
//storage.insert(i,j);
     return DMAP["Owner"];
}

QString AssetManagerInformation::assetmanufacture(QString i)
{
//storage.insert(i,j);
     return DMAP["Manufacturer"];
}

QString AssetManagerInformation::assetmodel(QString i)
{
//storage.insert(i,j);
     return DMAP["Model"];
}

QString AssetManagerInformation::assetserialnumber(QString i)
{
//storage.insert(i,j);
     return DMAP["SerialNumber"];
}

QString AssetManagerInformation::assetcondition(QString i)
{
//storage.insert(i,j);
     return DMAP["Condition"];
}

QString AssetManagerInformation::aseetsite(QString i)
{
//storage.insert(i,j);
     return DMAP["Site"];
}

QString AssetManagerInformation::assetlocation(QString i)
{
   // storage.insert(i,j);
     return DMAP["Location"];
}

QString AssetManagerInformation::assetimage(QString i)
{
   // storage.insert(i,j);
     return DMAP["imagedata"];

}

bool AssetManagerInformation::Savedatafortestcase(QMap<QString, QString> data)
{
    DMAP=data;
    if(DMAP.empty()==0)
    {
        return true;
    }
    else
        return false;
}


bool AssetManagerInformation::checkAssetName(QString testasset)
{
 QString fd=ptrDB->dbData();

 if(fd==testasset)
 return true;
 else
 return false;

}

bool AssetManagerInformation::checkassetType(QString at)
{
    QString fd=ptrDB->AssetTYpedb();

    if(fd==at)
    return true;
    else
        return false;
}

bool AssetManagerInformation::checkassetDescription(QString d)
{
    QString fd=ptrDB->AssetDescriptiondb();

    if(fd==d)
    return true;
    else
    return false;

}

bool AssetManagerInformation::checkassetSerialNumber(QString sn)
{
    QString fd=ptrDB->AssetSerialnumberdb();

    if(fd==sn)
    return true;
    else
        return false;
}

bool AssetManagerInformation::checkassetManufacturer(QString m)
{
    QString fd=ptrDB->AssetManufacturerdb();

    if(fd==m)
    return true;
    else
        return false;
}

bool AssetManagerInformation::checkassetModel(QString mo)
{
    QString fd=ptrDB->AssetModeldb();

    if(fd==mo)
    return true;
    else
        return false;
}

bool AssetManagerInformation::checkassetOwner(QString o)
{
    QString fd=ptrDB->AssetOwnerdb();

    if(fd==o)
    return true;
    else
        return false;
}

bool AssetManagerInformation::checkassetCondition(QString c)
{
    QString fd=ptrDB->AssetConditiondb();

    if(fd==c)
    return true;
    else
        return false;
}

bool AssetManagerInformation::checkassetSite(QString s)
{
    QString fd=ptrDB->AssetSitedb();

    if(fd==s)
    return true;
    else
        return false;
}

bool AssetManagerInformation::checkassetLocation(QString l)
{
    QString fd=ptrDB->AssetLocationdb();

    if(fd==l)
    return true;
    else
        return false;
}

bool AssetManagerInformation::checkassetImage(QString i)
{
    QString fd=ptrDB->AssetImagedb();

    if(fd==i)
    return true;
    else
    return false;
}




