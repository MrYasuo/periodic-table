#include "elementbox.h"
#include "ui_elementbox.h"

ElementBox::ElementBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ElementBox)
{
    ui->setupUi(this);
}

ElementBox::~ElementBox()
{
    delete ui;
}
