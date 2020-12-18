//  header block begin

// /usr/include/qt/QtGui/qcolorspace.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcolorspace.h>
#include <QtGui>
#include "callback_inherit.h"

// QColorSpace is pure virtual: false false
// QColorSpace has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQColorSpace_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQColorSpace_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQColorSpace_t qt_meta_stringdata_MyQColorSpace = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQColorSpace"
  },
  "MyQColorSpace"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQColorSpace[] = {
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
class Q_DECL_EXPORT MyQColorSpace : public QColorSpace {
public:
  virtual ~MyQColorSpace() {}
// void QColorSpace()
MyQColorSpace() : QColorSpace() {}
// void QColorSpace(QColorSpace::NamedColorSpace)
MyQColorSpace(QColorSpace::NamedColorSpace namedColorSpace) : QColorSpace(namedColorSpace) {}
// void QColorSpace(QColorSpace::Primaries, QColorSpace::TransferFunction, float)
MyQColorSpace(QColorSpace::Primaries primaries, QColorSpace::TransferFunction fun, float gamma) : QColorSpace(primaries, fun, gamma) {}
// void QColorSpace(QColorSpace::Primaries, float)
MyQColorSpace(QColorSpace::Primaries primaries, float gamma) : QColorSpace(primaries, gamma) {}
// void QColorSpace(const QPointF &, const QPointF &, const QPointF &, const QPointF &, QColorSpace::TransferFunction, float)
MyQColorSpace(const QPointF & whitePoint, const QPointF & redPoint, const QPointF & greenPoint, const QPointF & bluePoint, QColorSpace::TransferFunction fun, float gamma) : QColorSpace(whitePoint, redPoint, greenPoint, bluePoint, fun, gamma) {}
// void QColorSpace(const QColorSpace &)
MyQColorSpace(const QColorSpace & colorSpace) : QColorSpace(colorSpace) {}
// void QColorSpace(QColorSpace &&)
MyQColorSpace(QColorSpace && colorSpace) : QColorSpace(colorSpace) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcolorspace(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolorspace.h:95
// [-2] void QColorSpace(QColorSpace &&) 
// (12)qm2487599634 (22)_ZN11QColorSpaceC2EOS_
/*void* qm2487599634(QColorSpace && colorSpace)*/{
  QColorSpace && colorSpace =  static_cast<QColorSpace &&>(*(QColorSpace *)this_);
  this_ =  new QColorSpace(colorSpace);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolorspace.h:98
// [8] QColorSpace & operator=(QColorSpace &&) 
// (12)qm2054371538 (22)_ZN11QColorSpaceaSEOS_
//static
/*void qm2054371538(QColorSpace && colorSpace)*/ {
  QColorSpace && colorSpace =  static_cast<QColorSpace &&>(*(QColorSpace *)this_);
  (void) ((QColorSpace*)this_)->operator=(colorSpace);
  // auto xptr = (QColorSpace & (QColorSpace::*)(QColorSpace&&) ) &QColorSpace::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolorspace.h:105
// [-2] void swap(QColorSpace &) 
// (12)qm3498657818 (25)_ZN11QColorSpace4swapERS_
//static
/*void qm3498657818(QColorSpace & colorSpace)*/ {
  QColorSpace & colorSpace = *(QColorSpace *)this_;
  (void) ((QColorSpace*)this_)->swap(colorSpace);
   auto xptr = (void (QColorSpace::*)(QColorSpace&) ) &QColorSpace::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QColorSpaceD2Ev(void *this_)*/ {
  delete (QColorSpace*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcolorspace
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
