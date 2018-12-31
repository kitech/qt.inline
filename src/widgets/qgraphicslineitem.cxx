//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// since 0x040200
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsLineItem is pure virtual: false
// QGraphicsLineItem has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsLineItem_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsLineItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsLineItem_t qt_meta_stringdata_MyQGraphicsLineItem = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQGraphicsLineItem"
  },
  "MyQGraphicsLineItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsLineItem[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQGraphicsLineItem : public QGraphicsLineItem {
public:
  virtual ~MyQGraphicsLineItem() {}
// void QGraphicsLineItem(QGraphicsItem *)
MyQGraphicsLineItem(QGraphicsItem * parent) : QGraphicsLineItem(parent) {}
// void QGraphicsLineItem(const QLineF &, QGraphicsItem *)
MyQGraphicsLineItem(const QLineF & line, QGraphicsItem * parent) : QGraphicsLineItem(line, parent) {}
// void QGraphicsLineItem(qreal, qreal, qreal, qreal, QGraphicsItem *)
MyQGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2, QGraphicsItem * parent) : QGraphicsLineItem(x1, y1, x2, y2, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool supportsExtension(QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsLineItem::supportsExtension(extension);
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
    QGraphicsLineItem::setExtension(extension, variant);
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
    return QGraphicsLineItem::extension(variant);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:806
// [1] bool supportsExtension(QGraphicsItem::Extension)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGraphicsLineItem17supportsExtensionEN13QGraphicsItem9ExtensionE(void *this_, QGraphicsItem::Extension extension) {
  return (bool)((QGraphicsLineItem*)this_)->QGraphicsLineItem::supportsExtension(extension);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:807
// [-2] void setExtension(QGraphicsItem::Extension, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsLineItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(void *this_, QGraphicsItem::Extension extension, QVariant* variant) {
  ((QGraphicsLineItem*)this_)->QGraphicsLineItem::setExtension(extension, *variant);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:808
// [16] QVariant extension(const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsLineItem9extensionERK8QVariant(void *this_, QVariant* variant) {
  auto rv = ((QGraphicsLineItem*)this_)->QGraphicsLineItem::extension(*variant);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:780
// [-2] void QGraphicsLineItem(QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGraphicsLineItemC2EP13QGraphicsItem(QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsLineItem*)(0);
  return  new MyQGraphicsLineItem(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:781
// [-2] void QGraphicsLineItem(const QLineF &, QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGraphicsLineItemC2ERK6QLineFP13QGraphicsItem(QLineF* line, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsLineItem*)(0);
  return  new MyQGraphicsLineItem(*line, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:782
// [-2] void QGraphicsLineItem(qreal, qreal, qreal, qreal, QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGraphicsLineItemC2EddddP13QGraphicsItem(qreal x1, qreal y1, qreal x2, qreal y2, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsLineItem*)(0);
  return  new MyQGraphicsLineItem(x1, y1, x2, y2, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:783
// [-2] void ~QGraphicsLineItem()
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsLineItemD2Ev(void *this_) {
  delete (QGraphicsLineItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:785
// [8] QPen pen()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsLineItem3penEv(void *this_) {
  auto rv = ((QGraphicsLineItem*)this_)->pen();
return new QPen(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:786
// [-2] void setPen(const QPen &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsLineItem6setPenERK4QPen(void *this_, QPen* pen) {
  ((QGraphicsLineItem*)this_)->setPen(*pen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:788
// [32] QLineF line()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsLineItem4lineEv(void *this_) {
  auto rv = ((QGraphicsLineItem*)this_)->line();
return new QLineF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:789
// [-2] void setLine(const QLineF &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsLineItem7setLineERK6QLineF(void *this_, QLineF* line) {
  ((QGraphicsLineItem*)this_)->setLine(*line);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:790
// [-2] void setLine(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsLineItem7setLineEdddd(void *this_, qreal x1, qreal y1, qreal x2, qreal y2) {
  ((QGraphicsLineItem*)this_)->setLine(x1, y1, x2, y2);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:793
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsLineItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsLineItem*)this_)->boundingRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:794
// [8] QPainterPath shape()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsLineItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsLineItem*)this_)->shape();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:795
// [1] bool contains(const QPointF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGraphicsLineItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QGraphicsLineItem*)this_)->contains(*point);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:797
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsLineItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsLineItem*)this_)->paint(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:799
// [1] bool isObscuredBy(const QGraphicsItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGraphicsLineItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsLineItem*)this_)->isObscuredBy(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:800
// [8] QPainterPath opaqueArea()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsLineItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsLineItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:803
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK17QGraphicsLineItem4typeEv(void *this_) {
  return (int)((QGraphicsLineItem*)this_)->type();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(graphicsview)
#endif // #ifndef QT_MINIMAL
//  footer block end
