//  header block begin

// /usr/include/qt/QtGui/qmatrix.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmatrix.h>
#include <QtGui>
#include "callback_inherit.h"

// QMatrix is pure virtual: false false
// QMatrix has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMatrix_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMatrix_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMatrix_t qt_meta_stringdata_MyQMatrix = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQMatrix"
  },
  "MyQMatrix"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMatrix[] = {
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
class Q_DECL_EXPORT MyQMatrix : public QMatrix {
public:
  virtual ~MyQMatrix() {}
// void QMatrix(Qt::Initialization)
MyQMatrix(Qt::Initialization arg0) : QMatrix(arg0) {}
// void QMatrix()
MyQMatrix() : QMatrix() {}
// void QMatrix(qreal, qreal, qreal, qreal, qreal, qreal)
MyQMatrix(qreal m11, qreal m12, qreal m21, qreal m22, qreal dx, qreal dy) : QMatrix(m11, m12, m21, m22, dx, dy) {}
// void QMatrix(QMatrix &&)
MyQMatrix(QMatrix && other) : QMatrix(other) {}
// void QMatrix(const QMatrix &)
MyQMatrix(const QMatrix & other) : QMatrix(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmatrix(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:60
// [-2] void QMatrix(Qt::Initialization) 
// (12)qm4207020042 (35)_ZN7QMatrixC2EN2Qt14InitializationE
/*void* qm4207020042(Qt::Initialization arg0)*/{
  Qt::Initialization arg0 = *(Qt::Initialization*)this_;
  this_ =  new QMatrix(arg0);
  this_ =  new MyQMatrix(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:61
// [-2] void QMatrix() 
// (12)qm1775922781 (15)_ZN7QMatrixC2Ev
/*void* qm1775922781()*/{
  ;
  this_ =  new QMatrix();
  this_ =  new MyQMatrix();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:62
// [-2] void QMatrix(qreal, qreal, qreal, qreal, qreal, qreal) 
// (12)qm2063689224 (20)_ZN7QMatrixC2Edddddd
/*void* qm2063689224(double m11, double m12, double m21, double m22, double dx, double dy)*/{
  double m11 = *(double*)this_; double m12 = *(double*)this_; double m21 = *(double*)this_; double m22 = *(double*)this_; double dx = *(double*)this_; double dy = *(double*)this_;
  this_ =  new QMatrix(m11, m12, m21, m22, dx, dy);
  this_ =  new MyQMatrix(m11, m12, m21, m22, dx, dy);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:67
// [48] QMatrix & operator=(QMatrix &&) 
// (12)qm1258844750 (17)_ZN7QMatrixaSEOS_
//static
/*void qm1258844750(QMatrix && other)*/ {
  QMatrix && other =  static_cast<QMatrix &&>(*(QMatrix *)this_);
  (void) ((QMatrix*)this_)->operator=(other);
  // auto xptr = (QMatrix & (QMatrix::*)(QMatrix&&) ) &QMatrix::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:70
// [-2] void QMatrix(QMatrix &&) 
// (12)qm2772338830 (17)_ZN7QMatrixC2EOS_
/*void* qm2772338830(QMatrix && other)*/{
  QMatrix && other =  static_cast<QMatrix &&>(*(QMatrix *)this_);
  this_ =  new QMatrix(other);
  this_ =  new MyQMatrix(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:72
// [-2] void QMatrix(const QMatrix &) 
// (12)qm1065353665 (18)_ZN7QMatrixC2ERKS_
/*void* qm1065353665(const QMatrix & other)*/{
  const QMatrix & other = *(const QMatrix *)this_;
  this_ =  new QMatrix(other);
  this_ =  new MyQMatrix(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:78
// [8] qreal m11() const
// (12)qm3386709121 (18)_ZNK7QMatrix3m11Ev
//static
/*void qm3386709121()*/ {
  ;
  (void) ((QMatrix*)this_)->m11();
   auto xptr = (double (QMatrix::*)() const ) &QMatrix::m11;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:79
// [8] qreal m12() const
// (12)qm3415976664 (18)_ZNK7QMatrix3m12Ev
//static
/*void qm3415976664()*/ {
  ;
  (void) ((QMatrix*)this_)->m12();
   auto xptr = (double (QMatrix::*)() const ) &QMatrix::m12;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:80
// [8] qreal m21() const
// (12)qm3681074031 (18)_ZNK7QMatrix3m21Ev
//static
/*void qm3681074031()*/ {
  ;
  (void) ((QMatrix*)this_)->m21();
   auto xptr = (double (QMatrix::*)() const ) &QMatrix::m21;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:81
// [8] qreal m22() const
// (12)qm3643671862 (18)_ZNK7QMatrix3m22Ev
//static
/*void qm3643671862()*/ {
  ;
  (void) ((QMatrix*)this_)->m22();
   auto xptr = (double (QMatrix::*)() const ) &QMatrix::m22;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:82
// [8] qreal dx() const
// (11)qm368999090 (17)_ZNK7QMatrix2dxEv
//static
/*void qm368999090()*/ {
  ;
  (void) ((QMatrix*)this_)->dx();
   auto xptr = (double (QMatrix::*)() const ) &QMatrix::dx;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:83
// [8] qreal dy() const
// (11)qm339480709 (17)_ZNK7QMatrix2dyEv
//static
/*void qm339480709()*/ {
  ;
  (void) ((QMatrix*)this_)->dy();
   auto xptr = (double (QMatrix::*)() const ) &QMatrix::dy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:101
// [1] bool isIdentity() const
// (12)qm1813002877 (26)_ZNK7QMatrix10isIdentityEv
//static
/*void qm1813002877()*/ {
  ;
  (void) ((QMatrix*)this_)->isIdentity();
   auto xptr = (bool (QMatrix::*)() const ) &QMatrix::isIdentity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:108
// [1] bool isInvertible() const
// (12)qm2257402958 (28)_ZNK7QMatrix12isInvertibleEv
//static
/*void qm2257402958()*/ {
  ;
  (void) ((QMatrix*)this_)->isInvertible();
   auto xptr = (bool (QMatrix::*)() const ) &QMatrix::isInvertible;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:109
// [8] qreal determinant() const
// (12)qm2577988256 (27)_ZNK7QMatrix11determinantEv
//static
/*void qm2577988256()*/ {
  ;
  (void) ((QMatrix*)this_)->determinant();
   auto xptr = (double (QMatrix::*)() const ) &QMatrix::determinant;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QMatrixD2Ev(void *this_)*/ {
  delete (QMatrix*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmatrix
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
