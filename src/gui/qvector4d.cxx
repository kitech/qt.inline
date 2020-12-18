//  header block begin

// /usr/include/qt/QtGui/qvector4d.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvector4d.h>
#include <QtGui>
#include "callback_inherit.h"

// QVector4D is pure virtual: false false
// QVector4D has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQVector4D_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQVector4D_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQVector4D_t qt_meta_stringdata_MyQVector4D = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQVector4D"
  },
  "MyQVector4D"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQVector4D[] = {
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
class Q_DECL_EXPORT MyQVector4D : public QVector4D {
public:
  virtual ~MyQVector4D() {}
// void QVector4D()
MyQVector4D() : QVector4D() {}
// void QVector4D(Qt::Initialization)
MyQVector4D(Qt::Initialization arg0) : QVector4D(arg0) {}
// void QVector4D(float, float, float, float)
MyQVector4D(float xpos, float ypos, float zpos, float wpos) : QVector4D(xpos, ypos, zpos, wpos) {}
// void QVector4D(const QPoint &)
MyQVector4D(const QPoint & point) : QVector4D(point) {}
// void QVector4D(const QPointF &)
MyQVector4D(const QPointF & point) : QVector4D(point) {}
// void QVector4D(const QVector2D &)
MyQVector4D(const QVector2D & vector) : QVector4D(vector) {}
// void QVector4D(const QVector2D &, float, float)
MyQVector4D(const QVector2D & vector, float zpos, float wpos) : QVector4D(vector, zpos, wpos) {}
// void QVector4D(const QVector3D &)
MyQVector4D(const QVector3D & vector) : QVector4D(vector) {}
// void QVector4D(const QVector3D &, float)
MyQVector4D(const QVector3D & vector, float wpos) : QVector4D(vector, wpos) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvector4d(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:59
// [-2] void QVector4D() 
// (11)qm811398110 (17)_ZN9QVector4DC2Ev
/*void* qm811398110()*/{
  ;
  this_ =  new QVector4D();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:60
// [-2] void QVector4D(Qt::Initialization) 
// (11)qm190076121 (37)_ZN9QVector4DC2EN2Qt14InitializationE
/*void* qm190076121(Qt::Initialization arg0)*/{
  Qt::Initialization arg0 = *(Qt::Initialization*)this_;
  this_ =  new QVector4D(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:61
// [-2] void QVector4D(float, float, float, float) 
// (12)qm2922350328 (20)_ZN9QVector4DC2Effff
/*void* qm2922350328(float xpos, float ypos, float zpos, float wpos)*/{
  float xpos = *(float*)this_; float ypos = *(float*)this_; float zpos = *(float*)this_; float wpos = *(float*)this_;
  this_ =  new QVector4D(xpos, ypos, zpos, wpos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:62
// [-2] void QVector4D(const QPoint &) 
// (12)qm4001596954 (25)_ZN9QVector4DC2ERK6QPoint
/*void* qm4001596954(const QPoint & point)*/{
  const QPoint & point = *(const QPoint *)this_;
  this_ =  new QVector4D(point);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:63
// [-2] void QVector4D(const QPointF &) 
// (12)qm2090561866 (26)_ZN9QVector4DC2ERK7QPointF
/*void* qm2090561866(const QPointF & point)*/{
  const QPointF & point = *(const QPointF *)this_;
  this_ =  new QVector4D(point);
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:73
// [1] bool isNull() const
// (12)qm3950938168 (23)_ZNK9QVector4D6isNullEv
//static
/*void qm3950938168()*/ {
  ;
  (void) ((QVector4D*)this_)->isNull();
   auto xptr = (bool (QVector4D::*)() const ) &QVector4D::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:75
// [4] float x() const
// (12)qm3053258017 (18)_ZNK9QVector4D1xEv
//static
/*void qm3053258017()*/ {
  ;
  (void) ((QVector4D*)this_)->x();
   auto xptr = (float (QVector4D::*)() const ) &QVector4D::x;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:76
// [4] float y() const
// (12)qm3024056086 (18)_ZNK9QVector4D1yEv
//static
/*void qm3024056086()*/ {
  ;
  (void) ((QVector4D*)this_)->y();
   auto xptr = (float (QVector4D::*)() const ) &QVector4D::y;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:77
// [4] float z() const
// (12)qm3061436751 (18)_ZNK9QVector4D1zEv
//static
/*void qm3061436751()*/ {
  ;
  (void) ((QVector4D*)this_)->z();
   auto xptr = (float (QVector4D::*)() const ) &QVector4D::z;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:78
// [4] float w() const
// (12)qm3198239260 (18)_ZNK9QVector4D1wEv
//static
/*void qm3198239260()*/ {
  ;
  (void) ((QVector4D*)this_)->w();
   auto xptr = (float (QVector4D::*)() const ) &QVector4D::w;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:80
// [-2] void setX(float) 
// (12)qm3899244159 (20)_ZN9QVector4D4setXEf
//static
/*void qm3899244159(float x)*/ {
  float x = *(float*)this_;
  (void) ((QVector4D*)this_)->setX(x);
   auto xptr = (void (QVector4D::*)(float) ) &QVector4D::setX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:81
// [-2] void setY(float) 
// (12)qm3920352328 (20)_ZN9QVector4D4setYEf
//static
/*void qm3920352328(float y)*/ {
  float y = *(float*)this_;
  (void) ((QVector4D*)this_)->setY(y);
   auto xptr = (void (QVector4D::*)(float) ) &QVector4D::setY;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:82
// [-2] void setZ(float) 
// (12)qm3958204945 (20)_ZN9QVector4D4setZEf
//static
/*void qm3958204945(float z)*/ {
  float z = *(float*)this_;
  (void) ((QVector4D*)this_)->setZ(z);
   auto xptr = (void (QVector4D::*)(float) ) &QVector4D::setZ;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:83
// [-2] void setW(float) 
// (12)qm3811965250 (20)_ZN9QVector4D4setWEf
//static
/*void qm3811965250(float w)*/ {
  float w = *(float*)this_;
  (void) ((QVector4D*)this_)->setW(w);
   auto xptr = (void (QVector4D::*)(float) ) &QVector4D::setW;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:85
// [4] float & operator[](int) 
// (11)qm265730407 (17)_ZN9QVector4DixEi
//static
/*void qm265730407(int i)*/ {
  int i = *(int*)this_;
  (void) ((QVector4D*)this_)->operator[](i);
  // auto xptr = (float & (QVector4D::*)(int) ) &QVector4D::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:86
// [4] float operator[](int) const
// (11)qm910962585 (18)_ZNK9QVector4DixEi
//static
/*void qm910962585(int i)*/ {
  int i = *(int*)this_;
  (void) ((QVector4D*)this_)->operator[](i);
  // auto xptr = (float (QVector4D::*)(int) const ) &QVector4D::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:94
// [16] QVector4D & operator+=(const QVector4D &) 
// (12)qm3026494845 (20)_ZN9QVector4DpLERKS_
//static
/*void qm3026494845(const QVector4D & vector)*/ {
  const QVector4D & vector = *(const QVector4D *)this_;
  (void) ((QVector4D*)this_)->operator+=(vector);
  // auto xptr = (QVector4D & (QVector4D::*)(QVector4D const&) ) &QVector4D::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:95
// [16] QVector4D & operator-=(const QVector4D &) 
// (12)qm3802188224 (20)_ZN9QVector4DmIERKS_
//static
/*void qm3802188224(const QVector4D & vector)*/ {
  const QVector4D & vector = *(const QVector4D *)this_;
  (void) ((QVector4D*)this_)->operator-=(vector);
  // auto xptr = (QVector4D & (QVector4D::*)(QVector4D const&) ) &QVector4D::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:96
// [16] QVector4D & operator*=(float) 
// (11)qm862551789 (17)_ZN9QVector4DmLEf
//static
/*void qm862551789(float factor)*/ {
  float factor = *(float*)this_;
  (void) ((QVector4D*)this_)->operator*=(factor);
  // auto xptr = (QVector4D & (QVector4D::*)(float) ) &QVector4D::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:97
// [16] QVector4D & operator*=(const QVector4D &) 
// (12)qm2993510515 (20)_ZN9QVector4DmLERKS_
//static
/*void qm2993510515(const QVector4D & vector)*/ {
  const QVector4D & vector = *(const QVector4D *)this_;
  (void) ((QVector4D*)this_)->operator*=(vector);
  // auto xptr = (QVector4D & (QVector4D::*)(QVector4D const&) ) &QVector4D::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:98
// [16] QVector4D & operator/=(float) 
// (12)qm1607473089 (17)_ZN9QVector4DdVEf
//static
/*void qm1607473089(float divisor)*/ {
  float divisor = *(float*)this_;
  (void) ((QVector4D*)this_)->operator/=(divisor);
  // auto xptr = (QVector4D & (QVector4D::*)(float) ) &QVector4D::operator/=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:99
// [16] QVector4D & operator/=(const QVector4D &) 
// (12)qm2243443805 (20)_ZN9QVector4DdVERKS_
//static
/*void qm2243443805(const QVector4D & vector)*/ {
  const QVector4D & vector = *(const QVector4D *)this_;
  (void) ((QVector4D*)this_)->operator/=(vector);
  // auto xptr = (QVector4D & (QVector4D::*)(QVector4D const&) ) &QVector4D::operator/=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:125
// [8] QPoint toPoint() const
// (12)qm4233329900 (24)_ZNK9QVector4D7toPointEv
//static
/*void qm4233329900()*/ {
  ;
  (void) ((QVector4D*)this_)->toPoint();
   auto xptr = (QPoint (QVector4D::*)() const ) &QVector4D::toPoint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:126
// [16] QPointF toPointF() const
// (12)qm2817648900 (25)_ZNK9QVector4D8toPointFEv
//static
/*void qm2817648900()*/ {
  ;
  (void) ((QVector4D*)this_)->toPointF();
   auto xptr = (QPointF (QVector4D::*)() const ) &QVector4D::toPointF;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QVector4DD2Ev(void *this_)*/ {
  delete (QVector4D*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvector4d
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
