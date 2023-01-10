#pragma once
#include<iostream>
#include<QString>
  class AssetManagerDBServiceInterface
{
  public:
       virtual bool passMap(QMap<QString,QString>)=0;
       virtual bool createTable()=0;
        virtual bool isDBopen()=0;

       virtual QString dbData()=0;
       virtual QString AssetTYpedb()=0;
       virtual QString AssetDescriptiondb()=0;
       virtual QString AssetSerialnumberdb()=0;
       virtual QString AssetManufacturerdb()=0;
       virtual QString AssetModeldb()=0;
       virtual QString AssetOwnerdb()=0;
       virtual QString AssetConditiondb()=0;
       virtual QString AssetSitedb()=0;
       virtual QString AssetLocationdb()=0;
       virtual QString AssetImagedb()=0;


  };
