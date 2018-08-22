//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsEllipseItem is pure virtual: false
// QGraphicsEllipseItem has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsEllipseItem : public QGraphicsEllipseItem {
public:
  virtual ~MyQGraphicsEllipseItem() {}
// void QGraphicsEllipseItem(QGraphicsItem *)
MyQGraphicsEllipseItem(QGraphicsItem * parent) : QGraphicsEllipseItem(parent) {}
// void QGraphicsEllipseItem(const QRectF &, QGraphicsItem *)
MyQGraphicsEllipseItem(const QRectF & rect, QGraphicsItem * parent) : QGraphicsEllipseItem(rect, parent) {}
// void QGraphicsEllipseItem(qreal, qreal, qreal, qreal, QGraphicsItem *)
MyQGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent) : QGraphicsEllipseItem(x, y, w, h, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool supportsExtension(QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsEllipseItem::supportsExtension(extension);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void setExtension(QGraphicsItem::Extension, const QVariant &)
  virtual void setExtension(QGraphicsItem::Extension extension, const QVariant & variant)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setExtension", &handled, 2, (uint64_t)extension, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsEllipseItem::setExtension(extension, variant);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [16] QVariant extension(const QVariant &)
  virtual QVariant extension(const QVariant & variant) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"extension", &handled, 1, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return QGraphicsEllipseItem::extension(variant);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:727
// [1] bool supportsExtension(QGraphicsItem::Extension)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QGraphicsEllipseItem17supportsExtensionEN13QGraphicsItem9ExtensionE(void *this_, QGraphicsItem::Extension extension) {
  return (bool)((QGraphicsEllipseItem*)this_)->QGraphicsEllipseItem::supportsExtension(extension);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:728
// [-2] void setExtension(QGraphicsItem::Extension, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsEllipseItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(void *this_, QGraphicsItem::Extension extension, QVariant* variant) {
  ((QGraphicsEllipseItem*)this_)->QGraphicsEllipseItem::setExtension(extension, *variant);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:729
// [16] QVariant extension(const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsEllipseItem9extensionERK8QVariant(void *this_, QVariant* variant) {
  auto rv = ((QGraphicsEllipseItem*)this_)->QGraphicsEllipseItem::extension(*variant);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:699
// [-2] void QGraphicsEllipseItem(QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QGraphicsEllipseItemC2EP13QGraphicsItem(QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsEllipseItem*)(0);
  return  new MyQGraphicsEllipseItem(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:700
// [-2] void QGraphicsEllipseItem(const QRectF &, QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QGraphicsEllipseItemC2ERK6QRectFP13QGraphicsItem(QRectF* rect, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsEllipseItem*)(0);
  return  new MyQGraphicsEllipseItem(*rect, parent);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qgraphicsitem.h:701
// [-2] void QGraphicsEllipseItem(qreal, qreal, qreal, qreal, QGraphicsItem *)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZN20QGraphicsEllipseItemC2EddddP13QGraphicsItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsEllipseItem*)(0);
  return  new MyQGraphicsEllipseItem(x, y, w, h, parent);
}
#endif // QT_VERSION >= 0x040300

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:702
// [-2] void ~QGraphicsEllipseItem()
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsEllipseItemD2Ev(void *this_) {
  delete (QGraphicsEllipseItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:704
// [32] QRectF rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsEllipseItem4rectEv(void *this_) {
  auto rv = ((QGraphicsEllipseItem*)this_)->rect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:705
// [-2] void setRect(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsEllipseItem7setRectERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsEllipseItem*)this_)->setRect(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:706
// [-2] void setRect(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsEllipseItem7setRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QGraphicsEllipseItem*)this_)->setRect(x, y, w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:708
// [4] int startAngle()
extern "C" Q_DECL_EXPORT
int C_ZNK20QGraphicsEllipseItem10startAngleEv(void *this_) {
  return (int)((QGraphicsEllipseItem*)this_)->startAngle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:709
// [-2] void setStartAngle(int)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsEllipseItem13setStartAngleEi(void *this_, int angle) {
  ((QGraphicsEllipseItem*)this_)->setStartAngle(angle);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:711
// [4] int spanAngle()
extern "C" Q_DECL_EXPORT
int C_ZNK20QGraphicsEllipseItem9spanAngleEv(void *this_) {
  return (int)((QGraphicsEllipseItem*)this_)->spanAngle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:712
// [-2] void setSpanAngle(int)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsEllipseItem12setSpanAngleEi(void *this_, int angle) {
  ((QGraphicsEllipseItem*)this_)->setSpanAngle(angle);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:714
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsEllipseItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsEllipseItem*)this_)->boundingRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:715
// [8] QPainterPath shape()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsEllipseItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsEllipseItem*)this_)->shape();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:716
// [1] bool contains(const QPointF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QGraphicsEllipseItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QGraphicsEllipseItem*)this_)->contains(*point);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:718
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsEllipseItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsEllipseItem*)this_)->paint(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:720
// [1] bool isObscuredBy(const QGraphicsItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QGraphicsEllipseItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsEllipseItem*)this_)->isObscuredBy(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:721
// [8] QPainterPath opaqueArea()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsEllipseItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsEllipseItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:724
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK20QGraphicsEllipseItem4typeEv(void *this_) {
  return (int)((QGraphicsEllipseItem*)this_)->type();
}

//  main block end
