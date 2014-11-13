#include "mainwindow.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include "graphicsscene.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QGraphicsView * view = new QGraphicsView;

    GraphicsScene * scene = new GraphicsScene();
    view->setScene(scene);

    view->setSceneRect(-300,-300, 300, 300);
    this->resize(600, 600);

    this->setCentralWidget(view);
}

MainWindow::~MainWindow()
{

}
