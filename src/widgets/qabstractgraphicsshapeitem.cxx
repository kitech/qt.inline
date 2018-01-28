//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>

// QAbstractGraphicsShapeItem is pure virtual: false
//  header block end

//  main block begin

class MyQAbstractGraphicsShapeItem : public QAbstractGraphicsShapeItem {
public:
MyQAbstractGraphicsShapeItem(QGraphicsItem * parent) : QAbstractGraphicsShapeItem(parent) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:603
// [-2] void QAbstractGraphicsShapeItem(class QGraphicsItem *)
extern "C"
void* C_ZN26QAbstractGraphicsShapeItemC1EP13QGraphicsItem(QGraphicsItem * parent) {
  (MyQAbstractGraphicsShapeItem*)(0);
  return 0; // new MyQAbstractGraphicsShapeItem(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:604
// [-2] void ~QAbstractGraphicsShapeItem()
extern "C"
void C_ZN26QAbstractGraphicsShapeItemD1Ev(void *this_) {
  delete (QAbstractGraphicsShapeItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:606
// [8] QPen pen()
extern "C"
void* C_ZNK26QAbstractGraphicsShapeItem3penEv(void *this_) {
  auto rv = ((QAbstractGraphicsShapeItem*)this_)->pen();
return new QPen(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:607
// [-2] void setPen(const class QPen &)
extern "C"
void C_ZN26QAbstractGraphicsShapeItem6setPenERK4QPen(void *this_, const QPen & pen) {
  ((QAbstractGraphicsShapeItem*)this_)->setPen(pen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:609
// [8] QBrush brush()
extern "C"
void* C_ZNK26QAbstractGraphicsShapeItem5brushEv(void *this_) {
  auto rv = ((QAbstractGraphicsShapeItem*)this_)->brush();
return new QBrush(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:610
// [-2] void setBrush(const class QBrush &)
extern "C"
void C_ZN26QAbstractGraphicsShapeItem8setBrushERK6QBrush(void *this_, const QBrush & brush) {
  ((QAbstractGraphicsShapeItem*)this_)->setBrush(brush);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:612
// [1] bool isObscuredBy(const class QGraphicsItem *)
extern "C"
bool C_ZNK26QAbstractGraphicsShapeItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QAbstractGraphicsShapeItem*)this_)->isObscuredBy(item);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:613
// [8] QPainterPath opaqueArea()
extern "C"
void* C_ZNK26QAbstractGraphicsShapeItem10opaqueAreaEv(void *this_) {
  auto rv = ((QAbstractGraphicsShapeItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}
//  main block end
