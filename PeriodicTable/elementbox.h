#ifndef ELEMENTBOX_H
#define ELEMENTBOX_H

#include <QWidget>

namespace Ui {
class ElementBox;
}

class ElementBox : public QWidget
{
    Q_OBJECT

public:
    explicit ElementBox(QWidget *parent = nullptr);
    ~ElementBox();

private:
    Ui::ElementBox *ui;
};

#endif // ELEMENTBOX_H
