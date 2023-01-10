#include "assetreport.h"
#include<QPdfWriter>
#include<QPainter>
#include<QMap>
#include<QDebug>

AssetReport::AssetReport()
{

}

bool AssetReport::makepdf(int columns,QString v[])
{
bool success=true;
      for(int i=0;i<columns;i++)
    {
        data[i]=v[i];

    }
    QPdfWriter pdf("C:/he8v3/asset/AssetManagement2.pdf");
    QPainter painter(&pdf);
    painter.drawText(2400,1900,"AssetManagement");
    painter.drawText(1000,2800,"AssetID     :");
    painter.drawText(2000,2800,data[0]);
    painter.drawText(1000,3300,"AssetName   :");
    painter.drawText(2000,3300,data[1]);
    painter.drawText(1000,3800,"AssetType   :");
    painter.drawText(2000,3800,data[2]);
    painter.drawText(1000,4300,"Description :");
    painter.drawText(2000,4300,data[3]);
    painter.drawText(1000,4800,"Serial Number  :");
    painter.drawText(2100,4800,data[4]);
    painter.drawText(1000,5300,"Manufacturer   :");
    painter.drawText(2100,5300,data[5]);
    painter.drawText(1000,5800,"Model   :");
    painter.drawText(2000,5800,data[6]);
    painter.drawText(1000,6300,"Owner   :");
    painter.drawText(2000,6300,data[7]);
    painter.drawText(1000,6800,"Condition   :");
    painter.drawText(2000,6800,data[8]);
    painter.drawText(1000,7300,"Site    :");
    painter.drawText(2000,7300,data[9]);
    painter.drawText(1000,7800,"Location    :");
    painter.drawText(2000,7800,data[10]);
    painter.drawText(1000,8300,"imagepath   :");
    painter.drawText(2000,8300,data[11]);
    QPixmap pix2(data[11]);
    painter.drawPixmap(7300,500,pix2);

    return success;
}

