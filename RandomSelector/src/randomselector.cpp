#include "randomselector.h"
#include "ui_randomselector.h"

RandomSelector::RandomSelector(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::RandomSelector)
{
    m_ui->setupUi(this);
}

RandomSelector::~RandomSelector() = default;
