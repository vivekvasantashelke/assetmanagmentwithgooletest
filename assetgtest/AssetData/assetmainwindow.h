#ifndef ASSETMAINWINDOW_H
#define ASSETMAINWINDOW_H
#include<iostream>
#include <QMainWindow>
#include"AssetManagerInterface.h"
#include"assetmanagerinformation.h"
//#include "test/AssetmanagmentDb_test"

using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class AssetMainWindow; }
QT_END_NAMESPACE

class AssetMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    AssetMainWindow(QWidget *parent = nullptr);
    ~AssetMainWindow();

private slots:
    void on_site_currentIndexChanged(int index);
    void on_View_clicked();
    void on_Save_clicked();

public slots:
          void Save();
          void Update();
           void Close_window();
           void Show_window();


private:
    Ui::AssetMainWindow *ui;
  AssetManagerinterface *ptr=new AssetManagerInformation;
    QMap<QString,QString>v;
};
#endif // ASSETMAINWINDOW_H
