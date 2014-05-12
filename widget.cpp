#include "widget.h"
#include "ui_widget.h"
#include "QMessageBox"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode (QLineEdit::Password);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_lineEdit_textChanged(const QString &arg1)
{
    s1 = arg1;
}

void Widget::on_lineEdit_2_textChanged(const QString &arg1)
{
    s2 = arg1;
}

void Widget::on_pushButton_clicked()
{
    if(s1==s2&&s1 !=""&&s2 != "")
    {
        QWidget* yanan = new QWidget();
        yanan->show ();
//        this->hide ();
//         QMessageBox p;
//         p.setText(tr("success!"));
//         p.exec();
     }
     else
    {
         QMessageBox p;
         p.setText(tr("fail!"));
         p.exec();
         ui->lineEdit_2->clear();
     }

}
