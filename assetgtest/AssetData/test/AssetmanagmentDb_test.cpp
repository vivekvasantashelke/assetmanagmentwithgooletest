#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "assetmanagerdbservice.h"
#include "assetmanagerinformation.h"
#include <QDebug>
#include"AssetManagerDBServiceInterface.h"
#include"assetmanagerdbservice.h"
AssetManagerInformation *p=new AssetManagerInformation();


 //qDebug()<<"in test DB"<<fd;


//TEST(AssetmanagmentDb_test,ischeckassetImagefillornot)
//{
//AssetManagerInformation *p=new AssetManagerInformation();
//AssetManagerDBServiceInterface  *ptrDB = AssetManagerDBService::CreateInstance();
// QString fd=ptrDB->AssetImagedb();
//EXPECT_EQ(true,p->checkassetImage(fd));
//}


TEST(AssetmanagmentDb_test,ischeckassetImagefillornot)
{
   const bool expectedDbConnection=true;
    QMap<QString,QString> m;
    m.insert("imagedata","i");
EXPECT_EQ(expectedDbConnection,p->Savedatafortestcase(m));
EXPECT_EQ(m["imagedata"],p->assetimage((m["imagedata"])));
}


//TEST(AssetmanagmentDb_test,ischeckassetLocationfillornot)
//{
//AssetManagerInformation *p=new AssetManagerInformation();
//AssetManagerDBServiceInterface  *ptrDB = AssetManagerDBService::CreateInstance();
// QString fd=ptrDB->AssetLocationdb();
//EXPECT_EQ(true,p->checkassetLocation(fd));
//}

TEST(AssetmanagmentDb_test,ischeckassetLocationfillornot)
{
   const bool expectedDbConnection=true;
    QMap<QString,QString> m;
    m.insert("Location","l");
EXPECT_EQ(expectedDbConnection,p->Savedatafortestcase(m));
EXPECT_EQ(m["Location"],p->assetlocation((m["Location"])));
}


//TEST(AssetmanagmentDb_test,ischeckassetSitefillornot)
//{
//AssetManagerInformation *p=new AssetManagerInformation();
//AssetManagerDBServiceInterface  *ptrDB = AssetManagerDBService::CreateInstance();
// QString fd=ptrDB->AssetSitedb();
//EXPECT_EQ(true,p->checkassetSite(fd));
//}
TEST(AssetmanagmentDb_test,ischeckassetSitefillornot)
{
   const bool expectedDbConnection=true;
    QMap<QString,QString> m;
    m.insert("Site","s");
EXPECT_EQ(expectedDbConnection,p->Savedatafortestcase(m));
EXPECT_EQ(m["Site"],p->aseetsite((m["Site"])));
}


//TEST(AssetmanagmentDb_test,ischeckassetConditionfillornot)
//{
//AssetManagerInformation *p=new AssetManagerInformation();
//AssetManagerDBServiceInterface  *ptrDB = AssetManagerDBService::CreateInstance();
// QString fd=ptrDB->AssetConditiondb();
//EXPECT_EQ(true,p->checkassetCondition(fd));
//}

TEST(AssetmanagmentDb_test,ischeckassetConditionfillornot)
{
   const bool expectedDbConnection=true;
    QMap<QString,QString> m;
    m.insert("Condition","c");
EXPECT_EQ(expectedDbConnection,p->Savedatafortestcase(m));
EXPECT_EQ(m["Condition"],p->assetcondition((m["Condition"])));
}

//TEST(AssetmanagmentDb_test,ischeckassetSerialNumberfillornot)
//{
//AssetManagerInformation *p=new AssetManagerInformation();
//AssetManagerDBServiceInterface  *ptrDB = AssetManagerDBService::CreateInstance();
// QString fd=ptrDB->AssetSerialnumberdb();
//EXPECT_EQ(true,p->checkassetSerialNumber(fd));
//}
TEST(AssetmanagmentDb_test,ischeckassetSerialNumberfillornot)
{
   const bool expectedDbConnection=true;
    QMap<QString,QString> m;
    m.insert("SerialNumber","sn");
EXPECT_EQ(expectedDbConnection,p->Savedatafortestcase(m));
EXPECT_EQ(m["SerialNumber"],p->assetserialnumber((m["SerialNumber"])));
}


//TEST(AssetmanagmentDb_test,ischeckassetModelfillornot)
//{
//AssetManagerInformation *p=new AssetManagerInformation();
//AssetManagerDBServiceInterface  *ptrDB = AssetManagerDBService::CreateInstance();
// QString fd=ptrDB->AssetModeldb();
//EXPECT_EQ(true,p->checkassetModel(fd));
//}


TEST(AssetmanagmentDb_test,ischeckassetModelfillornot)
{
   const bool expectedDbConnection=true;
    QMap<QString,QString> m;
    m.insert("Model","mod");
EXPECT_EQ(expectedDbConnection,p->Savedatafortestcase(m));
EXPECT_EQ(m["Model"],p->assetmodel((m["Model"])));
}

//TEST(AssetmanagmentDb_test,ischeckassetManufacturerfillornot)
//{
//AssetManagerInformation *p=new AssetManagerInformation();
//AssetManagerDBServiceInterface  *ptrDB = AssetManagerDBService::CreateInstance();
// QString fd=ptrDB->AssetManufacturerdb();
//EXPECT_EQ(true,p->checkassetManufacturer(fd));
//}




TEST(AssetmanagmentDb_test,ischeckassetManufacturerfillornot)
{
   const bool expectedDbConnection=true;
    QMap<QString,QString> m;
    m.insert("Manufacturer","m");
EXPECT_EQ(expectedDbConnection,p->Savedatafortestcase(m));
EXPECT_EQ(m["Manufacturer"],p->assetmanufacture((m["Manufacturer"])));
}

//TEST(AssetmanagmentDb_test,ischeckassetownerfillornot)
//{
//AssetManagerInformation *p=new AssetManagerInformation();
//AssetManagerDBServiceInterface  *ptrDB = AssetManagerDBService::CreateInstance();
// QString fd=ptrDB->AssetOwnerdb();
//EXPECT_EQ(true,p->checkassetOwner(fd));
//}

TEST(AssetmanagmentDb_test,ischeckassetownerfillornot)
{
   const bool expectedDbConnection=true;
    QMap<QString,QString> m;
    m.insert("Owner","o");
EXPECT_EQ(expectedDbConnection,p->Savedatafortestcase(m));
EXPECT_EQ(m["Owner"],p->assetowner((m["Owner"])));
}

//TEST(AssetmanagmentDb_test,ischeckassetdescriptionfillornot)
//{
//AssetManagerInformation *p=new AssetManagerInformation();
//AssetManagerDBServiceInterface  *ptrDB = AssetManagerDBService::CreateInstance();
// QString fd=ptrDB->AssetDescriptiondb();
//EXPECT_EQ(true,p->checkassetDescription(fd));
//}

TEST(AssetmanagmentDb_test,ischeckassetdescriptionfillornot)
{
   const bool expectedDbConnection=true;
    QMap<QString,QString> m;
    m.insert("Description","d");
EXPECT_EQ(expectedDbConnection,p->Savedatafortestcase(m));
EXPECT_EQ(m["Description"],p->assetdescription((m["Description"])));
}


//TEST(AssetmanagmentDb_test,ischeckingassettypefillornot)
//{
////AssetManagerInformation *p=new AssetManagerInformation();
////AssetManagerDBServiceInterface  *ptrDB = AssetManagerDBService::CreateInstance();
//// QString fd=ptrDB->AssetTYpedb();
//    const bool expectedDbConnection=true;

//    QMap<QString,QString> m;
//    m.insert("AssetType","at");
//EXPECT_EQ(expectedDbConnection,p->Savedata(m));
//EXPECT_EQ(m["AssetType"],p->checkassetType(m["AssetType"]));
//}




TEST(AssetmanagmentDb_test,ischeckingassettypefillornot)
{
   const bool expectedDbConnection=true;
    QMap<QString,QString> m;
    m.insert("AssetType","at");
EXPECT_EQ(expectedDbConnection,p->Savedatafortestcase(m));
EXPECT_EQ(m["AssetType"],p->assetype((m["AssetType"])));
}



//TEST(AssetmanagmentDb_test,ischeckingassetnamefillornot)
//{
//  // const bool expectedDbConnection=true;
////AssetManagerDBService obj(expectedDbConnection);
//AssetManagerInformation *p=new AssetManagerInformation();
//AssetManagerDBServiceInterface  *ptrDB = AssetManagerDBService::CreateInstance();
// QString fd=ptrDB->dbData();
////qDebug()<<p->assetname("","");

//EXPECT_EQ(true,p->checkAssetName(fd));
//}




TEST(AssetmanagmentDb_test,whenDBisConectedthencheckDBconnection)
{
   const bool expectedDbConnection=true;
AssetManagerDBService obj(expectedDbConnection);
//AssetManagerInformation *p=new AssetManagerInformation();
EXPECT_EQ(expectedDbConnection,obj.IsDBconnected());
}


TEST(AssetmanagmentDb_test,whenDBisnotConectedthencheckDBconnection)
{
   const bool expectedDbConnection=false;
AssetManagerDBService obj(expectedDbConnection);
EXPECT_EQ(expectedDbConnection,obj.IsDBconnected());
}



//TEST(AssetmanagmentDb_test,whenDBismapConectedthencheckDBconnection)
//{

//    const bool expectedDbConnection=true;
// AssetManagerDBService *obj= AssetManagerDBService::CreateInstance();
//    EXPECT_EQ(expectedDbConnection,obj->passMap());
//}


TEST(AssetmanagmentDb_test,ischeckingistableCreatedornot)
{
   const bool expectedDbConnection=true;
AssetManagerDBService obj(expectedDbConnection);
EXPECT_EQ(expectedDbConnection,obj.createTable());
}

TEST(AssetmanagmentDb_test,isdatabaseopen)
{
   const bool expectedDbConnection=true;
AssetManagerDBService *obj= AssetManagerDBService::CreateInstance();
   EXPECT_EQ(expectedDbConnection,obj->isDBopen());
}


//TEST(AssetManagement1,whenassetnamefiledthenok)
//{
//   const bool expectedConnection=true;
//AssetManagerInformation obj(expectedConnection);
////AssetManagerInformation obj=new AssetManagerInformation();

//EXPECT_EQ(expectedConnection,obj.IsDBconnected());
//}
TEST(AssetmanagmentDb_test,ischeckingassetnamefillornot)
{
   const bool expectedDbConnection=true;
    QMap<QString,QString> m;
    m.insert("AssetName","an");
EXPECT_EQ(expectedDbConnection,p->Savedatafortestcase(m));
EXPECT_EQ(m["AssetName"],p->assetname((m["AssetName"])));
}
