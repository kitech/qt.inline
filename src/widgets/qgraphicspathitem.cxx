//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsPathItem is pure virtual: false
// QGraphicsPathItem has virtual projected: true
//  header block end

//  main block begin

class MyQGraphicsPathItem : public QGraphicsPathItem {
public:
  virtual ~MyQGraphicsPathItem() {}
// void QGraphicsPathItem(class QGraphicsItem *)
MyQGraphicsPathItem(QGraphicsItem * parent) : QGraphicsPathItem(parent) {}
// void QGraphicsPathItem(const class QPainterPath &, class QGraphicsItem *)
MyQGraphicsPathItem(const QPainterPath & path, QGraphicsItem * parent) : QGraphicsPathItem(path, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool supportsExtension(enum QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsPathItem::supportsExtension(extension);
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
    QGraphicsPathItem::setExtension(extension, variant);
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
    return QGraphicsPathItem::extension(variant);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:648
// [1] bool supportsExtension(enum QGraphicsItem::Extension)
extern "C"
bool C_ZNK17QGraphicsPathItem17supportsExtensionEN13QGraphicsItem9ExtensionE(void *this_, QGraphicsItem::Extension extension) {
  return (bool)((QGraphicsPathItem*)this_)->QGraphicsPathItem::supportsExtension(extension);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:649
// [-2] void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
extern "C"
void C_ZN17QGraphicsPathItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(void *this_, QGraphicsItem::Extension extension, QVariant* variant) {
  ((QGraphicsPathItem*)this_)->QGraphicsPathItem::setExtension(extension, *variant);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:650
// [16] QVariant extension(const class QVariant &)
extern "C"
void* C_ZNK17QGraphicsPathItem9extensionERK8QVariant(void *this_, QVariant* variant) {
  auto rv = ((QGraphicsPathItem*)this_)->QGraphicsPathItem::extension(*variant);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:628
// [-2] void QGraphicsPathItem(class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsPathItemC2EP13QGraphicsItem(QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsPathItem*)(0);
  return  new MyQGraphicsPathItem(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:629
// [-2] void QGraphicsPathItem(const class QPainterPath &, class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsPathItemC2ERK12QPainterPathP13QGraphicsItem(QPainterPath* path, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsPathItem*)(0);
  return  new MyQGraphicsPathItem(*path, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:630
// [-2] void ~QGraphicsPathItem()
extern "C"
void C_ZN17QGraphicsPathItemD2Ev(void *this_) {
  delete (QGraphicsPathItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:632
// [8] QPainterPath path()
extern "C"
void* C_ZNK17QGraphicsPathItem4pathEv(void *this_) {
  auto rv = ((QGraphicsPathItem*)this_)->path();
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:633
// [-2] void setPath(const class QPainterPath &)
extern "C"
void C_ZN17QGraphicsPathItem7setPathERK12QPainterPath(void *this_, QPainterPath* path) {
  ((QGraphicsPathItem*)this_)->setPath(*path);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:635
// [32] QRectF boundingRect()
extern "C"
void* C_ZNK17QGraphicsPathItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsPathItem*)this_)->boundingRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:636
// [8] QPainterPath shape()
extern "C"
void* C_ZNK17QGraphicsPathItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsPathItem*)this_)->shape();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:637
// [1] bool contains(const class QPointF &)
extern "C"
bool C_ZNK17QGraphicsPathItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QGraphicsPathItem*)this_)->contains(*point);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:639
// [-2] void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN17QGraphicsPathItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsPathItem*)this_)->paint(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:641
// [1] bool isObscuredBy(const class QGraphicsItem *)
extern "C"
bool C_ZNK17QGraphicsPathItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsPathItem*)this_)->isObscuredBy(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:642
// [8] QPainterPath opaqueArea()
extern "C"
void* C_ZNK17QGraphicsPathItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsPathItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:645
// [4] int type()
extern "C"
int C_ZNK17QGraphicsPathItem4typeEv(void *this_) {
  return (int)((QGraphicsPathItem*)this_)->type();
}

//  main block end
