//  header block begin

// /usr/include/qt/QtWidgets/qlayoutitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlayoutitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWidgetItem is pure virtual: false false
// QWidgetItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWidgetItem_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWidgetItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWidgetItem_t qt_meta_stringdata_MyQWidgetItem = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQWidgetItem"
  },
  "MyQWidgetItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWidgetItem[] = {
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
class Q_DECL_EXPORT MyQWidgetItem : public QWidgetItem {
public:
  virtual ~MyQWidgetItem() {}
// void QWidgetItem(QWidget *)
MyQWidgetItem(QWidget * w) : QWidgetItem(w) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwidgetitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:130
// [-2] void QWidgetItem(QWidget *) 
// (12)qm3510836749 (28)_ZN11QWidgetItemC2EP7QWidget
/*void* qm3510836749(QWidget * w)*/{
  QWidget * w = *(QWidget **)this_;
  this_ =  new QWidgetItem(w);
}


/*void C_ZN11QWidgetItemD2Ev(void *this_)*/ {
  delete (QWidgetItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwidgetitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
