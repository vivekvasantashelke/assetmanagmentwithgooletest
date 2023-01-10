
#include<QSqlQuery>
#include<qsqlrecord.h>
#include<QSqlError>
#include<QSqlDatabase>
#include<QSqlRecord>
#include<QByteArray>
#include<QBuffer>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QStandardItem>
#include<QSqlQuery>
#include<QSqlRecord>
#include "assetmanagerdbservice.h"
AssetManagerDBService *AssetManagerDBService::Singletoneptr=nullptr;

AssetManagerDBService *ptrr=AssetManagerDBService::CreateInstance();
 QSqlQueryModel *model=new QSqlQueryModel();

AssetManagerDBService::AssetManagerDBService(bool connectstatus)
    :Isconnected(connectstatus)
{

}

bool AssetManagerDBService::IsDBconnected()
{
    return Isconnected;
}

bool AssetManagerDBService::isDBopen()
{
   if(!databaseobj.isOpen())
          return true;
    else
       return false;

}

QString AssetManagerDBService::dbData()
{
    QString arr;

     QSqlQuery query("select * from AssetInformation");

        while (query.next()) {
            arr=query.value(1).toString();
        }

         return arr;
}

QString AssetManagerDBService::AssetTYpedb()
{
      QString at;
      QSqlQuery query("select * from AssetInformation");
      while (query.next()) {
          at=query.value(2).toString();
      }
      return at;
}

QString AssetManagerDBService::AssetDescriptiondb()
{
    QString at;
    QSqlQuery query("select * from AssetInformation");
    while (query.next()) {
        at=query.value(3).toString();
    }
    return at;
}

QString AssetManagerDBService::AssetSerialnumberdb()
{
    QString at;
    QSqlQuery query("select * from AssetInformation");
    while (query.next()) {
        at=query.value(4).toString();
    }
    return at;
}

QString AssetManagerDBService::AssetManufacturerdb()
{
    QString at;
    QSqlQuery query("select * from AssetInformation");
    while (query.next()) {
        at=query.value(5).toString();
    }
     return at;
}

QString AssetManagerDBService::AssetModeldb()
{
    QString at;
    QSqlQuery query("select * from AssetInformation");
    while (query.next()) {
        at=query.value(6).toString();
    }
      return at;
}

QString AssetManagerDBService::AssetOwnerdb()
{
    QString at;
    QSqlQuery query("select * from AssetInformation");
    while (query.next()) {
        at=query.value(7).toString();
    }
       return at;
}

QString AssetManagerDBService::AssetConditiondb()
{
    QString at;
    QSqlQuery query("select * from AssetInformation");
    while (query.next()) {
        at=query.value(8).toString();
    }
       return at;
}

QString AssetManagerDBService::AssetSitedb()
{
    QString at;
    QSqlQuery query("select * from AssetInformation");
    while (query.next()) {
        at=query.value(9).toString();
    }
      return at;
}

QString AssetManagerDBService::AssetLocationdb()
{
    QString at;
    QSqlQuery query("select * from AssetInformation");
    while (query.next()) {
        at=query.value(10).toString();
    }
      return at;
}

QString AssetManagerDBService::AssetImagedb()
{
    QString at;
    QSqlQuery query("select * from AssetInformation");
    while (query.next()) {
        at=query.value(11).toString();
    }
       return at;
}
AssetManagerDBService::AssetManagerDBService()
{
createTable();
}

AssetManagerDBService *AssetManagerDBService::CreateInstance()
{
  if(Singletoneptr==nullptr)
  {
      Singletoneptr=new AssetManagerDBService();
      return Singletoneptr;
  }
  else
  {
      return Singletoneptr;
  }
}


bool AssetManagerDBService::passMap(QMap<QString, QString> data)
{
    databaseobj.close();
    databaseobj.open();
    dbData();
   bool success = false;
   map=data;
   //map2=data;
    QString dat[100],dataid[100];

    int j=0,cnt=0;
    QMap<QString,QString>::Iterator i;
    for(i=map.begin();i!=map.end();j++,i++)
    {
      dat[j]=i.value();
     // qDebug()<<i.key();
       // ListName.removeAll(ListName[index]);
      dataid[j]=i.key();
      cnt++;
    }

    QSqlQuery queryAdd;
queryAdd.prepare("INSERT INTO AssetInformation (AssetName,AssetType,Description,SerialNumber,Manufacturer,Model,Owner,Condition,Site,Location,imagedata) values ('"+dat[0]+"','"+dat[1]+"','"+dat[3]+"','"+dat[8]+"','"+dat[5]+"','"+dat[6]+"','"+dat[7]+"','"+dat[2]+"','"+dat[9]+"','"+dat[4]+"','"+dat[10]+"')");

   queryAdd.bindValue(":AssetName",dat[0]);
   queryAdd.bindValue(":AssetType",dat[1]);
   queryAdd.bindValue(":Description",dat[3]);
   queryAdd.bindValue(":SerialNumber",dat[8]);
   queryAdd.bindValue(":Manufacturer",dat[5]);
   queryAdd.bindValue(":Model",dat[6]);
   queryAdd.bindValue(":Owner",dat[7]);
   queryAdd.bindValue(":Condition",dat[2]);
   queryAdd.bindValue(":Site",dat[9]);
   queryAdd.bindValue(":Location",dat[4]);
   queryAdd.bindValue(":imagedata",dat[10]);
  // queryAdd.exec();


 //  QSqlQuery q = db.exec("SELECT * FROM adt");


   if(queryAdd.exec())
      {
        qDebug()<<"exec success";
       success = true;
      }
      else if(!queryAdd.lastError().isValid())
    {
      // databaseobj.close();
//        queryAdd.clear();
//        databaseobj.open();
//        queryAdd.exec();
       qDebug() << "add AssetInformation failed: " << queryAdd.lastError();
      }

 //   if(!queryAdd.lastError().isValid())


 map.clear();
 data.clear();
// delete dat[0] ;

 for(int i=0;i<cnt;i++)
 {
     dat[i].clear();
  // dat[j]=i.value();
  // qDebug()<<i.key();
   // dat->removeAll(dat[i]);
  // dataid[j]=i.key();

 }
//queryAdd.clear();


 if(map.empty()&&data.empty())
 {
     qDebug()<<"dbmapisempty\n";
 }
 else
 {
     qDebug()<<"dbmapnot empty";
 }
    //  return success;
//success = false;
  databaseobj.close();
      return Isconnected;
}

bool AssetManagerDBService::createTable(){
    bool succes=true;
    databaseobj=QSqlDatabase::addDatabase("QSQLITE");
    databaseobj.setDatabaseName("C:/he8v3/asset/AssetManagement2.db");
    databaseobj.open();
    QSqlQuery query;
    query.prepare("CREATE TABLE AssetInformation(AssetID INTEGER PRIMARY KEY, AssetName TEXT,AssetType TEXT,Description TEXT,SerialNumber TEXT,Manufacturer TEXT,Model TEXT,Owner TEXT,Condition TEXT,Site TEXT,Location TEXT, imagedata BLOB);");

    if (!query.exec())
    {
        qDebug() << "Couldn't create the table 'people': one might already exist.";
        succes = false;
        return succes;
    }
     databaseobj.close();
}

