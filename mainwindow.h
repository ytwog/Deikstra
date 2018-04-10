#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QVector>
#include <QTextBrowser>
#include <QPair>
#include <QFileDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void GetMatrix(QString Filename);

    bool compileText();

    void FindTheWay();

    void colorite(int sector);

    void setColor(int num);

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_1_triggered();

    void on_showDeWay_clicked();

    void on_exitButton_clicked();

    void on_action_2_triggered();

    void on_makeTable_clicked();

    void on_getButton_clicked();

    void on_makeButton_clicked();

    void on_countSpin_valueChanged(int arg1);

    void on_MatrixCreate_clicked();

private:
    QVector <int> col;
    int ways;
    QVector <QVector <QPair <int, int> > > con;
    int start;
    int target;
    QString res;
    int *Steps;
    int rowNumb;
    QTextBrowser *MatrixView;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
