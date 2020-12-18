//  header block begin

// /usr/include/qt/QtCore/qlogging.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlogging.h>
#include <QtCore>
#include "callback_inherit.h"

// QMessageLogContext is pure virtual: false false
// QMessageLogContext has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMessageLogContext_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMessageLogContext_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMessageLogContext_t qt_meta_stringdata_MyQMessageLogContext = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQMessageLogContext"
  },
  "MyQMessageLogContext"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMessageLogContext[] = {
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
class Q_DECL_EXPORT MyQMessageLogContext : public QMessageLogContext {
public:
  virtual ~MyQMessageLogContext() {}
// void QMessageLogContext()
MyQMessageLogContext() : QMessageLogContext() {}
// void QMessageLogContext(const char *, int, const char *, const char *)
MyQMessageLogContext(const char * fileName, int lineNumber, const char * functionName, const char * categoryName) : QMessageLogContext(fileName, lineNumber, functionName, categoryName) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmessagelogcontext(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:66
// [-2] void QMessageLogContext() 
// (12)qm3610397043 (27)_ZN18QMessageLogContextC2Ev
/*void* qm3610397043()*/{
  ;
  this_ =  new QMessageLogContext();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:67
// [-2] void QMessageLogContext(const char *, int, const char *, const char *) 
// (12)qm2713371922 (36)_ZN18QMessageLogContextC2EPKciS1_S1_
/*void* qm2713371922(const char * fileName, int lineNumber, const char * functionName, const char * categoryName)*/{
  const char * fileName = *(const char **)this_; int lineNumber = *(int*)this_; const char * functionName = *(const char **)this_; const char * categoryName = *(const char **)this_;
  this_ =  new QMessageLogContext(fileName, lineNumber, functionName, categoryName);
}


/*void C_ZN18QMessageLogContextD2Ev(void *this_)*/ {
  delete (QMessageLogContext*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmessagelogcontext
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
