#ifndef GRADE_CALCULATOR_H
#define GRADE_CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class grade_calculator;
}

class grade_calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit grade_calculator(QWidget *parent = nullptr);
    ~grade_calculator();

public slots:
    void schemaA();
    void schemaB();
    void display();

private:
    Ui::grade_calculator *ui;
    double score;
};

#endif // GRADE_CALCULATOR_H
