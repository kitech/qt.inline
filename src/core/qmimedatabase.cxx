//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(mimetype)
// /usr/include/qt/QtCore/qmimedatabase.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmimedatabase.h>
#include <QtCore>
#include "callback_inherit.h"

// QMimeDatabase is pure virtual: false false
// QMimeDatabase has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMimeDatabase_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMimeDatabase_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMimeDatabase_t qt_meta_stringdata_MyQMimeDatabase = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQMimeDatabase"
  },
  "MyQMimeDatabase"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMimeDatabase[] = {
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
class Q_DECL_EXPORT MyQMimeDatabase : public QMimeDatabase {
public:
  virtual ~MyQMimeDatabase() {}
// void QMimeDatabase()
MyQMimeDatabase() : QMimeDatabase() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmimedatabase(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:63
// [-2] void QMimeDatabase() 
// (11)qm662991940 (22)_ZN13QMimeDatabaseC2Ev
/*void* qm662991940()*/{
  ;
  this_ =  new QMimeDatabase();
  this_ =  new MyQMimeDatabase();
}


/*void C_ZN13QMimeDatabaseD2Ev(void *this_)*/ {
  delete (QMimeDatabase*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmimedatabase
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(mimetype)
#endif // #ifndef QT_MINIMAL
//  footer block end
