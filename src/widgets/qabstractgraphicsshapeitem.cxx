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

// QAbstractGraphicsShapeItem is pure virtual: true
// QAbstractGraphicsShapeItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAbstractGraphicsShapeItem_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractGraphicsShapeItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractGraphicsShapeItem_t qt_meta_stringdata_MyQAbstractGraphicsShapeItem = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQAbstractGraphicsShapeItem"
  },
  "MyQAbstractGraphicsShapeItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractGraphicsShapeItem[] = {
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
class Q_DECL_EXPORT MyQAbstractGraphicsShapeItem : public QAbstractGraphicsShapeItem {
public:
  virtual ~MyQAbstractGraphicsShapeItem() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [32] QRectF boundingRect()
  virtual QRectF boundingRect() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"boundingRect", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRectF){};}
    auto prv = (QRectF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRectF
    } else {
    return (QRectF){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
  virtual void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paint", &handled, 3, (uint64_t)painter, (uint64_t)option, (uint64_t)widget, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractGraphicsShapeItem::paint(painter, option, widget);
  }
  }

// void QAbstractGraphicsShapeItem(QGraphicsItem *)
MyQAbstractGraphicsShapeItem(QGraphicsItem * parent) : QAbstractGraphicsShapeItem(parent) {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:324
// [32] QRectF boundingRect()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:344
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:603
// [-2] void QAbstractGraphicsShapeItem(QGraphicsItem *)
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
// [-2] void setPen(const QPen &)
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
// [-2] void setBrush(const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN26QAbstractGraphicsShapeItem8setBrushERK6QBrush(void *this_, QBrush* brush) {
  ((QAbstractGraphicsShapeItem*)this_)->setBrush(*brush);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:612
// [1] bool isObscuredBy(const QGraphicsItem *)
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
