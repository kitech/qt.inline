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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolorspace.h:83
// [-2] void QColorSpace() 
// (12)qm2005174528 (20)_ZN11QColorSpaceC2Ev
/*void* qm2005174528()*/{
  ;
  this_ =  new QColorSpace();
  this_ =  new MyQColorSpace();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolorspace.h:84
// [-2] void QColorSpace(QColorSpace::NamedColorSpace) 
// (12)qm2421250810 (40)_ZN11QColorSpaceC2ENS_15NamedColorSpaceE
/*void* qm2421250810(QColorSpace::NamedColorSpace namedColorSpace)*/{
  QColorSpace::NamedColorSpace namedColorSpace = *(QColorSpace::NamedColorSpace*)this_;
  this_ =  new QColorSpace(namedColorSpace);
  this_ =  new MyQColorSpace(namedColorSpace);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolorspace.h:85
// [-2] void QColorSpace(QColorSpace::Primaries, QColorSpace::TransferFunction, float) 
// (12)qm4107089349 (56)_ZN11QColorSpaceC2ENS_9PrimariesENS_16TransferFunctionEf
/*void* qm4107089349(QColorSpace::Primaries primaries, QColorSpace::TransferFunction fun, float gamma)*/{
  QColorSpace::Primaries primaries = *(QColorSpace::Primaries*)this_; QColorSpace::TransferFunction fun = *(QColorSpace::TransferFunction*)this_; float gamma = *(float*)this_;
  this_ =  new QColorSpace(primaries, fun, gamma);
  this_ =  new MyQColorSpace(primaries, fun, gamma);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolorspace.h:86
// [-2] void QColorSpace(QColorSpace::Primaries, float) 
// (9)qm1536688 (34)_ZN11QColorSpaceC2ENS_9PrimariesEf
/*void* qm1536688(QColorSpace::Primaries primaries, float gamma)*/{
  QColorSpace::Primaries primaries = *(QColorSpace::Primaries*)this_; float gamma = *(float*)this_;
  this_ =  new QColorSpace(primaries, gamma);
  this_ =  new MyQColorSpace(primaries, gamma);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolorspace.h:87
// [-2] void QColorSpace(const QPointF &, const QPointF &, const QPointF &, const QPointF &, QColorSpace::TransferFunction, float) 
// (12)qm3792308814 (61)_ZN11QColorSpaceC2ERK7QPointFS2_S2_S2_NS_16TransferFunctionEf
/*void* qm3792308814(const QPointF & whitePoint, const QPointF & redPoint, const QPointF & greenPoint, const QPointF & bluePoint, QColorSpace::TransferFunction fun, float gamma)*/{
  const QPointF & whitePoint = *(const QPointF *)this_; const QPointF & redPoint = *(const QPointF *)this_; const QPointF & greenPoint = *(const QPointF *)this_; const QPointF & bluePoint = *(const QPointF *)this_; QColorSpace::TransferFunction fun = *(QColorSpace::TransferFunction*)this_; float gamma = *(float*)this_;
  this_ =  new QColorSpace(whitePoint, redPoint, greenPoint, bluePoint, fun, gamma);
  this_ =  new MyQColorSpace(whitePoint, redPoint, greenPoint, bluePoint, fun, gamma);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolorspace.h:92
// [-2] void QColorSpace(const QColorSpace &) 
// (12)qm3322455524 (23)_ZN11QColorSpaceC2ERKS_
/*void* qm3322455524(const QColorSpace & colorSpace)*/{
  const QColorSpace & colorSpace = *(const QColorSpace *)this_;
  this_ =  new QColorSpace(colorSpace);
  this_ =  new MyQColorSpace(colorSpace);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolorspace.h:95
// [-2] void QColorSpace(QColorSpace &&) 
// (12)qm2487599634 (22)_ZN11QColorSpaceC2EOS_
/*void* qm2487599634(QColorSpace && colorSpace)*/{
  QColorSpace && colorSpace =  static_cast<QColorSpace &&>(*(QColorSpace *)this_);
  this_ =  new QColorSpace(colorSpace);
  this_ =  new MyQColorSpace(colorSpace);
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
