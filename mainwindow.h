#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "struct.h"
#include <QMainWindow>
#include "horse.h"
#include <QAction>
#include <QList>
#include <QLabel>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void mousePressEvent(QMouseEvent *event);
protected:
    void runing(int x,int y);
    void paintBlackAndWhite(int i, QLabel *la);
private slots:
    void on__ButtonStart_clicked(bool);

    void on_actionClear_triggered();


private:
    Ui::MainWindow *ui;
    QList<QLabel *> labelList;
    Horse _horse;
    bool _flagStart = false;
    bool _flagStop = false;
    bool intdd = false;
    int _justStep = -1;
    int _jusetPoint = -1;
};

#endif // MAINWINDOW_H
