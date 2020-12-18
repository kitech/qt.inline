//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractGraphicsShapeItem is pure virtual: true true
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
// Public purevirtual virtual Indirect Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractgraphicsshapeitem(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN26QAbstractGraphicsShapeItemD2Ev(void *this_)*/ {
  delete (QAbstractGraphicsShapeItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractgraphicsshapeitem
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
