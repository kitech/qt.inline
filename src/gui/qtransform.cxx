//  header block begin

// /usr/include/qt/QtGui/qtransform.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtransform.h>
#include <QtGui>
#include "callback_inherit.h"

// QTransform is pure virtual: false false
// QTransform has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTransform_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTransform_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTransform_t qt_meta_stringdata_MyQTransform = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQTransform"
  },
  "MyQTransform"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTransform[] = {
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
class Q_DECL_EXPORT MyQTransform : public QTransform {
public:
  virtual ~MyQTransform() {}
// void QTransform(Qt::Initialization)
MyQTransform(Qt::Initialization arg0) : QTransform(arg0) {}
// void QTransform()
MyQTransform() : QTransform() {}
// void QTransform(qreal, qreal, qreal, qreal, qreal, qreal, qreal, qreal, qreal)
MyQTransform(qreal h11, qreal h12, qreal h13, qreal h21, qreal h22, qreal h23, qreal h31, qreal h32, qreal h33) : QTransform(h11, h12, h13, h21, h22, h23, h31, h32, h33) {}
// void QTransform(qreal, qreal, qreal, qreal, qreal, qreal)
MyQTransform(qreal h11, qreal h12, qreal h21, qreal h22, qreal dx, qreal dy) : QTransform(h11, h12, h21, h22, dx, dy) {}
// void QTransform(const QMatrix &)
MyQTransform(const QMatrix & mtx) : QTransform(mtx) {}
// void QTransform(QTransform &&)
MyQTransform(QTransform && other) : QTransform(other) {}
// void QTransform(const QTransform &)
MyQTransform(const QTransform & other) : QTransform(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtransform(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:68
// [-2] void QTransform(Qt::Initialization) 
// (11)qm189374469 (39)_ZN10QTransformC2EN2Qt14InitializationE
/*void* qm189374469(Qt::Initialization arg0)*/{
  Qt::Initialization arg0 = *(Qt::Initialization*)this_;
  this_ =  new QTransform(arg0);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:81
// [88] QTransform & operator=(QTransform &&) 
// (11)qm176050776 (21)_ZN10QTransformaSEOS_
//static
/*void qm176050776(QTransform && other)*/ {
  QTransform && other =  static_cast<QTransform &&>(*(QTransform *)this_);
  (void) ((QTransform*)this_)->operator=(other);
  // auto xptr = (QTransform & (QTransform::*)(QTransform&&) ) &QTransform::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:84
// [-2] void QTransform(QTransform &&) 
// (12)qm3829967000 (21)_ZN10QTransformC2EOS_
/*void* qm3829967000(QTransform && other)*/{
  QTransform && other =  static_cast<QTransform &&>(*(QTransform *)this_);
  this_ =  new QTransform(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:87
// [-2] void QTransform(const QTransform &) 
// (12)qm3407200944 (22)_ZN10QTransformC2ERKS_
/*void* qm3407200944(const QTransform & other)*/{
  const QTransform & other = *(const QTransform *)this_;
  this_ =  new QTransform(other);
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:92
// [1] bool isAffine() const
// (11)qm215070371 (27)_ZNK10QTransform8isAffineEv
//static
/*void qm215070371()*/ {
  ;
  (void) ((QTransform*)this_)->isAffine();
   auto xptr = (bool (QTransform::*)() const ) &QTransform::isAffine;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:93
// [1] bool isIdentity() const
// (11)qm530671216 (30)_ZNK10QTransform10isIdentityEv
//static
/*void qm530671216()*/ {
  ;
  (void) ((QTransform*)this_)->isIdentity();
   auto xptr = (bool (QTransform::*)() const ) &QTransform::isIdentity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:94
// [1] bool isInvertible() const
// (12)qm1375612013 (32)_ZNK10QTransform12isInvertibleEv
//static
/*void qm1375612013()*/ {
  ;
  (void) ((QTransform*)this_)->isInvertible();
   auto xptr = (bool (QTransform::*)() const ) &QTransform::isInvertible;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:95
// [1] bool isScaling() const
// (12)qm1244476174 (28)_ZNK10QTransform9isScalingEv
//static
/*void qm1244476174()*/ {
  ;
  (void) ((QTransform*)this_)->isScaling();
   auto xptr = (bool (QTransform::*)() const ) &QTransform::isScaling;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:96
// [1] bool isRotating() const
// (11)qm771750511 (30)_ZNK10QTransform10isRotatingEv
//static
/*void qm771750511()*/ {
  ;
  (void) ((QTransform*)this_)->isRotating();
   auto xptr = (bool (QTransform::*)() const ) &QTransform::isRotating;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:97
// [1] bool isTranslating() const
// (12)qm4249643849 (33)_ZNK10QTransform13isTranslatingEv
//static
/*void qm4249643849()*/ {
  ;
  (void) ((QTransform*)this_)->isTranslating();
   auto xptr = (bool (QTransform::*)() const ) &QTransform::isTranslating;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:101
// [8] qreal determinant() const
// (12)qm3882497857 (31)_ZNK10QTransform11determinantEv
//static
/*void qm3882497857()*/ {
  ;
  (void) ((QTransform*)this_)->determinant();
   auto xptr = (double (QTransform::*)() const ) &QTransform::determinant;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:107
// [8] qreal m11() const
// (12)qm4206751015 (22)_ZNK10QTransform3m11Ev
//static
/*void qm4206751015()*/ {
  ;
  (void) ((QTransform*)this_)->m11();
   auto xptr = (double (QTransform::*)() const ) &QTransform::m11;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:108
// [8] qreal m12() const
// (12)qm4177220478 (22)_ZNK10QTransform3m12Ev
//static
/*void qm4177220478()*/ {
  ;
  (void) ((QTransform*)this_)->m12();
   auto xptr = (double (QTransform::*)() const ) &QTransform::m12;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:109
// [8] qreal m13() const
// (12)qm4181277001 (22)_ZNK10QTransform3m13Ev
//static
/*void qm4181277001()*/ {
  ;
  (void) ((QTransform*)this_)->m13();
   auto xptr = (double (QTransform::*)() const ) &QTransform::m13;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:110
// [8] qreal m21() const
// (12)qm3892855497 (22)_ZNK10QTransform3m21Ev
//static
/*void qm3892855497()*/ {
  ;
  (void) ((QTransform*)this_)->m21();
   auto xptr = (double (QTransform::*)() const ) &QTransform::m21;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:111
// [8] qreal m22() const
// (12)qm3931045008 (22)_ZNK10QTransform3m22Ev
//static
/*void qm3931045008()*/ {
  ;
  (void) ((QTransform*)this_)->m22();
   auto xptr = (double (QTransform::*)() const ) &QTransform::m22;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:112
// [8] qreal m23() const
// (12)qm3951859367 (22)_ZNK10QTransform3m23Ev
//static
/*void qm3951859367()*/ {
  ;
  (void) ((QTransform*)this_)->m23();
   auto xptr = (double (QTransform::*)() const ) &QTransform::m23;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:113
// [8] qreal m31() const
// (12)qm1353983404 (22)_ZNK10QTransform3m31Ev
//static
/*void qm1353983404()*/ {
  ;
  (void) ((QTransform*)this_)->m31();
   auto xptr = (double (QTransform::*)() const ) &QTransform::m31;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:114
// [8] qreal m32() const
// (12)qm1391631349 (22)_ZNK10QTransform3m32Ev
//static
/*void qm1391631349()*/ {
  ;
  (void) ((QTransform*)this_)->m32();
   auto xptr = (double (QTransform::*)() const ) &QTransform::m32;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:115
// [8] qreal m33() const
// (12)qm1395716546 (22)_ZNK10QTransform3m33Ev
//static
/*void qm1395716546()*/ {
  ;
  (void) ((QTransform*)this_)->m33();
   auto xptr = (double (QTransform::*)() const ) &QTransform::m33;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:116
// [8] qreal dx() const
// (12)qm1981430239 (21)_ZNK10QTransform2dxEv
//static
/*void qm1981430239()*/ {
  ;
  (void) ((QTransform*)this_)->dx();
   auto xptr = (double (QTransform::*)() const ) &QTransform::dx;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:117
// [8] qreal dy() const
// (12)qm2010665960 (21)_ZNK10QTransform2dyEv
//static
/*void qm2010665960()*/ {
  ;
  (void) ((QTransform*)this_)->dy();
   auto xptr = (double (QTransform::*)() const ) &QTransform::dy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:166
// [88] QTransform & operator*=(qreal) 
// (12)qm3656428676 (19)_ZN10QTransformmLEd
//static
/*void qm3656428676(double div)*/ {
  double div = *(double*)this_;
  (void) ((QTransform*)this_)->operator*=(div);
  // auto xptr = (QTransform & (QTransform::*)(double) ) &QTransform::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:167
// [88] QTransform & operator/=(qreal) 
// (12)qm3041510824 (19)_ZN10QTransformdVEd
//static
/*void qm3041510824(double div)*/ {
  double div = *(double*)this_;
  (void) ((QTransform*)this_)->operator/=(div);
  // auto xptr = (QTransform & (QTransform::*)(double) ) &QTransform::operator/=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:168
// [88] QTransform & operator+=(qreal) 
// (12)qm2072191942 (19)_ZN10QTransformpLEd
//static
/*void qm2072191942(double div)*/ {
  double div = *(double*)this_;
  (void) ((QTransform*)this_)->operator+=(div);
  // auto xptr = (QTransform & (QTransform::*)(double) ) &QTransform::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:169
// [88] QTransform & operator-=(qreal) 
// (12)qm3745214063 (19)_ZN10QTransformmIEd
//static
/*void qm3745214063(double div)*/ {
  double div = *(double*)this_;
  (void) ((QTransform*)this_)->operator-=(div);
  // auto xptr = (QTransform & (QTransform::*)(double) ) &QTransform::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QTransformD2Ev(void *this_)*/ {
  delete (QTransform*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtransform
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
