//  header block begin

// /usr/include/qt/QtGui/qmatrix4x4.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmatrix4x4.h>
#include <QtGui>
#include "callback_inherit.h"

// QMatrix4x4 is pure virtual: false false
// QMatrix4x4 has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMatrix4x4_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMatrix4x4_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMatrix4x4_t qt_meta_stringdata_MyQMatrix4x4 = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQMatrix4x4"
  },
  "MyQMatrix4x4"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMatrix4x4[] = {
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
class Q_DECL_EXPORT MyQMatrix4x4 : public QMatrix4x4 {
public:
  virtual ~MyQMatrix4x4() {}
// void QMatrix4x4()
MyQMatrix4x4() : QMatrix4x4() {}
// void QMatrix4x4(Qt::Initialization)
MyQMatrix4x4(Qt::Initialization arg0) : QMatrix4x4(arg0) {}
// void QMatrix4x4(const float *)
MyQMatrix4x4(const float * values) : QMatrix4x4(values) {}
// void QMatrix4x4(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)
MyQMatrix4x4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) : QMatrix4x4(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44) {}
// void QMatrix4x4(const float *, int, int)
MyQMatrix4x4(const float * values, int cols, int rows) : QMatrix4x4(values, cols, rows) {}
// void QMatrix4x4(const QTransform &)
MyQMatrix4x4(const QTransform & transform) : QMatrix4x4(transform) {}
// void QMatrix4x4(const QMatrix &)
MyQMatrix4x4(const QMatrix & matrix) : QMatrix4x4(matrix) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmatrix4x4(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:62
// [-2] void QMatrix4x4() 
// (12)qm2071527981 (19)_ZN10QMatrix4x4C2Ev
/*void* qm2071527981()*/{
  ;
  this_ =  new QMatrix4x4();
  this_ =  new MyQMatrix4x4();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:63
// [-2] void QMatrix4x4(Qt::Initialization) 
// (12)qm1686328064 (39)_ZN10QMatrix4x4C2EN2Qt14InitializationE
/*void* qm1686328064(Qt::Initialization arg0)*/{
  Qt::Initialization arg0 = *(Qt::Initialization*)this_;
  this_ =  new QMatrix4x4(arg0);
  this_ =  new MyQMatrix4x4(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:64
// [-2] void QMatrix4x4(const float *) 
// (10)qm73480884 (21)_ZN10QMatrix4x4C2EPKf
/*void* qm73480884(const float * values)*/{
  const float * values = *(const float **)this_;
  this_ =  new QMatrix4x4(values);
  this_ =  new MyQMatrix4x4(values);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:65
// [-2] void QMatrix4x4(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float) 
// (11)qm167183903 (34)_ZN10QMatrix4x4C2Effffffffffffffff
/*void* qm167183903(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)*/{
  float m11 = *(float*)this_; float m12 = *(float*)this_; float m13 = *(float*)this_; float m14 = *(float*)this_; float m21 = *(float*)this_; float m22 = *(float*)this_; float m23 = *(float*)this_; float m24 = *(float*)this_; float m31 = *(float*)this_; float m32 = *(float*)this_; float m33 = *(float*)this_; float m34 = *(float*)this_; float m41 = *(float*)this_; float m42 = *(float*)this_; float m43 = *(float*)this_; float m44 = *(float*)this_;
  this_ =  new QMatrix4x4(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
  this_ =  new MyQMatrix4x4(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:73
// [-2] void QMatrix4x4(const float *, int, int) 
// (12)qm2267917698 (23)_ZN10QMatrix4x4C2EPKfii
/*void* qm2267917698(const float * values, int cols, int rows)*/{
  const float * values = *(const float **)this_; int cols = *(int*)this_; int rows = *(int*)this_;
  this_ =  new QMatrix4x4(values, cols, rows);
  this_ =  new MyQMatrix4x4(values, cols, rows);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:74
// [-2] void QMatrix4x4(const QTransform &) 
// (12)qm4029543397 (32)_ZN10QMatrix4x4C2ERK10QTransform
/*void* qm4029543397(const QTransform & transform)*/{
  const QTransform & transform = *(const QTransform *)this_;
  this_ =  new QMatrix4x4(transform);
  this_ =  new MyQMatrix4x4(transform);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:76
// [-2] void QMatrix4x4(const QMatrix &) 
// (12)qm2432794000 (28)_ZN10QMatrix4x4C2ERK7QMatrix
/*void* qm2432794000(const QMatrix & matrix)*/{
  const QMatrix & matrix = *(const QMatrix *)this_;
  this_ =  new QMatrix4x4(matrix);
  this_ =  new MyQMatrix4x4(matrix);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:79
// [4] const float & operator()(int, int) const
// (11)qm203047720 (21)_ZNK10QMatrix4x4clEii
//static
/*void qm203047720(int row, int column)*/ {
  int row = *(int*)this_; int column = *(int*)this_;
  (void) ((QMatrix4x4*)this_)->operator()(row, column);
  // auto xptr = (const float & (QMatrix4x4::*)()(int, int) const ) &QMatrix4x4::operator;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:80
// [4] float & operator()(int, int) 
// (12)qm2223065613 (20)_ZN10QMatrix4x4clEii
//static
/*void qm2223065613(int row, int column)*/ {
  int row = *(int*)this_; int column = *(int*)this_;
  (void) ((QMatrix4x4*)this_)->operator()(row, column);
  // auto xptr = (float & (QMatrix4x4::*)()(int, int) ) &QMatrix4x4::operator;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:83
// [16] QVector4D column(int) const
// (12)qm3256216987 (25)_ZNK10QMatrix4x46columnEi
//static
/*void qm3256216987(int index)*/ {
  int index = *(int*)this_;
  (void) ((QMatrix4x4*)this_)->column(index);
   auto xptr = (QVector4D (QMatrix4x4::*)(int) const ) &QMatrix4x4::column;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:84
// [-2] void setColumn(int, const QVector4D &) 
// (12)qm2177169140 (39)_ZN10QMatrix4x49setColumnEiRK9QVector4D
//static
/*void qm2177169140(int index, const QVector4D & value)*/ {
  int index = *(int*)this_; const QVector4D & value = *(const QVector4D *)this_;
  (void) ((QMatrix4x4*)this_)->setColumn(index, value);
   auto xptr = (void (QMatrix4x4::*)(int, QVector4D const&) ) &QMatrix4x4::setColumn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:86
// [16] QVector4D row(int) const
// (12)qm3767340882 (22)_ZNK10QMatrix4x43rowEi
//static
/*void qm3767340882(int index)*/ {
  int index = *(int*)this_;
  (void) ((QMatrix4x4*)this_)->row(index);
   auto xptr = (QVector4D (QMatrix4x4::*)(int) const ) &QMatrix4x4::row;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:87
// [-2] void setRow(int, const QVector4D &) 
// (12)qm1796425735 (36)_ZN10QMatrix4x46setRowEiRK9QVector4D
//static
/*void qm1796425735(int index, const QVector4D & value)*/ {
  int index = *(int*)this_; const QVector4D & value = *(const QVector4D *)this_;
  (void) ((QMatrix4x4*)this_)->setRow(index, value);
   auto xptr = (void (QMatrix4x4::*)(int, QVector4D const&) ) &QMatrix4x4::setRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:90
// [1] bool isAffine() const
// (12)qm2761192513 (27)_ZNK10QMatrix4x48isAffineEv
//static
/*void qm2761192513()*/ {
  ;
  (void) ((QMatrix4x4*)this_)->isAffine();
   auto xptr = (bool (QMatrix4x4::*)() const ) &QMatrix4x4::isAffine;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:92
// [1] bool isIdentity() const
// (12)qm1253925573 (30)_ZNK10QMatrix4x410isIdentityEv
//static
/*void qm1253925573()*/ {
  ;
  (void) ((QMatrix4x4*)this_)->isIdentity();
   auto xptr = (bool (QMatrix4x4::*)() const ) &QMatrix4x4::isIdentity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:93
// [-2] void setToIdentity() 
// (12)qm1603232690 (32)_ZN10QMatrix4x413setToIdentityEv
//static
/*void qm1603232690()*/ {
  ;
  (void) ((QMatrix4x4*)this_)->setToIdentity();
   auto xptr = (void (QMatrix4x4::*)() ) &QMatrix4x4::setToIdentity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:95
// [-2] void fill(float) 
// (11)qm963394323 (22)_ZN10QMatrix4x44fillEf
//static
/*void qm963394323(float value)*/ {
  float value = *(float*)this_;
  (void) ((QMatrix4x4*)this_)->fill(value);
   auto xptr = (void (QMatrix4x4::*)(float) ) &QMatrix4x4::fill;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:102
// [68] QMatrix4x4 & operator+=(const QMatrix4x4 &) 
// (12)qm1162177540 (22)_ZN10QMatrix4x4pLERKS_
//static
/*void qm1162177540(const QMatrix4x4 & other)*/ {
  const QMatrix4x4 & other = *(const QMatrix4x4 *)this_;
  (void) ((QMatrix4x4*)this_)->operator+=(other);
  // auto xptr = (QMatrix4x4 & (QMatrix4x4::*)(QMatrix4x4 const&) ) &QMatrix4x4::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:103
// [68] QMatrix4x4 & operator-=(const QMatrix4x4 &) 
// (11)qm327221433 (22)_ZN10QMatrix4x4mIERKS_
//static
/*void qm327221433(const QMatrix4x4 & other)*/ {
  const QMatrix4x4 & other = *(const QMatrix4x4 *)this_;
  (void) ((QMatrix4x4*)this_)->operator-=(other);
  // auto xptr = (QMatrix4x4 & (QMatrix4x4::*)(QMatrix4x4 const&) ) &QMatrix4x4::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:104
// [68] QMatrix4x4 & operator*=(const QMatrix4x4 &) 
// (12)qm1129091338 (22)_ZN10QMatrix4x4mLERKS_
//static
/*void qm1129091338(const QMatrix4x4 & other)*/ {
  const QMatrix4x4 & other = *(const QMatrix4x4 *)this_;
  (void) ((QMatrix4x4*)this_)->operator*=(other);
  // auto xptr = (QMatrix4x4 & (QMatrix4x4::*)(QMatrix4x4 const&) ) &QMatrix4x4::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:105
// [68] QMatrix4x4 & operator*=(float) 
// (12)qm2018283294 (19)_ZN10QMatrix4x4mLEf
//static
/*void qm2018283294(float factor)*/ {
  float factor = *(float*)this_;
  (void) ((QMatrix4x4*)this_)->operator*=(factor);
  // auto xptr = (QMatrix4x4 & (QMatrix4x4::*)(float) ) &QMatrix4x4::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:107
// [1] bool operator==(const QMatrix4x4 &) const
// (12)qm1499999174 (23)_ZNK10QMatrix4x4eqERKS_
//static
/*void qm1499999174(const QMatrix4x4 & other)*/ {
  const QMatrix4x4 & other = *(const QMatrix4x4 *)this_;
  (void) ((QMatrix4x4*)this_)->operator==(other);
  // auto xptr = (bool (QMatrix4x4::*)(QMatrix4x4 const&) const ) &QMatrix4x4::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:108
// [1] bool operator!=(const QMatrix4x4 &) const
// (12)qm3274194865 (23)_ZNK10QMatrix4x4neERKS_
//static
/*void qm3274194865(const QMatrix4x4 & other)*/ {
  const QMatrix4x4 & other = *(const QMatrix4x4 *)this_;
  (void) ((QMatrix4x4*)this_)->operator!=(other);
  // auto xptr = (bool (QMatrix4x4::*)(QMatrix4x4 const&) const ) &QMatrix4x4::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:155
// [-2] void viewport(const QRectF &) 
// (12)qm1766540374 (34)_ZN10QMatrix4x48viewportERK6QRectF
//static
/*void qm1766540374(const QRectF & rect)*/ {
  const QRectF & rect = *(const QRectF *)this_;
  (void) ((QMatrix4x4*)this_)->viewport(rect);
   auto xptr = (void (QMatrix4x4::*)(QRectF const&) ) &QMatrix4x4::viewport;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:167
// [8] QPoint map(const QPoint &) const
// (11)qm962252323 (30)_ZNK10QMatrix4x43mapERK6QPoint
//static
/*void qm962252323(const QPoint & point)*/ {
  const QPoint & point = *(const QPoint *)this_;
  (void) ((QMatrix4x4*)this_)->map(point);
   auto xptr = (QPoint (QMatrix4x4::*)(QPoint const&) const ) &QMatrix4x4::map;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:168
// [16] QPointF map(const QPointF &) const
// (11)qm591994890 (31)_ZNK10QMatrix4x43mapERK7QPointF
//static
/*void qm591994890(const QPointF & point)*/ {
  const QPointF & point = *(const QPointF *)this_;
  (void) ((QMatrix4x4*)this_)->map(point);
   auto xptr = (QPointF (QMatrix4x4::*)(QPointF const&) const ) &QMatrix4x4::map;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:170
// [12] QVector3D map(const QVector3D &) const
// (12)qm1457868448 (33)_ZNK10QMatrix4x43mapERK9QVector3D
//static
/*void qm1457868448(const QVector3D & point)*/ {
  const QVector3D & point = *(const QVector3D *)this_;
  (void) ((QMatrix4x4*)this_)->map(point);
   auto xptr = (QVector3D (QMatrix4x4::*)(QVector3D const&) const ) &QMatrix4x4::map;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:171
// [12] QVector3D mapVector(const QVector3D &) const
// (12)qm1508453150 (39)_ZNK10QMatrix4x49mapVectorERK9QVector3D
//static
/*void qm1508453150(const QVector3D & vector)*/ {
  const QVector3D & vector = *(const QVector3D *)this_;
  (void) ((QMatrix4x4*)this_)->mapVector(vector);
   auto xptr = (QVector3D (QMatrix4x4::*)(QVector3D const&) const ) &QMatrix4x4::mapVector;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:174
// [16] QVector4D map(const QVector4D &) const
// (11)qm430233703 (33)_ZNK10QMatrix4x43mapERK9QVector4D
//static
/*void qm430233703(const QVector4D & point)*/ {
  const QVector4D & point = *(const QVector4D *)this_;
  (void) ((QMatrix4x4*)this_)->map(point);
   auto xptr = (QVector4D (QMatrix4x4::*)(QVector4D const&) const ) &QMatrix4x4::map;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:182
// [8] float * data() 
// (12)qm3289787806 (22)_ZN10QMatrix4x44dataEv
//static
/*void qm3289787806()*/ {
  ;
  (void) ((QMatrix4x4*)this_)->data();
   auto xptr = (float * (QMatrix4x4::*)() ) &QMatrix4x4::data;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:183
// [8] const float * data() const
// (12)qm1429851462 (23)_ZNK10QMatrix4x44dataEv
//static
/*void qm1429851462()*/ {
  ;
  (void) ((QMatrix4x4*)this_)->data();
   auto xptr = (const float * (QMatrix4x4::*)() const ) &QMatrix4x4::data;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:184
// [8] const float * constData() const
// (12)qm2906222190 (28)_ZNK10QMatrix4x49constDataEv
//static
/*void qm2906222190()*/ {
  ;
  (void) ((QMatrix4x4*)this_)->constData();
   auto xptr = (const float * (QMatrix4x4::*)() const ) &QMatrix4x4::constData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QMatrix4x4D2Ev(void *this_)*/ {
  delete (QMatrix4x4*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmatrix4x4
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
