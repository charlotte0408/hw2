#include "grade_calculator.h"
#include "ui_grade_calculator.h"

grade_calculator::grade_calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::grade_calculator)
{
    ui->setupUi(this);
    score = 0;
    connect(ui->radioButton,SIGNAL(clicked()),this,SLOT(schemaA()));
    connect(ui->radioButton_2,SIGNAL(clicked()),this,SLOT(schemaB()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(compute1()));
    connect(ui->radioButton_7,SIGNAL(clicked()), this, SLOT(schemaA()));
    connect(ui->radioButton_8,SIGNAL(clicked()), this, SLOT(schemaB()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(compute2()));
}

grade_calculator::~grade_calculator()
{
    delete ui;
}

void grade_calculator::schemaA()
{
    schema_num = 0;
}

void grade_calculator::schemaB()
{
    schema_num = 1;
}

void grade_calculator::compute1()
{
    int hw1 = ui->spinBox->value();
    int hw2 = ui->spinBox_3->value();
    int hw3 = ui->spinBox_4->value();
    int mid1 = ui->spinBox_10->value();
    int mid2 = ui->spinBox_9->value();
    int final = ui->spinBox_8->value();
    int mid = 0;
    if (course_num == 0)
        score = (hw1+hw2+hw3)/3*0.25+0.2*mid1+0.2*mid2+0.35*final;
    else {
        if (mid1 > mid2)
            mid = mid1;
        else
            mid = mid2;
        score = (hw1+hw2+hw3)/3*0.25+0.3*mid+0.44*final;
    }
    ui->label->setText(QString::number(score));
}

void grade_calculator::compute2()
{
    int hw1 = ui->spinBox_19->value();
    int hw2 = ui->spinBox_25->value();
    int hw3 = ui->spinBox_20->value();
    int hw4 = ui->spinBox_26->value();
    int hw5 = ui->spinBox_21->value();
    int mid1 = ui->spinBox_22->value();
    int mid2 = ui->spinBox_23->value();
    int final = ui->spinBox_24->value();
    int mid = 0;
    if (course_num == 0)
        score = (hw1+hw2+hw3+hw4+hw5)/5*0.25+0.2*mid1+0.2*mid2+0.35*final;
    else {
        if (mid1 > mid2)
            mid = mid1;
        else
            mid = mid2;
        score = (hw1+hw2+hw3+hw4+hw5)/5*0.25+0.3*mid+0.44*final;
    }
    ui->label_4->setText(QString::number(score));
}
