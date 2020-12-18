//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicslinearlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsLinearLayout is pure virtual: false false
// QGraphicsLinearLayout has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsLinearLayout_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsLinearLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsLinearLayout_t qt_meta_stringdata_MyQGraphicsLinearLayout = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQGraphicsLinearLayout"
  },
  "MyQGraphicsLinearLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsLinearLayout[] = {
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
class Q_DECL_EXPORT MyQGraphicsLinearLayout : public QGraphicsLinearLayout {
public:
  virtual ~MyQGraphicsLinearLayout() {}
// void QGraphicsLinearLayout(QGraphicsLayoutItem *)
MyQGraphicsLinearLayout(QGraphicsLayoutItem * parent) : QGraphicsLinearLayout(parent) {}
// void QGraphicsLinearLayout(Qt::Orientation, QGraphicsLayoutItem *)
MyQGraphicsLinearLayout(Qt::Orientation orientation, QGraphicsLayoutItem * parent) : QGraphicsLinearLayout(orientation, parent) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicslinearlayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:63
// [-2] void addItem(QGraphicsLayoutItem *) 
// (12)qm4267096040 (57)_ZN21QGraphicsLinearLayout7addItemEP19QGraphicsLayoutItem
//static
/*void qm4267096040(QGraphicsLayoutItem * item)*/ {
  QGraphicsLayoutItem * item = *(QGraphicsLayoutItem **)this_;
  (void) ((QGraphicsLinearLayout*)this_)->addItem(item);
   auto xptr = (void (QGraphicsLinearLayout::*)(QGraphicsLayoutItem*) ) &QGraphicsLinearLayout::addItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:64
// [-2] void addStretch(int) 
// (11)qm148868135 (40)_ZN21QGraphicsLinearLayout10addStretchEi
//static
/*void qm148868135(int stretch)*/ {
  int stretch = *(int*)this_;
  (void) ((QGraphicsLinearLayout*)this_)->addStretch(stretch);
   auto xptr = (void (QGraphicsLinearLayout::*)(int) ) &QGraphicsLinearLayout::addStretch;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QGraphicsLinearLayoutD2Ev(void *this_)*/ {
  delete (QGraphicsLinearLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicslinearlayout
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
