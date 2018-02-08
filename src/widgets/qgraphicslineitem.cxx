//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsLineItem is pure virtual: false
// QGraphicsLineItem has virtual projected: true
//  header block end

//  main block begin

class MyQGraphicsLineItem : public QGraphicsLineItem {
public:
  virtual ~MyQGraphicsLineItem() {}
// void QGraphicsLineItem(class QGraphicsItem *)
MyQGraphicsLineItem(QGraphicsItem * parent) : QGraphicsLineItem(parent) {}
// void QGraphicsLineItem(const class QLineF &, class QGraphicsItem *)
MyQGraphicsLineItem(const QLineF & line, QGraphicsItem * parent) : QGraphicsLineItem(line, parent) {}
// void QGraphicsLineItem(qreal, qreal, qreal, qreal, class QGraphicsItem *)
MyQGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2, QGraphicsItem * parent) : QGraphicsLineItem(x1, y1, x2, y2, parent) {}
// bool supportsExtension(enum QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsLineItem::supportsExtension(extension);
  }
  }
// void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
  virtual void setExtension(QGraphicsItem::Extension extension, const QVariant & variant) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setExtension", &handled, 2, (uint64_t)extension, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsLineItem::setExtension(extension, variant);
  }
  }
// QVariant extension(const class QVariant &)
  virtual QVariant extension(const QVariant & variant) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"extension", &handled, 1, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QGraphicsLineItem::extension(variant);
  }
  }
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:780
// [-2] void QGraphicsLineItem(class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsLineItemC2EP13QGraphicsItem(QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsLineItem*)(0);
  return  new MyQGraphicsLineItem(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:781
// [-2] void QGraphicsLineItem(const class QLineF &, class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsLineItemC2ERK6QLineFP13QGraphicsItem(QLineF* line, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsLineItem*)(0);
  return  new MyQGraphicsLineItem(*line, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:782
// [-2] void QGraphicsLineItem(qreal, qreal, qreal, qreal, class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsLineItemC2EddddP13QGraphicsItem(qreal x1, qreal y1, qreal x2, qreal y2, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsLineItem*)(0);
  return  new MyQGraphicsLineItem(x1, y1, x2, y2, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:783
// [-2] void ~QGraphicsLineItem()
extern "C"
void C_ZN17QGraphicsLineItemD2Ev(void *this_) {
  delete (QGraphicsLineItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:785
// [8] QPen pen()
extern "C"
void* C_ZNK17QGraphicsLineItem3penEv(void *this_) {
  auto rv = ((QGraphicsLineItem*)this_)->pen();
return new QPen(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:786
// [-2] void setPen(const class QPen &)
extern "C"
void C_ZN17QGraphicsLineItem6setPenERK4QPen(void *this_, QPen* pen) {
  ((QGraphicsLineItem*)this_)->setPen(*pen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:788
// [32] QLineF line()
extern "C"
void* C_ZNK17QGraphicsLineItem4lineEv(void *this_) {
  auto rv = ((QGraphicsLineItem*)this_)->line();
return new QLineF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:789
// [-2] void setLine(const class QLineF &)
extern "C"
void C_ZN17QGraphicsLineItem7setLineERK6QLineF(void *this_, QLineF* line) {
  ((QGraphicsLineItem*)this_)->setLine(*line);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:790
// [-2] void setLine(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN17QGraphicsLineItem7setLineEdddd(void *this_, qreal x1, qreal y1, qreal x2, qreal y2) {
  ((QGraphicsLineItem*)this_)->setLine(x1, y1, x2, y2);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:793
// [32] QRectF boundingRect()
extern "C"
void* C_ZNK17QGraphicsLineItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsLineItem*)this_)->boundingRect();
return new QRectF(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:794
// [8] QPainterPath shape()
extern "C"
void* C_ZNK17QGraphicsLineItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsLineItem*)this_)->shape();
return new QPainterPath(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:795
// [1] bool contains(const class QPointF &)
extern "C"
bool C_ZNK17QGraphicsLineItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QGraphicsLineItem*)this_)->contains(*point);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:797
// [-2] void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN17QGraphicsLineItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsLineItem*)this_)->paint(painter, option, widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:799
// [1] bool isObscuredBy(const class QGraphicsItem *)
extern "C"
bool C_ZNK17QGraphicsLineItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsLineItem*)this_)->isObscuredBy(item);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:800
// [8] QPainterPath opaqueArea()
extern "C"
void* C_ZNK17QGraphicsLineItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsLineItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:803
// [4] int type()
extern "C"
int C_ZNK17QGraphicsLineItem4typeEv(void *this_) {
  return (int)((QGraphicsLineItem*)this_)->type();
}
//  main block end