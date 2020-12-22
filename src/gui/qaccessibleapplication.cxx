//  header block begin

// /usr/include/qt/QtGui/qaccessibleobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessibleobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleApplication is pure virtual: false false
// QAccessibleApplication has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleApplication_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleApplication_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleApplication_t qt_meta_stringdata_MyQAccessibleApplication = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQAccessibleApplication"
  },
  "MyQAccessibleApplication"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleApplication[] = {
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
class Q_DECL_EXPORT MyQAccessibleApplication : public QAccessibleApplication {
public:
  virtual ~MyQAccessibleApplication() {}
// void QAccessibleApplication()
MyQAccessibleApplication() : QAccessibleApplication() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibleapplication(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:78
// [-2] void QAccessibleApplication() 
// (11)qm778521494 (31)_ZN22QAccessibleApplicationC2Ev
/*void* qm778521494()*/{
  ;
  this_ =  new QAccessibleApplication();
  this_ =  new MyQAccessibleApplication();
}


/*void C_ZN22QAccessibleApplicationD2Ev(void *this_)*/ {
  delete (QAccessibleApplication*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibleapplication
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
