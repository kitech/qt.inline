//  header block begin

// /usr/include/qt/QtCore/qregexp.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qregexp.h>
#include <QtCore>
#include "callback_inherit.h"

// QRegExp is pure virtual: false false
// QRegExp has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRegExp_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRegExp_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRegExp_t qt_meta_stringdata_MyQRegExp = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQRegExp"
  },
  "MyQRegExp"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRegExp[] = {
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
class Q_DECL_EXPORT MyQRegExp : public QRegExp {
public:
  virtual ~MyQRegExp() {}
// void QRegExp()
MyQRegExp() : QRegExp() {}
// void QRegExp(const QString &, Qt::CaseSensitivity, QRegExp::PatternSyntax)
MyQRegExp(const QString & pattern, Qt::CaseSensitivity cs, QRegExp::PatternSyntax syntax) : QRegExp(pattern, cs, syntax) {}
// void QRegExp(const QRegExp &)
MyQRegExp(const QRegExp & rx) : QRegExp(rx) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qregexp(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:76
// [8] QRegExp & operator=(QRegExp &&) 
// (12)qm2154470243 (17)_ZN7QRegExpaSEOS_
//static
/*void qm2154470243(QRegExp && other)*/ {
  QRegExp && other =  static_cast<QRegExp &&>(*(QRegExp *)this_);
  (void) ((QRegExp*)this_)->operator=(other);
  // auto xptr = (QRegExp & (QRegExp::*)(QRegExp&&) ) &QRegExp::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:77
// [-2] void swap(QRegExp &) 
// (12)qm4115962669 (20)_ZN7QRegExp4swapERS_
//static
/*void qm4115962669(QRegExp & other)*/ {
  QRegExp & other = *(QRegExp *)this_;
  (void) ((QRegExp*)this_)->swap(other);
   auto xptr = (void (QRegExp::*)(QRegExp&) ) &QRegExp::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:80
// [1] bool operator!=(const QRegExp &) const
// (12)qm2672368323 (19)_ZNK7QRegExpneERKS_
//static
/*void qm2672368323(const QRegExp & rx)*/ {
  const QRegExp & rx = *(const QRegExp *)this_;
  (void) ((QRegExp*)this_)->operator!=(rx);
  // auto xptr = (bool (QRegExp::*)(QRegExp const&) const ) &QRegExp::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QRegExpD2Ev(void *this_)*/ {
  delete (QRegExp*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qregexp
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
