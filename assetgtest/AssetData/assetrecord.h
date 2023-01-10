#ifndef ASSETRECORD_H
#define ASSETRECORD_H
#include"AssetManagerDBServiceInterface.h"
#include"assetmanagerdbservice.h"
#include "assetmainwindow.h"
#include <QDialog>
#include<assetreport.h>
#include<QSqlQueryModel>
#include<iostream>
using namespace std;
namespace Ui {
class AssetRecord;
}
class AssetRecord : public QDialog
{
    Q_OBJECT

public:
    explicit AssetRecord(QWidget *parent = nullptr);
    ~AssetRecord();
    void tabledata();
private slots:
    void on_pushButton_clicked();
    void on_back_clicked();

public slots:
void Close_window();
void show_function();
private:
    Ui::AssetRecord *ui;
    unique_ptr<AssetManagerDBService> ptr=unique_ptr<AssetManagerDBService>(AssetManagerDBService::CreateInstance());
    QSqlQueryModel *model=new QSqlQueryModel();

};

#endif // ASSETRECORD_H
