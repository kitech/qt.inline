//  header block begin

// /usr/include/qt/QtQml/qqmlfile.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlfile.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlFile is pure virtual: false false
// QQmlFile has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlFile_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlFile_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlFile_t qt_meta_stringdata_MyQQmlFile = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQQmlFile"
  },
  "MyQQmlFile"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlFile[] = {
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
class Q_DECL_EXPORT MyQQmlFile : public QQmlFile {
public:
  virtual ~MyQQmlFile() {}
// void QQmlFile()
MyQQmlFile() : QQmlFile() {}
// void QQmlFile(QQmlEngine *, const QUrl &)
MyQQmlFile(QQmlEngine * arg0, const QUrl & arg1) : QQmlFile(arg0, arg1) {}
// void QQmlFile(QQmlEngine *, const QString &)
MyQQmlFile(QQmlEngine * arg0, const QString & arg1) : QQmlFile(arg0, arg1) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlfile(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:56
// [-2] void QQmlFile() 
// (12)qm1366840527 (16)_ZN8QQmlFileC2Ev
/*void* qm1366840527()*/{
  ;
  this_ =  new QQmlFile();
  this_ =  new MyQQmlFile();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:57
// [-2] void QQmlFile(QQmlEngine *, const QUrl &) 
// (12)qm1976729713 (35)_ZN8QQmlFileC2EP10QQmlEngineRK4QUrl
/*void* qm1976729713(QQmlEngine * arg0, const QUrl & arg1)*/{
  QQmlEngine * arg0 = *(QQmlEngine **)this_; const QUrl & arg1 = *(const QUrl *)this_;
  this_ =  new QQmlFile(arg0, arg1);
  this_ =  new MyQQmlFile(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:58
// [-2] void QQmlFile(QQmlEngine *, const QString &) 
// (12)qm4057105212 (38)_ZN8QQmlFileC2EP10QQmlEngineRK7QString
/*void* qm4057105212(QQmlEngine * arg0, const QString & arg1)*/{
  QQmlEngine * arg0 = *(QQmlEngine **)this_; const QString & arg1 = *(const QString *)this_;
  this_ =  new QQmlFile(arg0, arg1);
  this_ =  new MyQQmlFile(arg0, arg1);
}


/*void C_ZN8QQmlFileD2Ev(void *this_)*/ {
  delete (QQmlFile*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlfile
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
