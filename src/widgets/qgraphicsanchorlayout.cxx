//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsanchorlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsAnchorLayout is pure virtual: false false
// QGraphicsAnchorLayout has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsAnchorLayout_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsAnchorLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsAnchorLayout_t qt_meta_stringdata_MyQGraphicsAnchorLayout = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQGraphicsAnchorLayout"
  },
  "MyQGraphicsAnchorLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsAnchorLayout[] = {
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
class Q_DECL_EXPORT MyQGraphicsAnchorLayout : public QGraphicsAnchorLayout {
public:
  virtual ~MyQGraphicsAnchorLayout() {}
// void QGraphicsAnchorLayout(QGraphicsLayoutItem *)
MyQGraphicsAnchorLayout(QGraphicsLayoutItem * parent) : QGraphicsAnchorLayout(parent) {}
// Protected virtual Direct Visibility=Default Availability=Available
// [16] QSizeF sizeHint(Qt::SizeHint, const QSizeF &)
  virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF & constraint) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHint", &handled, 2, (uint64_t)which, (uint64_t)&constraint, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSizeF){};}
    auto prv = (QSizeF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSizeF
    } else {
    return QGraphicsAnchorLayout::sizeHint(which, constraint);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsanchorlayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:78
// [-2] void QGraphicsAnchorLayout(QGraphicsLayoutItem *) 
// (12)qm1656068766 (51)_ZN21QGraphicsAnchorLayoutC2EP19QGraphicsLayoutItem
/*void* qm1656068766(QGraphicsLayoutItem * parent)*/{
  auto _nilp = (MyQGraphicsAnchorLayout*)(0);
  QGraphicsLayoutItem * parent = *(QGraphicsLayoutItem **)this_;
  this_ =  new QGraphicsAnchorLayout(parent);
  this_ =  new MyQGraphicsAnchorLayout(parent);
}


/*void C_ZN21QGraphicsAnchorLayoutD2Ev(void *this_)*/ {
  delete (QGraphicsAnchorLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsanchorlayout
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
