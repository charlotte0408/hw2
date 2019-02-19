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
    void compute();
    void course(int index);

private:
    Ui::grade_calculator *ui;
    double score;
    int course_num;
    int schema_num;
};

#endif // GRADE_CALCULATOR_H
