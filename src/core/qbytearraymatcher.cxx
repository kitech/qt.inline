//  header block begin

// /usr/include/qt/QtCore/qbytearraymatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbytearraymatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QByteArrayMatcher is pure virtual: false false
// QByteArrayMatcher has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQByteArrayMatcher_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQByteArrayMatcher_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQByteArrayMatcher_t qt_meta_stringdata_MyQByteArrayMatcher = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQByteArrayMatcher"
  },
  "MyQByteArrayMatcher"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQByteArrayMatcher[] = {
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
class Q_DECL_EXPORT MyQByteArrayMatcher : public QByteArrayMatcher {
public:
  virtual ~MyQByteArrayMatcher() {}
// void QByteArrayMatcher()
MyQByteArrayMatcher() : QByteArrayMatcher() {}
// void QByteArrayMatcher(const QByteArray &)
MyQByteArrayMatcher(const QByteArray & pattern) : QByteArrayMatcher(pattern) {}
// void QByteArrayMatcher(const char *, int)
MyQByteArrayMatcher(const char * pattern, int length) : QByteArrayMatcher(pattern, length) {}
// void QByteArrayMatcher(const QByteArrayMatcher &)
MyQByteArrayMatcher(const QByteArrayMatcher & other) : QByteArrayMatcher(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qbytearraymatcher(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:65
// [8] QByteArray pattern() const
// (12)qm2982885432 (33)_ZNK17QByteArrayMatcher7patternEv
//static
/*void qm2982885432()*/ {
  ;
  (void) ((QByteArrayMatcher*)this_)->pattern();
   auto xptr = (QByteArray (QByteArrayMatcher::*)() const ) &QByteArrayMatcher::pattern;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QByteArrayMatcherD2Ev(void *this_)*/ {
  delete (QByteArrayMatcher*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qbytearraymatcher
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
