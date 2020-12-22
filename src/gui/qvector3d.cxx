//  header block begin

// /usr/include/qt/QtGui/qvector3d.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvector3d.h>
#include <QtGui>
#include "callback_inherit.h"

// QVector3D is pure virtual: false false
// QVector3D has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQVector3D_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQVector3D_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQVector3D_t qt_meta_stringdata_MyQVector3D = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQVector3D"
  },
  "MyQVector3D"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQVector3D[] = {
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
class Q_DECL_EXPORT MyQVector3D : public QVector3D {
public:
  virtual ~MyQVector3D() {}
// void QVector3D()
MyQVector3D() : QVector3D() {}
// void QVector3D(Qt::Initialization)
MyQVector3D(Qt::Initialization arg0) : QVector3D(arg0) {}
// void QVector3D(float, float, float)
MyQVector3D(float xpos, float ypos, float zpos) : QVector3D(xpos, ypos, zpos) {}
// void QVector3D(const QPoint &)
MyQVector3D(const QPoint & point) : QVector3D(point) {}
// void QVector3D(const QPointF &)
MyQVector3D(const QPointF & point) : QVector3D(point) {}
// void QVector3D(const QVector2D &)
MyQVector3D(const QVector2D & vector) : QVector3D(vector) {}
// void QVector3D(const QVector2D &, float)
MyQVector3D(const QVector2D & vector, float zpos) : QVector3D(vector, zpos) {}
// void QVector3D(const QVector4D &)
MyQVector3D(const QVector4D & vector) : QVector3D(vector) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvector3d(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:60
// [-2] void QVector3D() 
// (11)qm760857446 (17)_ZN9QVector3DC2Ev
/*void* qm760857446()*/{
  ;
  this_ =  new QVector3D();
  this_ =  new MyQVector3D();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:61
// [-2] void QVector3D(Qt::Initialization) 
// (12)qm3549900799 (37)_ZN9QVector3DC2EN2Qt14InitializationE
/*void* qm3549900799(Qt::Initialization arg0)*/{
  Qt::Initialization arg0 = *(Qt::Initialization*)this_;
  this_ =  new QVector3D(arg0);
  this_ =  new MyQVector3D(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:62
// [-2] void QVector3D(float, float, float) 
// (12)qm4215524273 (19)_ZN9QVector3DC2Efff
/*void* qm4215524273(float xpos, float ypos, float zpos)*/{
  float xpos = *(float*)this_; float ypos = *(float*)this_; float zpos = *(float*)this_;
  this_ =  new QVector3D(xpos, ypos, zpos);
  this_ =  new MyQVector3D(xpos, ypos, zpos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:64
// [-2] void QVector3D(const QPoint &) 
// (12)qm2337156314 (25)_ZN9QVector3DC2ERK6QPoint
/*void* qm2337156314(const QPoint & point)*/{
  const QPoint & point = *(const QPoint *)this_;
  this_ =  new QVector3D(point);
  this_ =  new MyQVector3D(point);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:65
// [-2] void QVector3D(const QPointF &) 
// (12)qm3885661776 (26)_ZN9QVector3DC2ERK7QPointF
/*void* qm3885661776(const QPointF & point)*/{
  const QPointF & point = *(const QPointF *)this_;
  this_ =  new QVector3D(point);
  this_ =  new MyQVector3D(point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:67
// [-2] void QVector3D(const QVector2D &) 
// (12)qm2205774367 (28)_ZN9QVector3DC2ERK9QVector2D
/*void* qm2205774367(const QVector2D & vector)*/{
  const QVector2D & vector = *(const QVector2D *)this_;
  this_ =  new QVector3D(vector);
  this_ =  new MyQVector3D(vector);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:68
// [-2] void QVector3D(const QVector2D &, float) 
// (12)qm4216872807 (29)_ZN9QVector3DC2ERK9QVector2Df
/*void* qm4216872807(const QVector2D & vector, float zpos)*/{
  const QVector2D & vector = *(const QVector2D *)this_; float zpos = *(float*)this_;
  this_ =  new QVector3D(vector, zpos);
  this_ =  new MyQVector3D(vector, zpos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:71
// [-2] void QVector3D(const QVector4D &) 
// (12)qm3575895449 (28)_ZN9QVector3DC2ERK9QVector4D
/*void* qm3575895449(const QVector4D & vector)*/{
  const QVector4D & vector = *(const QVector4D *)this_;
  this_ =  new QVector3D(vector);
  this_ =  new MyQVector3D(vector);
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:74
// [1] bool isNull() const
// (12)qm3259342267 (23)_ZNK9QVector3D6isNullEv
//static
/*void qm3259342267()*/ {
  ;
  (void) ((QVector3D*)this_)->isNull();
   auto xptr = (bool (QVector3D::*)() const ) &QVector3D::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:76
// [4] float x() const
// (12)qm2834838937 (18)_ZNK9QVector3D1xEv
//static
/*void qm2834838937()*/ {
  ;
  (void) ((QVector3D*)this_)->x();
   auto xptr = (float (QVector3D::*)() const ) &QVector3D::x;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:77
// [4] float y() const
// (12)qm2839175086 (18)_ZNK9QVector3D1yEv
//static
/*void qm2839175086()*/ {
  ;
  (void) ((QVector3D*)this_)->y();
   auto xptr = (float (QVector3D::*)() const ) &QVector3D::y;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:78
// [4] float z() const
// (12)qm2877088247 (18)_ZNK9QVector3D1zEv
//static
/*void qm2877088247()*/ {
  ;
  (void) ((QVector3D*)this_)->z();
   auto xptr = (float (QVector3D::*)() const ) &QVector3D::z;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:80
// [-2] void setX(float) 
// (12)qm2349388726 (20)_ZN9QVector3D4setXEf
//static
/*void qm2349388726(float x)*/ {
  float x = *(float*)this_;
  (void) ((QVector3D*)this_)->setX(x);
   auto xptr = (void (QVector3D::*)(float) ) &QVector3D::setX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:81
// [-2] void setY(float) 
// (12)qm2378873217 (20)_ZN9QVector3D4setYEf
//static
/*void qm2378873217(float y)*/ {
  float y = *(float*)this_;
  (void) ((QVector3D*)this_)->setY(y);
   auto xptr = (void (QVector3D::*)(float) ) &QVector3D::setY;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:82
// [-2] void setZ(float) 
// (12)qm2408318936 (20)_ZN9QVector3D4setZEf
//static
/*void qm2408318936(float z)*/ {
  float z = *(float*)this_;
  (void) ((QVector3D*)this_)->setZ(z);
   auto xptr = (void (QVector3D::*)(float) ) &QVector3D::setZ;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:84
// [4] float & operator[](int) 
// (11)qm315853279 (17)_ZN9QVector3DixEi
//static
/*void qm315853279(int i)*/ {
  int i = *(int*)this_;
  (void) ((QVector3D*)this_)->operator[](i);
  // auto xptr = (float & (QVector3D::*)(int) ) &QVector3D::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:85
// [4] float operator[](int) const
// (11)qm726212385 (18)_ZNK9QVector3DixEi
//static
/*void qm726212385(int i)*/ {
  int i = *(int*)this_;
  (void) ((QVector3D*)this_)->operator[](i);
  // auto xptr = (float (QVector3D::*)(int) const ) &QVector3D::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:93
// [12] QVector3D & operator+=(const QVector3D &) 
// (12)qm3490039988 (20)_ZN9QVector3DpLERKS_
//static
/*void qm3490039988(const QVector3D & vector)*/ {
  const QVector3D & vector = *(const QVector3D *)this_;
  (void) ((QVector3D*)this_)->operator+=(vector);
  // auto xptr = (QVector3D & (QVector3D::*)(QVector3D const&) ) &QVector3D::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:94
// [12] QVector3D & operator-=(const QVector3D &) 
// (12)qm2260837385 (20)_ZN9QVector3DmIERKS_
//static
/*void qm2260837385(const QVector3D & vector)*/ {
  const QVector3D & vector = *(const QVector3D *)this_;
  (void) ((QVector3D*)this_)->operator-=(vector);
  // auto xptr = (QVector3D & (QVector3D::*)(QVector3D const&) ) &QVector3D::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:95
// [12] QVector3D & operator*=(float) 
// (11)qm778849877 (17)_ZN9QVector3DmLEf
//static
/*void qm778849877(float factor)*/ {
  float factor = *(float*)this_;
  (void) ((QVector3D*)this_)->operator*=(factor);
  // auto xptr = (QVector3D & (QVector3D::*)(float) ) &QVector3D::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:96
// [12] QVector3D & operator*=(const QVector3D &) 
// (12)qm3591124410 (20)_ZN9QVector3DmLERKS_
//static
/*void qm3591124410(const QVector3D & vector)*/ {
  const QVector3D & vector = *(const QVector3D *)this_;
  (void) ((QVector3D*)this_)->operator*=(vector);
  // auto xptr = (QVector3D & (QVector3D::*)(QVector3D const&) ) &QVector3D::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:97
// [12] QVector3D & operator/=(float) 
// (12)qm1121265529 (17)_ZN9QVector3DdVEf
//static
/*void qm1121265529(float divisor)*/ {
  float divisor = *(float*)this_;
  (void) ((QVector3D*)this_)->operator/=(divisor);
  // auto xptr = (QVector3D & (QVector3D::*)(float) ) &QVector3D::operator/=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:98
// [12] QVector3D & operator/=(const QVector3D &) 
// (12)qm3789115796 (20)_ZN9QVector3DdVERKS_
//static
/*void qm3789115796(const QVector3D & vector)*/ {
  const QVector3D & vector = *(const QVector3D *)this_;
  (void) ((QVector3D*)this_)->operator/=(vector);
  // auto xptr = (QVector3D & (QVector3D::*)(QVector3D const&) ) &QVector3D::operator/=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:135
// [8] QPoint toPoint() const
// (12)qm2295043427 (24)_ZNK9QVector3D7toPointEv
//static
/*void qm2295043427()*/ {
  ;
  (void) ((QVector3D*)this_)->toPoint();
   auto xptr = (QPoint (QVector3D::*)() const ) &QVector3D::toPoint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:136
// [16] QPointF toPointF() const
// (12)qm3666014044 (25)_ZNK9QVector3D8toPointFEv
//static
/*void qm3666014044()*/ {
  ;
  (void) ((QVector3D*)this_)->toPointF();
   auto xptr = (QPointF (QVector3D::*)() const ) &QVector3D::toPointF;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QVector3DD2Ev(void *this_)*/ {
  delete (QVector3D*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvector3d
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
