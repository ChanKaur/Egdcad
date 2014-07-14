#ifndef ARC_H
#define ARC_H
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <QMouseEvent>
#include <QDebug>
#include "ui_mainwindow.h"
#include "qmath.h"
class arc: public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
   arc();
    QRectF boundingRect() const;
    virtual void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *e);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *e);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *e);
private:
    int x1, y1, x2, y2, radius;
    bool mFirstClick;
    bool mSecondClick;
    bool mPaintFlag;
    Ui::MainWindow *ui;
    QVector<QPointF> stuff;

signals:
    void DrawFinished();
};



#endif // ARC_H
