//  header block begin

// /usr/include/qt/QtGui/qfontdatabase.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfontdatabase.h>
#include <QtGui>
#include "callback_inherit.h"

// QFontDatabase is pure virtual: false false
// QFontDatabase has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFontDatabase_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFontDatabase_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFontDatabase_t qt_meta_stringdata_MyQFontDatabase = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQFontDatabase"
  },
  "MyQFontDatabase"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFontDatabase[] = {
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
class Q_DECL_EXPORT MyQFontDatabase : public QFontDatabase {
public:
  virtual ~MyQFontDatabase() {}
// void QFontDatabase()
MyQFontDatabase() : QFontDatabase() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfontdatabase(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:118
// [-2] void QFontDatabase() 
// (12)qm1247138191 (22)_ZN13QFontDatabaseC2Ev
/*void* qm1247138191()*/{
  ;
  this_ =  new QFontDatabase();
  this_ =  new MyQFontDatabase();
}


/*void C_ZN13QFontDatabaseD2Ev(void *this_)*/ {
  delete (QFontDatabase*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfontdatabase
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
