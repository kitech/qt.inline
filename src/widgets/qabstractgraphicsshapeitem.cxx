//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractGraphicsShapeItem is pure virtual: false
// QAbstractGraphicsShapeItem has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractGraphicsShapeItem : public QAbstractGraphicsShapeItem {
public:
  virtual ~MyQAbstractGraphicsShapeItem() {}
// void QAbstractGraphicsShapeItem(class QGraphicsItem *)
MyQAbstractGraphicsShapeItem(QGraphicsItem * parent) : QAbstractGraphicsShapeItem(parent) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:603
// [-2] void QAbstractGraphicsShapeItem(class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAbstractGraphicsShapeItemC2EP13QGraphicsItem(QGraphicsItem * parent) {
  return 0; // new QAbstractGraphicsShapeItem(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:604
// [-2] void ~QAbstractGraphicsShapeItem()
extern "C" Q_DECL_EXPORT
void C_ZN26QAbstractGraphicsShapeItemD2Ev(void *this_) {
  delete (QAbstractGraphicsShapeItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:606
// [8] QPen pen()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAbstractGraphicsShapeItem3penEv(void *this_) {
  auto rv = ((QAbstractGraphicsShapeItem*)this_)->pen();
return new QPen(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:607
// [-2] void setPen(const class QPen &)
extern "C" Q_DECL_EXPORT
void C_ZN26QAbstractGraphicsShapeItem6setPenERK4QPen(void *this_, QPen* pen) {
  ((QAbstractGraphicsShapeItem*)this_)->setPen(*pen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:609
// [8] QBrush brush()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAbstractGraphicsShapeItem5brushEv(void *this_) {
  auto rv = ((QAbstractGraphicsShapeItem*)this_)->brush();
return new QBrush(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:610
// [-2] void setBrush(const class QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN26QAbstractGraphicsShapeItem8setBrushERK6QBrush(void *this_, QBrush* brush) {
  ((QAbstractGraphicsShapeItem*)this_)->setBrush(*brush);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:612
// [1] bool isObscuredBy(const class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK26QAbstractGraphicsShapeItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QAbstractGraphicsShapeItem*)this_)->isObscuredBy(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:613
// [8] QPainterPath opaqueArea()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAbstractGraphicsShapeItem10opaqueAreaEv(void *this_) {
  auto rv = ((QAbstractGraphicsShapeItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}

//  main block end
