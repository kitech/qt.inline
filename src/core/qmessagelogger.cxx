//  header block begin

// /usr/include/qt/QtCore/qlogging.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlogging.h>
#include <QtCore>
#include "callback_inherit.h"

// QMessageLogger is pure virtual: false false
// QMessageLogger has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMessageLogger_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMessageLogger_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMessageLogger_t qt_meta_stringdata_MyQMessageLogger = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQMessageLogger"
  },
  "MyQMessageLogger"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMessageLogger[] = {
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
class Q_DECL_EXPORT MyQMessageLogger : public QMessageLogger {
public:
  virtual ~MyQMessageLogger() {}
// void QMessageLogger()
MyQMessageLogger() : QMessageLogger() {}
// void QMessageLogger(const char *, int, const char *)
MyQMessageLogger(const char * file, int line, const char * function) : QMessageLogger(file, line, function) {}
// void QMessageLogger(const char *, int, const char *, const char *)
MyQMessageLogger(const char * file, int line, const char * function, const char * category) : QMessageLogger(file, line, function, category) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmessagelogger(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:89
// [-2] void QMessageLogger() 
// (11)qm446580560 (23)_ZN14QMessageLoggerC2Ev
/*void* qm446580560()*/{
  ;
  this_ =  new QMessageLogger();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:90
// [-2] void QMessageLogger(const char *, int, const char *) 
// (11)qm428606751 (29)_ZN14QMessageLoggerC2EPKciS1_
/*void* qm428606751(const char * file, int line, const char * function)*/{
  const char * file = *(const char **)this_; int line = *(int*)this_; const char * function = *(const char **)this_;
  this_ =  new QMessageLogger(file, line, function);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:92
// [-2] void QMessageLogger(const char *, int, const char *, const char *) 
// (11)qm573693238 (32)_ZN14QMessageLoggerC2EPKciS1_S1_
/*void* qm573693238(const char * file, int line, const char * function, const char * category)*/{
  const char * file = *(const char **)this_; int line = *(int*)this_; const char * function = *(const char **)this_; const char * category = *(const char **)this_;
  this_ =  new QMessageLogger(file, line, function, category);
}


/*void C_ZN14QMessageLoggerD2Ev(void *this_)*/ {
  delete (QMessageLogger*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmessagelogger
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
