//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsPolygonItem is pure virtual: false
// QGraphicsPolygonItem has virtual projected: true
//  header block end

//  main block begin

class MyQGraphicsPolygonItem : public QGraphicsPolygonItem {
public:
  virtual ~MyQGraphicsPolygonItem() {}
// void QGraphicsPolygonItem(class QGraphicsItem *)
MyQGraphicsPolygonItem(QGraphicsItem * parent) : QGraphicsPolygonItem(parent) {}
// void QGraphicsPolygonItem(const class QPolygonF &, class QGraphicsItem *)
MyQGraphicsPolygonItem(const QPolygonF & polygon, QGraphicsItem * parent) : QGraphicsPolygonItem(polygon, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool supportsExtension(enum QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsPolygonItem::supportsExtension(extension);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
  virtual void setExtension(QGraphicsItem::Extension extension, const QVariant & variant) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setExtension", &handled, 2, (uint64_t)extension, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsPolygonItem::setExtension(extension, variant);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QVariant extension(const class QVariant &)
  virtual QVariant extension(const QVariant & variant) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"extension", &handled, 1, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QGraphicsPolygonItem::extension(variant);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:767
// [1] bool supportsExtension(enum QGraphicsItem::Extension)
extern "C"
bool C_ZNK20QGraphicsPolygonItem17supportsExtensionEN13QGraphicsItem9ExtensionE(void *this_, QGraphicsItem::Extension extension) {
  return (bool)((QGraphicsPolygonItem*)this_)->QGraphicsPolygonItem::supportsExtension(extension);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:768
// [-2] void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
extern "C"
void C_ZN20QGraphicsPolygonItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(void *this_, QGraphicsItem::Extension extension, QVariant* variant) {
  ((QGraphicsPolygonItem*)this_)->QGraphicsPolygonItem::setExtension(extension, *variant);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:769
// [16] QVariant extension(const class QVariant &)
extern "C"
void* C_ZNK20QGraphicsPolygonItem9extensionERK8QVariant(void *this_, QVariant* variant) {
  auto rv = ((QGraphicsPolygonItem*)this_)->QGraphicsPolygonItem::extension(*variant);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:743
// [-2] void QGraphicsPolygonItem(class QGraphicsItem *)
extern "C"
void* C_ZN20QGraphicsPolygonItemC2EP13QGraphicsItem(QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsPolygonItem*)(0);
  return  new MyQGraphicsPolygonItem(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:744
// [-2] void QGraphicsPolygonItem(const class QPolygonF &, class QGraphicsItem *)
extern "C"
void* C_ZN20QGraphicsPolygonItemC2ERK9QPolygonFP13QGraphicsItem(QPolygonF* polygon, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsPolygonItem*)(0);
  return  new MyQGraphicsPolygonItem(*polygon, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:746
// [-2] void ~QGraphicsPolygonItem()
extern "C"
void C_ZN20QGraphicsPolygonItemD2Ev(void *this_) {
  delete (QGraphicsPolygonItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:748
// [8] QPolygonF polygon()
extern "C"
void* C_ZNK20QGraphicsPolygonItem7polygonEv(void *this_) {
  auto rv = ((QGraphicsPolygonItem*)this_)->polygon();
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:749
// [-2] void setPolygon(const class QPolygonF &)
extern "C"
void C_ZN20QGraphicsPolygonItem10setPolygonERK9QPolygonF(void *this_, QPolygonF* polygon) {
  ((QGraphicsPolygonItem*)this_)->setPolygon(*polygon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:751
// [4] Qt::FillRule fillRule()
extern "C"
Qt::FillRule C_ZNK20QGraphicsPolygonItem8fillRuleEv(void *this_) {
  return (Qt::FillRule)((QGraphicsPolygonItem*)this_)->fillRule();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:752
// [-2] void setFillRule(Qt::FillRule)
extern "C"
void C_ZN20QGraphicsPolygonItem11setFillRuleEN2Qt8FillRuleE(void *this_, Qt::FillRule rule) {
  ((QGraphicsPolygonItem*)this_)->setFillRule(rule);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:754
// [32] QRectF boundingRect()
extern "C"
void* C_ZNK20QGraphicsPolygonItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsPolygonItem*)this_)->boundingRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:755
// [8] QPainterPath shape()
extern "C"
void* C_ZNK20QGraphicsPolygonItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsPolygonItem*)this_)->shape();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:756
// [1] bool contains(const class QPointF &)
extern "C"
bool C_ZNK20QGraphicsPolygonItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QGraphicsPolygonItem*)this_)->contains(*point);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:758
// [-2] void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN20QGraphicsPolygonItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsPolygonItem*)this_)->paint(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:760
// [1] bool isObscuredBy(const class QGraphicsItem *)
extern "C"
bool C_ZNK20QGraphicsPolygonItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsPolygonItem*)this_)->isObscuredBy(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:761
// [8] QPainterPath opaqueArea()
extern "C"
void* C_ZNK20QGraphicsPolygonItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsPolygonItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:764
// [4] int type()
extern "C"
int C_ZNK20QGraphicsPolygonItem4typeEv(void *this_) {
  return (int)((QGraphicsPolygonItem*)this_)->type();
}

//  main block end
