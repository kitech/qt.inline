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

// QGraphicsPolygonItem is pure virtual: false
// QGraphicsPolygonItem has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsPolygonItem_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsPolygonItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsPolygonItem_t qt_meta_stringdata_MyQGraphicsPolygonItem = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQGraphicsPolygonItem"
  },
  "MyQGraphicsPolygonItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsPolygonItem[] = {
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
class Q_DECL_EXPORT MyQGraphicsPolygonItem : public QGraphicsPolygonItem {
public:
  virtual ~MyQGraphicsPolygonItem() {}
// void QGraphicsPolygonItem(QGraphicsItem *)
MyQGraphicsPolygonItem(QGraphicsItem * parent) : QGraphicsPolygonItem(parent) {}
// void QGraphicsPolygonItem(const QPolygonF &, QGraphicsItem *)
MyQGraphicsPolygonItem(const QPolygonF & polygon, QGraphicsItem * parent) : QGraphicsPolygonItem(polygon, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool supportsExtension(QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsPolygonItem::supportsExtension(extension);
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
    QGraphicsPolygonItem::setExtension(extension, variant);
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
    return QGraphicsPolygonItem::extension(variant);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:768
// [1] bool supportsExtension(QGraphicsItem::Extension)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QGraphicsPolygonItem17supportsExtensionEN13QGraphicsItem9ExtensionE(void *this_, QGraphicsItem::Extension extension) {
  return (bool)((QGraphicsPolygonItem*)this_)->QGraphicsPolygonItem::supportsExtension(extension);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:769
// [-2] void setExtension(QGraphicsItem::Extension, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsPolygonItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(void *this_, QGraphicsItem::Extension extension, QVariant* variant) {
  ((QGraphicsPolygonItem*)this_)->QGraphicsPolygonItem::setExtension(extension, *variant);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:770
// [16] QVariant extension(const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsPolygonItem9extensionERK8QVariant(void *this_, QVariant* variant) {
  auto rv = ((QGraphicsPolygonItem*)this_)->QGraphicsPolygonItem::extension(*variant);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:744
// [-2] void QGraphicsPolygonItem(QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QGraphicsPolygonItemC2EP13QGraphicsItem(QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsPolygonItem*)(0);
  return  new MyQGraphicsPolygonItem(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:745
// [-2] void QGraphicsPolygonItem(const QPolygonF &, QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QGraphicsPolygonItemC2ERK9QPolygonFP13QGraphicsItem(QPolygonF* polygon, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsPolygonItem*)(0);
  return  new MyQGraphicsPolygonItem(*polygon, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:747
// [-2] void ~QGraphicsPolygonItem()
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsPolygonItemD2Ev(void *this_) {
  delete (QGraphicsPolygonItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:749
// [8] QPolygonF polygon()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsPolygonItem7polygonEv(void *this_) {
  auto rv = ((QGraphicsPolygonItem*)this_)->polygon();
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:750
// [-2] void setPolygon(const QPolygonF &)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsPolygonItem10setPolygonERK9QPolygonF(void *this_, QPolygonF* polygon) {
  ((QGraphicsPolygonItem*)this_)->setPolygon(*polygon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:752
// [4] Qt::FillRule fillRule()
extern "C" Q_DECL_EXPORT
Qt::FillRule C_ZNK20QGraphicsPolygonItem8fillRuleEv(void *this_) {
  return (Qt::FillRule)((QGraphicsPolygonItem*)this_)->fillRule();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:753
// [-2] void setFillRule(Qt::FillRule)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsPolygonItem11setFillRuleEN2Qt8FillRuleE(void *this_, Qt::FillRule rule) {
  ((QGraphicsPolygonItem*)this_)->setFillRule(rule);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:755
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsPolygonItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsPolygonItem*)this_)->boundingRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:756
// [8] QPainterPath shape()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsPolygonItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsPolygonItem*)this_)->shape();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:757
// [1] bool contains(const QPointF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QGraphicsPolygonItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QGraphicsPolygonItem*)this_)->contains(*point);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:759
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN20QGraphicsPolygonItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsPolygonItem*)this_)->paint(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:761
// [1] bool isObscuredBy(const QGraphicsItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QGraphicsPolygonItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsPolygonItem*)this_)->isObscuredBy(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:762
// [8] QPainterPath opaqueArea()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QGraphicsPolygonItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsPolygonItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:765
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK20QGraphicsPolygonItem4typeEv(void *this_) {
  return (int)((QGraphicsPolygonItem*)this_)->type();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
