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

// QRegularExpressionMatchIterator is pure virtual: false false
// QRegularExpressionMatchIterator has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRegularExpressionMatchIterator_t {
  QByteArrayData data[1];
  char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRegularExpressionMatchIterator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRegularExpressionMatchIterator_t qt_meta_stringdata_MyQRegularExpressionMatchIterator = {
   {
  QT_MOC_LITERAL(0, 0, 33), // "MyQRegularExpressionMatchIterator"
  },
  "MyQRegularExpressionMatchIterator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRegularExpressionMatchIterator[] = {
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
class Q_DECL_EXPORT MyQRegularExpressionMatchIterator : public QRegularExpressionMatchIterator {
public:
  virtual ~MyQRegularExpressionMatchIterator() {}
// void QRegularExpressionMatchIterator()
MyQRegularExpressionMatchIterator() : QRegularExpressionMatchIterator() {}
// void QRegularExpressionMatchIterator(const QRegularExpressionMatchIterator &)
MyQRegularExpressionMatchIterator(const QRegularExpressionMatchIterator & iterator) : QRegularExpressionMatchIterator(iterator) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qregularexpressionmatchiterator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:268
// [8] QRegularExpressionMatchIterator & operator=(QRegularExpressionMatchIterator &&) 
// (12)qm3468675379 (42)_ZN31QRegularExpressionMatchIteratoraSEOS_
//static
/*void qm3468675379(QRegularExpressionMatchIterator && iterator)*/ {
  QRegularExpressionMatchIterator && iterator =  static_cast<QRegularExpressionMatchIterator &&>(*(QRegularExpressionMatchIterator *)this_);
  (void) ((QRegularExpressionMatchIterator*)this_)->operator=(iterator);
  // auto xptr = (QRegularExpressionMatchIterator & (QRegularExpressionMatchIterator::*)(QRegularExpressionMatchIterator&&) ) &QRegularExpressionMatchIterator::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:270
// [-2] void swap(QRegularExpressionMatchIterator &) 
// (12)qm3889998942 (45)_ZN31QRegularExpressionMatchIterator4swapERS_
//static
/*void qm3889998942(QRegularExpressionMatchIterator & other)*/ {
  QRegularExpressionMatchIterator & other = *(QRegularExpressionMatchIterator *)this_;
  (void) ((QRegularExpressionMatchIterator*)this_)->swap(other);
   auto xptr = (void (QRegularExpressionMatchIterator::*)(QRegularExpressionMatchIterator&) ) &QRegularExpressionMatchIterator::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN31QRegularExpressionMatchIteratorD2Ev(void *this_)*/ {
  delete (QRegularExpressionMatchIterator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qregularexpressionmatchiterator
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
