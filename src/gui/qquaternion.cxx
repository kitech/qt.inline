//  header block begin

// /usr/include/qt/QtGui/qquaternion.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquaternion.h>
#include <QtGui>
#include "callback_inherit.h"

// QQuaternion is pure virtual: false false
// QQuaternion has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQuaternion_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQuaternion_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQuaternion_t qt_meta_stringdata_MyQQuaternion = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQQuaternion"
  },
  "MyQQuaternion"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQuaternion[] = {
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
class Q_DECL_EXPORT MyQQuaternion : public QQuaternion {
public:
  virtual ~MyQQuaternion() {}
// void QQuaternion()
MyQQuaternion() : QQuaternion() {}
// void QQuaternion(Qt::Initialization)
MyQQuaternion(Qt::Initialization arg0) : QQuaternion(arg0) {}
// void QQuaternion(float, float, float, float)
MyQQuaternion(float scalar, float xpos, float ypos, float zpos) : QQuaternion(scalar, xpos, ypos, zpos) {}
// void QQuaternion(float, const QVector3D &)
MyQQuaternion(float scalar, const QVector3D & vector) : QQuaternion(scalar, vector) {}
// void QQuaternion(const QVector4D &)
MyQQuaternion(const QVector4D & vector) : QQuaternion(vector) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qquaternion(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:59
// [-2] void QQuaternion() 
// (12)qm1733059385 (20)_ZN11QQuaternionC2Ev
/*void* qm1733059385()*/{
  ;
  this_ =  new QQuaternion();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:60
// [-2] void QQuaternion(Qt::Initialization) 
// (12)qm1670413819 (40)_ZN11QQuaternionC2EN2Qt14InitializationE
/*void* qm1670413819(Qt::Initialization arg0)*/{
  Qt::Initialization arg0 = *(Qt::Initialization*)this_;
  this_ =  new QQuaternion(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:61
// [-2] void QQuaternion(float, float, float, float) 
// (12)qm1853151988 (23)_ZN11QQuaternionC2Effff
/*void* qm1853151988(float scalar, float xpos, float ypos, float zpos)*/{
  float scalar = *(float*)this_; float xpos = *(float*)this_; float ypos = *(float*)this_; float zpos = *(float*)this_;
  this_ =  new QQuaternion(scalar, xpos, ypos, zpos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:63
// [-2] void QQuaternion(float, const QVector3D &) 
// (12)qm2652448911 (32)_ZN11QQuaternionC2EfRK9QVector3D
/*void* qm2652448911(float scalar, const QVector3D & vector)*/{
  float scalar = *(float*)this_; const QVector3D & vector = *(const QVector3D *)this_;
  this_ =  new QQuaternion(scalar, vector);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:66
// [-2] void QQuaternion(const QVector4D &) 
// (12)qm3375837105 (31)_ZN11QQuaternionC2ERK9QVector4D
/*void* qm3375837105(const QVector4D & vector)*/{
  const QVector4D & vector = *(const QVector4D *)this_;
  this_ =  new QQuaternion(vector);
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:69
// [1] bool isNull() const
// (12)qm3255587012 (26)_ZNK11QQuaternion6isNullEv
//static
/*void qm3255587012()*/ {
  ;
  (void) ((QQuaternion*)this_)->isNull();
   auto xptr = (bool (QQuaternion::*)() const ) &QQuaternion::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:70
// [1] bool isIdentity() const
// (12)qm1181902682 (31)_ZNK11QQuaternion10isIdentityEv
//static
/*void qm1181902682()*/ {
  ;
  (void) ((QQuaternion*)this_)->isIdentity();
   auto xptr = (bool (QQuaternion::*)() const ) &QQuaternion::isIdentity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:73
// [12] QVector3D vector() const
// (12)qm3787900027 (26)_ZNK11QQuaternion6vectorEv
//static
/*void qm3787900027()*/ {
  ;
  (void) ((QQuaternion*)this_)->vector();
   auto xptr = (QVector3D (QQuaternion::*)() const ) &QQuaternion::vector;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:74
// [-2] void setVector(const QVector3D &) 
// (12)qm2690091480 (39)_ZN11QQuaternion9setVectorERK9QVector3D
//static
/*void qm2690091480(const QVector3D & vector)*/ {
  const QVector3D & vector = *(const QVector3D *)this_;
  (void) ((QQuaternion*)this_)->setVector(vector);
   auto xptr = (void (QQuaternion::*)(QVector3D const&) ) &QQuaternion::setVector;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:76
// [-2] void setVector(float, float, float) 
// (12)qm3545555600 (30)_ZN11QQuaternion9setVectorEfff
//static
/*void qm3545555600(float x, float y, float z)*/ {
  float x = *(float*)this_; float y = *(float*)this_; float z = *(float*)this_;
  (void) ((QQuaternion*)this_)->setVector(x, y, z);
   auto xptr = (void (QQuaternion::*)(float, float, float) ) &QQuaternion::setVector;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:78
// [4] float x() const
// (12)qm1407978013 (21)_ZNK11QQuaternion1xEv
//static
/*void qm1407978013()*/ {
  ;
  (void) ((QQuaternion*)this_)->x();
   auto xptr = (float (QQuaternion::*)() const ) &QQuaternion::x;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:79
// [4] float y() const
// (12)qm1378770986 (21)_ZNK11QQuaternion1yEv
//static
/*void qm1378770986()*/ {
  ;
  (void) ((QQuaternion*)this_)->y();
   auto xptr = (float (QQuaternion::*)() const ) &QQuaternion::y;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:80
// [4] float z() const
// (12)qm1349049971 (21)_ZNK11QQuaternion1zEv
//static
/*void qm1349049971()*/ {
  ;
  (void) ((QQuaternion*)this_)->z();
   auto xptr = (float (QQuaternion::*)() const ) &QQuaternion::z;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:81
// [4] float scalar() const
// (11)qm930215262 (26)_ZNK11QQuaternion6scalarEv
//static
/*void qm930215262()*/ {
  ;
  (void) ((QQuaternion*)this_)->scalar();
   auto xptr = (float (QQuaternion::*)() const ) &QQuaternion::scalar;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:83
// [-2] void setX(float) 
// (11)qm674423411 (23)_ZN11QQuaternion4setXEf
//static
/*void qm674423411(float x)*/ {
  float x = *(float*)this_;
  (void) ((QQuaternion*)this_)->setX(x);
   auto xptr = (void (QQuaternion::*)(float) ) &QQuaternion::setX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:84
// [-2] void setY(float) 
// (11)qm703629380 (23)_ZN11QQuaternion4setYEf
//static
/*void qm703629380(float y)*/ {
  float y = *(float*)this_;
  (void) ((QQuaternion*)this_)->setY(y);
   auto xptr = (void (QQuaternion::*)(float) ) &QQuaternion::setY;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:85
// [-2] void setZ(float) 
// (11)qm733361693 (23)_ZN11QQuaternion4setZEf
//static
/*void qm733361693(float z)*/ {
  float z = *(float*)this_;
  (void) ((QQuaternion*)this_)->setZ(z);
   auto xptr = (void (QQuaternion::*)(float) ) &QQuaternion::setZ;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:86
// [-2] void setScalar(float) 
// (12)qm2915799930 (28)_ZN11QQuaternion9setScalarEf
//static
/*void qm2915799930(float scalar)*/ {
  float scalar = *(float*)this_;
  (void) ((QQuaternion*)this_)->setScalar(scalar);
   auto xptr = (void (QQuaternion::*)(float) ) &QQuaternion::setScalar;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:88
// [4] float dotProduct(const QQuaternion &, const QQuaternion &) 
// (12)qm2783507766 (36)_ZN11QQuaternion10dotProductERKS_S1_
//static
/*void qm2783507766(const QQuaternion & q1, const QQuaternion & q2)*/ {
  const QQuaternion & q1 = *(const QQuaternion *)this_; const QQuaternion & q2 = *(const QQuaternion *)this_;
  (void) QQuaternion::dotProduct(q1, q2);
   auto xptr = (float (*)(QQuaternion const&, QQuaternion const&) ) &QQuaternion::dotProduct;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:96
// [16] QQuaternion inverted() const
// (12)qm1503642026 (28)_ZNK11QQuaternion8invertedEv
//static
/*void qm1503642026()*/ {
  ;
  (void) ((QQuaternion*)this_)->inverted();
   auto xptr = (QQuaternion (QQuaternion::*)() const ) &QQuaternion::inverted;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:98
// [16] QQuaternion conjugated() const
// (12)qm3019484726 (31)_ZNK11QQuaternion10conjugatedEv
//static
/*void qm3019484726()*/ {
  ;
  (void) ((QQuaternion*)this_)->conjugated();
   auto xptr = (QQuaternion (QQuaternion::*)() const ) &QQuaternion::conjugated;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:105
// [16] QQuaternion & operator+=(const QQuaternion &) 
// (12)qm1950349681 (23)_ZN11QQuaternionpLERKS_
//static
/*void qm1950349681(const QQuaternion & quaternion)*/ {
  const QQuaternion & quaternion = *(const QQuaternion *)this_;
  (void) ((QQuaternion*)this_)->operator+=(quaternion);
  // auto xptr = (QQuaternion & (QQuaternion::*)(QQuaternion const&) ) &QQuaternion::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:106
// [16] QQuaternion & operator-=(const QQuaternion &) 
// (11)qm586913228 (23)_ZN11QQuaternionmIERKS_
//static
/*void qm586913228(const QQuaternion & quaternion)*/ {
  const QQuaternion & quaternion = *(const QQuaternion *)this_;
  (void) ((QQuaternion*)this_)->operator-=(quaternion);
  // auto xptr = (QQuaternion & (QQuaternion::*)(QQuaternion const&) ) &QQuaternion::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:107
// [16] QQuaternion & operator*=(float) 
// (12)qm1685712394 (20)_ZN11QQuaternionmLEf
//static
/*void qm1685712394(float factor)*/ {
  float factor = *(float*)this_;
  (void) ((QQuaternion*)this_)->operator*=(factor);
  // auto xptr = (QQuaternion & (QQuaternion::*)(float) ) &QQuaternion::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:108
// [16] QQuaternion & operator*=(const QQuaternion &) 
// (12)qm1916142719 (23)_ZN11QQuaternionmLERKS_
//static
/*void qm1916142719(const QQuaternion & quaternion)*/ {
  const QQuaternion & quaternion = *(const QQuaternion *)this_;
  (void) ((QQuaternion*)this_)->operator*=(quaternion);
  // auto xptr = (QQuaternion & (QQuaternion::*)(QQuaternion const&) ) &QQuaternion::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:109
// [16] QQuaternion & operator/=(float) 
// (11)qm146835238 (20)_ZN11QQuaterniondVEf
//static
/*void qm146835238(float divisor)*/ {
  float divisor = *(float*)this_;
  (void) ((QQuaternion*)this_)->operator/=(divisor);
  // auto xptr = (QQuaternion & (QQuaternion::*)(float) ) &QQuaternion::operator/=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:124
// [16] QVector4D toVector4D() const
// (12)qm2108728144 (31)_ZNK11QQuaternion10toVector4DEv
//static
/*void qm2108728144()*/ {
  ;
  (void) ((QQuaternion*)this_)->toVector4D();
   auto xptr = (QVector4D (QQuaternion::*)() const ) &QQuaternion::toVector4D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:130
// [-2] void getAxisAndAngle(QVector3D *, float *) const
// (12)qm3868301694 (48)_ZNK11QQuaternion15getAxisAndAngleEP9QVector3DPf
//static
/*void qm3868301694(QVector3D * axis, float * angle)*/ {
  QVector3D * axis = *(QVector3D **)this_; float * angle = *(float **)this_;
  (void) ((QQuaternion*)this_)->getAxisAndAngle(axis, angle);
   auto xptr = (void (QQuaternion::*)(QVector3D*, float*) const ) &QQuaternion::getAxisAndAngle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:138
// [12] QVector3D toEulerAngles() const
// (11)qm382540526 (34)_ZNK11QQuaternion13toEulerAnglesEv
//static
/*void qm382540526()*/ {
  ;
  (void) ((QQuaternion*)this_)->toEulerAngles();
   auto xptr = (QVector3D (QQuaternion::*)() const ) &QQuaternion::toEulerAngles;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:139
// [16] QQuaternion fromEulerAngles(const QVector3D &) 
// (12)qm1595272017 (46)_ZN11QQuaternion15fromEulerAnglesERK9QVector3D
//static
/*void qm1595272017(const QVector3D & eulerAngles)*/ {
  const QVector3D & eulerAngles = *(const QVector3D *)this_;
  (void) QQuaternion::fromEulerAngles(eulerAngles);
   auto xptr = (QQuaternion (*)(QVector3D const&) ) &QQuaternion::fromEulerAngles;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QQuaternionD2Ev(void *this_)*/ {
  delete (QQuaternion*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qquaternion
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
