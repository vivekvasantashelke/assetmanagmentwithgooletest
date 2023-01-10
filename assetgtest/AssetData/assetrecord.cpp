#include "assetrecord.h"
#include "ui_assetrecord.h"
#include<QSqlQuery>
#include<QSqlRecord>
#include<QSqlQueryModel>
#include<QMessageBox>
#include<QStandardItem>
#include<iostream>

using namespace std;
AssetRecord::AssetRecord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AssetRecord)
{
    ui->setupUi(this);
}


AssetRecord::~AssetRecord()
{
    delete ui;
}

void AssetRecord::tabledata()
{
    show();
    ptr->databaseobj.open();
    QSqlQuery *query=new QSqlQuery(ptr->databaseobj);
    query->prepare("select * from AssetInformation");
    query->exec();
    model->setQuery (*query);
    ui->tableView->setModel(model);
    ptr->databaseobj.close();
}


void AssetRecord::on_pushButton_clicked()
{
    int columns=model->columnCount();
    if(ui->tableView->selectionModel()->currentIndex().row()<0)
    {
        QMessageBox::warning(this,"select","Please select AssetName Or AssetID");
    }
    else
    {
    QString numberarr[100] ;
    for (int i = 0; i <columns; i++)
       {
    numberarr [i]= ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),i)).toString();
       }
    AssetReport *p=new AssetReport();
    if( p->makepdf(columns,numberarr)==true)
    {
     QMessageBox::information(this,"Information","PDF Generated....");
    }
    }
}



void AssetRecord::on_back_clicked()
{
    AssetMainWindow *p=new AssetMainWindow;

//connect(ui->back,SIGNAL(clicked()),p,SLOT(Save));
//connect(ui->back,SIGNAL(clicked()),this,SLOT(Close()));
connect(ui->back,SIGNAL(clicked()),p,SLOT(Show_window()));
connect(ui->back,&QPushButton::clicked,this,&AssetRecord::Close_window);
}

void AssetRecord::Close_window()
{
    close();
}

void AssetRecord::show_function()
{
show();
}

