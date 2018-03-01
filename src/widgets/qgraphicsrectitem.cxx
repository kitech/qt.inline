//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsRectItem is pure virtual: false
// QGraphicsRectItem has virtual projected: true
//  header block end

//  main block begin

class MyQGraphicsRectItem : public QGraphicsRectItem {
public:
  virtual ~MyQGraphicsRectItem() {}
// void QGraphicsRectItem(class QGraphicsItem *)
MyQGraphicsRectItem(QGraphicsItem * parent) : QGraphicsRectItem(parent) {}
// void QGraphicsRectItem(const class QRectF &, class QGraphicsItem *)
MyQGraphicsRectItem(const QRectF & rect, QGraphicsItem * parent) : QGraphicsRectItem(rect, parent) {}
// void QGraphicsRectItem(qreal, qreal, qreal, qreal, class QGraphicsItem *)
MyQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent) : QGraphicsRectItem(x, y, w, h, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool supportsExtension(enum QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsRectItem::supportsExtension(extension);
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
    QGraphicsRectItem::setExtension(extension, variant);
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
    return QGraphicsRectItem::extension(variant);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:683
// [1] bool supportsExtension(enum QGraphicsItem::Extension)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGraphicsRectItem17supportsExtensionEN13QGraphicsItem9ExtensionE(void *this_, QGraphicsItem::Extension extension) {
  return (bool)((QGraphicsRectItem*)this_)->QGraphicsRectItem::supportsExtension(extension);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:684
// [-2] void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRectItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(void *this_, QGraphicsItem::Extension extension, QVariant* variant) {
  ((QGraphicsRectItem*)this_)->QGraphicsRectItem::setExtension(extension, *variant);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:685
// [16] QVariant extension(const class QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsRectItem9extensionERK8QVariant(void *this_, QVariant* variant) {
  auto rv = ((QGraphicsRectItem*)this_)->QGraphicsRectItem::extension(*variant);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:661
// [-2] void QGraphicsRectItem(class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGraphicsRectItemC2EP13QGraphicsItem(QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsRectItem*)(0);
  return  new MyQGraphicsRectItem(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:662
// [-2] void QGraphicsRectItem(const class QRectF &, class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGraphicsRectItemC2ERK6QRectFP13QGraphicsItem(QRectF* rect, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsRectItem*)(0);
  return  new MyQGraphicsRectItem(*rect, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:663
// [-2] void QGraphicsRectItem(qreal, qreal, qreal, qreal, class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGraphicsRectItemC2EddddP13QGraphicsItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsRectItem*)(0);
  return  new MyQGraphicsRectItem(x, y, w, h, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:664
// [-2] void ~QGraphicsRectItem()
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRectItemD2Ev(void *this_) {
  delete (QGraphicsRectItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:666
// [32] QRectF rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsRectItem4rectEv(void *this_) {
  auto rv = ((QGraphicsRectItem*)this_)->rect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:667
// [-2] void setRect(const class QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRectItem7setRectERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsRectItem*)this_)->setRect(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:668
// [-2] void setRect(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRectItem7setRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QGraphicsRectItem*)this_)->setRect(x, y, w, h);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:670
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsRectItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsRectItem*)this_)->boundingRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:671
// [8] QPainterPath shape()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsRectItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsRectItem*)this_)->shape();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:672
// [1] bool contains(const class QPointF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGraphicsRectItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QGraphicsRectItem*)this_)->contains(*point);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:674
// [-2] void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRectItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsRectItem*)this_)->paint(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:676
// [1] bool isObscuredBy(const class QGraphicsItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGraphicsRectItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsRectItem*)this_)->isObscuredBy(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:677
// [8] QPainterPath opaqueArea()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsRectItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsRectItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:680
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK17QGraphicsRectItem4typeEv(void *this_) {
  return (int)((QGraphicsRectItem*)this_)->type();
}

//  main block end
