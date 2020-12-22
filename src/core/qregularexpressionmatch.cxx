//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(regularexpression)
// /usr/include/qt/QtCore/qregularexpression.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qregularexpression.h>
#include <QtCore>
#include "callback_inherit.h"

// QRegularExpressionMatch is pure virtual: false false
// QRegularExpressionMatch has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRegularExpressionMatch_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRegularExpressionMatch_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRegularExpressionMatch_t qt_meta_stringdata_MyQRegularExpressionMatch = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQRegularExpressionMatch"
  },
  "MyQRegularExpressionMatch"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRegularExpressionMatch[] = {
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
class Q_DECL_EXPORT MyQRegularExpressionMatch : public QRegularExpressionMatch {
public:
  virtual ~MyQRegularExpressionMatch() {}
// void QRegularExpressionMatch()
MyQRegularExpressionMatch() : QRegularExpressionMatch() {}
// void QRegularExpressionMatch(const QRegularExpressionMatch &)
MyQRegularExpressionMatch(const QRegularExpressionMatch & match_) : QRegularExpressionMatch(match_) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qregularexpressionmatch(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:196
// [-2] void QRegularExpressionMatch() 
// (12)qm2043354271 (32)_ZN23QRegularExpressionMatchC2Ev
/*void* qm2043354271()*/{
  ;
  this_ =  new QRegularExpressionMatch();
  this_ =  new MyQRegularExpressionMatch();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:198
// [-2] void QRegularExpressionMatch(const QRegularExpressionMatch &) 
// (12)qm3658643577 (35)_ZN23QRegularExpressionMatchC2ERKS_
/*void* qm3658643577(const QRegularExpressionMatch & match_)*/{
  const QRegularExpressionMatch & match_ = *(const QRegularExpressionMatch *)this_;
  this_ =  new QRegularExpressionMatch(match_);
  this_ =  new MyQRegularExpressionMatch(match_);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:200
// [8] QRegularExpressionMatch & operator=(QRegularExpressionMatch &&) 
// (11)qm214943619 (34)_ZN23QRegularExpressionMatchaSEOS_
//static
/*void qm214943619(QRegularExpressionMatch && match_)*/ {
  QRegularExpressionMatch && match_ =  static_cast<QRegularExpressionMatch &&>(*(QRegularExpressionMatch *)this_);
  (void) ((QRegularExpressionMatch*)this_)->operator=(match_);
  // auto xptr = (QRegularExpressionMatch & (QRegularExpressionMatch::*)(QRegularExpressionMatch&&) ) &QRegularExpressionMatch::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:202
// [-2] void swap(QRegularExpressionMatch &) 
// (12)qm3959688766 (37)_ZN23QRegularExpressionMatch4swapERS_
//static
/*void qm3959688766(QRegularExpressionMatch & other)*/ {
  QRegularExpressionMatch & other = *(QRegularExpressionMatch *)this_;
  (void) ((QRegularExpressionMatch*)this_)->swap(other);
   auto xptr = (void (QRegularExpressionMatch::*)(QRegularExpressionMatch&) ) &QRegularExpressionMatch::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN23QRegularExpressionMatchD2Ev(void *this_)*/ {
  delete (QRegularExpressionMatch*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qregularexpressionmatch
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(regularexpression)
#endif // #ifndef QT_MINIMAL
//  footer block end
