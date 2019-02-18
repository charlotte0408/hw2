#include "grade_calculator.h"
#include "ui_grade_calculator.h"

grade_calculator::grade_calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::grade_calculator)
{
    ui->setupUi(this);
    score = 0;
    connect(ui->radioButton,SIGNAL(clicked()),this,SLOT(schemaA()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(display()));
}

grade_calculator::~grade_calculator()
{
    delete ui;
}

void grade_calculator::schemaA()
{
    int hw1 = ui->spinBox->value();
    int hw2 = ui->spinBox_2->value();
    int hw3 = ui->spinBox_3->value();
    int hw4 = ui->spinBox_4->value();
    int hw5 = ui->spinBox_5->value();
    int mid1 = ui->spinBox_8->value();
    int mid2 = ui->spinBox_9->value();
    int final = ui->spinBox_10->value();
    score = (hw1+hw2+hw3+hw4+hw5)*0.25+0.2*mid1+0.2*mid2+0.35*final;
}

void grade_calculator::display()
{
    ui->label->setText(QString::number(score));
}
