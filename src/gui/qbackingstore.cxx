//  header block begin

// /usr/include/qt/QtGui/qbackingstore.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbackingstore.h>
#include <QtGui>
#include "callback_inherit.h"

// QBackingStore is pure virtual: false false
// QBackingStore has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQBackingStore_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQBackingStore_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQBackingStore_t qt_meta_stringdata_MyQBackingStore = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQBackingStore"
  },
  "MyQBackingStore"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQBackingStore[] = {
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
class Q_DECL_EXPORT MyQBackingStore : public QBackingStore {
public:
  virtual ~MyQBackingStore() {}
// void QBackingStore(QWindow *)
MyQBackingStore(QWindow * window) : QBackingStore(window) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qbackingstore(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:62
// [-2] void QBackingStore(QWindow *) 
// (11)qm404467822 (30)_ZN13QBackingStoreC2EP7QWindow
/*void* qm404467822(QWindow * window)*/{
  QWindow * window = *(QWindow **)this_;
  this_ =  new QBackingStore(window);
  this_ =  new MyQBackingStore(window);
}


/*void C_ZN13QBackingStoreD2Ev(void *this_)*/ {
  delete (QBackingStore*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qbackingstore
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
