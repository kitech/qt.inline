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

// QGraphicsItemGroup is pure virtual: false false
// QGraphicsItemGroup has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsItemGroup_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsItemGroup_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsItemGroup_t qt_meta_stringdata_MyQGraphicsItemGroup = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQGraphicsItemGroup"
  },
  "MyQGraphicsItemGroup"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsItemGroup[] = {
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
class Q_DECL_EXPORT MyQGraphicsItemGroup : public QGraphicsItemGroup {
public:
  virtual ~MyQGraphicsItemGroup() {}
// void QGraphicsItemGroup(QGraphicsItem *)
MyQGraphicsItemGroup(QGraphicsItem * parent) : QGraphicsItemGroup(parent) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsitemgroup(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN18QGraphicsItemGroupD2Ev(void *this_)*/ {
  delete (QGraphicsItemGroup*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsitemgroup
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
