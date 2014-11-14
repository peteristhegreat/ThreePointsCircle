#ifndef ARCGRAPHICSITEM_H
#define ARCGRAPHICSITEM_H

//#include <QObject>
#include <QGraphicsItem>
//#include <QGraphicsObject>
#include <QLineF>
#include <QPointF>
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QWidget>

class ArcGraphicsItem : public QGraphicsItem//Object//public QObject, public QGraphicsItem
{
//    Q_OBJECT
//    Q_PROPERTY(qreal opacity READ opacity WRITE setOpacity)// NOTIFY opacityChanged FINAL)
//    Q_PROPERTY(bool enabled READ isEnabled WRITE setEnabled)// NOTIFY enabledChanged)
//    Q_PROPERTY(bool visible READ isVisible WRITE setVisible)// NOTIFY visibleChanged FINAL)
//    Q_PROPERTY(QPointF pos READ pos WRITE setPos)// FINAL)
//    Q_PROPERTY(qreal x READ x WRITE setX)// NOTIFY xChanged FINAL)
//    Q_PROPERTY(qreal y READ y WRITE setY)// NOTIFY yChanged FINAL)
//    Q_PROPERTY(qreal z READ zValue WRITE setZValue)// NOTIFY zChanged FINAL)
//    Q_PROPERTY(qreal rotation READ rotation WRITE setRotation)// NOTIFY rotationChanged)
//    Q_PROPERTY(qreal scale READ scale WRITE setScale)// NOTIFY scaleChanged)
//    Q_PROPERTY(QPointF transformOriginPoint READ transformOriginPoint WRITE setTransformOriginPoint)

public:
    ArcGraphicsItem();//QGraphicsObject * parent = 0);//QGraphicsItem *parent = 0);
    ArcGraphicsItem(int i, QPointF point0, QPointF point1, QPointF point2);//, QGraphicsObject * parent = 0);//QGraphicsItem* parent = 0);
    ~ArcGraphicsItem();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    int type() const { return Type;}
    int id() {return m_id;}

    QPainterPath shape() const;
protected:
    // overriding mouse events
//    void mousePressEvent(QGraphicsSceneMouseEvent *event);
//    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

//signals:

//public slots:

private:
    void init();

    enum { Type = UserType + 6 };
    int m_id;

    QPointF startP, midP, endP, p1, p2, p3, center;
    QLineF lineBC;
    QLineF lineAC;
    QLineF lineBA;
    QLineF lineOA;
    QLineF lineOB;
    QLineF lineOC;
    QLineF bisectorBC;
    QLineF bisectorBA;
//    QGraphicsEllipseItem * ellipse;
    qreal startAngle;
    qreal spanAngle;

    QRectF circle;
    QRectF boundingRectTemp;
    qreal rad;
};

#endif // ARCGRAPHICSITEM_H
