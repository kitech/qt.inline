//  header block begin

// /usr/include/qt/QtCore/qtemporarydir.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtemporarydir.h>
#include <QtCore>
#include "callback_inherit.h"

// QTemporaryDir is pure virtual: false false
// QTemporaryDir has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTemporaryDir_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTemporaryDir_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTemporaryDir_t qt_meta_stringdata_MyQTemporaryDir = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQTemporaryDir"
  },
  "MyQTemporaryDir"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTemporaryDir[] = {
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
class Q_DECL_EXPORT MyQTemporaryDir : public QTemporaryDir {
public:
  virtual ~MyQTemporaryDir() {}
// void QTemporaryDir()
MyQTemporaryDir() : QTemporaryDir() {}
// void QTemporaryDir(const QString &)
MyQTemporaryDir(const QString & templateName) : QTemporaryDir(templateName) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtemporarydir(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN13QTemporaryDirD2Ev(void *this_)*/ {
  delete (QTemporaryDir*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtemporarydir
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
