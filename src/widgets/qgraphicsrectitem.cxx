//  header block begin

#ifndef QT_MINIMAL
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

// QGraphicsRectItem is pure virtual: false
// QGraphicsRectItem has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsRectItem_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsRectItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsRectItem_t qt_meta_stringdata_MyQGraphicsRectItem = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQGraphicsRectItem"
  },
  "MyQGraphicsRectItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsRectItem[] = {
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
class Q_DECL_EXPORT MyQGraphicsRectItem : public QGraphicsRectItem {
public:
  virtual ~MyQGraphicsRectItem() {}
// void QGraphicsRectItem(QGraphicsItem *)
MyQGraphicsRectItem(QGraphicsItem * parent) : QGraphicsRectItem(parent) {}
// void QGraphicsRectItem(const QRectF &, QGraphicsItem *)
MyQGraphicsRectItem(const QRectF & rect, QGraphicsItem * parent) : QGraphicsRectItem(rect, parent) {}
// void QGraphicsRectItem(qreal, qreal, qreal, qreal, QGraphicsItem *)
MyQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent) : QGraphicsRectItem(x, y, w, h, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool supportsExtension(QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsRectItem::supportsExtension(extension);
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
    QGraphicsRectItem::setExtension(extension, variant);
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
    return QGraphicsRectItem::extension(variant);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:683
// [1] bool supportsExtension(QGraphicsItem::Extension)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGraphicsRectItem17supportsExtensionEN13QGraphicsItem9ExtensionE(void *this_, QGraphicsItem::Extension extension) {
  return (bool)((QGraphicsRectItem*)this_)->QGraphicsRectItem::supportsExtension(extension);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:684
// [-2] void setExtension(QGraphicsItem::Extension, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRectItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(void *this_, QGraphicsItem::Extension extension, QVariant* variant) {
  ((QGraphicsRectItem*)this_)->QGraphicsRectItem::setExtension(extension, *variant);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:685
// [16] QVariant extension(const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsRectItem9extensionERK8QVariant(void *this_, QVariant* variant) {
  auto rv = ((QGraphicsRectItem*)this_)->QGraphicsRectItem::extension(*variant);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:661
// [-2] void QGraphicsRectItem(QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGraphicsRectItemC2EP13QGraphicsItem(QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsRectItem*)(0);
  return  new MyQGraphicsRectItem(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:662
// [-2] void QGraphicsRectItem(const QRectF &, QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGraphicsRectItemC2ERK6QRectFP13QGraphicsItem(QRectF* rect, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsRectItem*)(0);
  return  new MyQGraphicsRectItem(*rect, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:663
// [-2] void QGraphicsRectItem(qreal, qreal, qreal, qreal, QGraphicsItem *)
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
// [-2] void setRect(const QRectF &)
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
// [1] bool contains(const QPointF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGraphicsRectItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QGraphicsRectItem*)this_)->contains(*point);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:674
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRectItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsRectItem*)this_)->paint(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:676
// [1] bool isObscuredBy(const QGraphicsItem *)
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
