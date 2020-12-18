//  header block begin

// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextLength is pure virtual: false false
// QTextLength has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextLength_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextLength_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextLength_t qt_meta_stringdata_MyQTextLength = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTextLength"
  },
  "MyQTextLength"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextLength[] = {
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
class Q_DECL_EXPORT MyQTextLength : public QTextLength {
public:
  virtual ~MyQTextLength() {}
// void QTextLength()
MyQTextLength() : QTextLength() {}
// void QTextLength(QTextLength::Type, qreal)
MyQTextLength(QTextLength::Type type_, qreal value) : QTextLength(type_, value) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextlength(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:89
// [-2] void QTextLength() 
// (11)qm199100388 (20)_ZN11QTextLengthC2Ev
/*void* qm199100388()*/{
  ;
  this_ =  new QTextLength();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:91
// [-2] void QTextLength(QTextLength::Type, qreal) 
// (12)qm2077484502 (29)_ZN11QTextLengthC2ENS_4TypeEd
/*void* qm2077484502(QTextLength::Type type_, double value)*/{
  QTextLength::Type type_ = *(QTextLength::Type*)this_; double value = *(double*)this_;
  this_ =  new QTextLength(type_, value);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:93
// [4] QTextLength::Type type() const
// (12)qm1008326266 (24)_ZNK11QTextLength4typeEv
//static
/*void qm1008326266()*/ {
  ;
  (void) ((QTextLength*)this_)->type();
   auto xptr = (QTextLength::Type (QTextLength::*)() const ) &QTextLength::type;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:94
// [8] qreal value(qreal) const
// (12)qm2779665589 (25)_ZNK11QTextLength5valueEd
//static
/*void qm2779665589(double maximumLength)*/ {
  double maximumLength = *(double*)this_;
  (void) ((QTextLength*)this_)->value(maximumLength);
   auto xptr = (double (QTextLength::*)(double) const ) &QTextLength::value;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:104
// [8] qreal rawValue() const
// (11)qm185027049 (28)_ZNK11QTextLength8rawValueEv
//static
/*void qm185027049()*/ {
  ;
  (void) ((QTextLength*)this_)->rawValue();
   auto xptr = (double (QTextLength::*)() const ) &QTextLength::rawValue;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:106
// [1] bool operator==(const QTextLength &) const
// (12)qm3949318569 (24)_ZNK11QTextLengtheqERKS_
//static
/*void qm3949318569(const QTextLength & other)*/ {
  const QTextLength & other = *(const QTextLength *)this_;
  (void) ((QTextLength*)this_)->operator==(other);
  // auto xptr = (bool (QTextLength::*)(QTextLength const&) const ) &QTextLength::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:109
// [1] bool operator!=(const QTextLength &) const
// (12)qm1898300894 (24)_ZNK11QTextLengthneERKS_
//static
/*void qm1898300894(const QTextLength & other)*/ {
  const QTextLength & other = *(const QTextLength *)this_;
  (void) ((QTextLength*)this_)->operator!=(other);
  // auto xptr = (bool (QTextLength::*)(QTextLength const&) const ) &QTextLength::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QTextLengthD2Ev(void *this_)*/ {
  delete (QTextLength*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextlength
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
