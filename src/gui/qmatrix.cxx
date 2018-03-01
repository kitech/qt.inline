//  header block begin
// /usr/include/qt/QtGui/qmatrix.h
#ifndef protected
#define protected public
#endif
#include <qmatrix.h>
#include <QtGui>
#include "callback_inherit.h"

// QMatrix is pure virtual: false
// QMatrix has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMatrix : public QMatrix {
public:
  virtual ~MyQMatrix() {}
// void QMatrix(Qt::Initialization)
MyQMatrix(Qt::Initialization arg0) : QMatrix(arg0) {}
// void QMatrix()
MyQMatrix() : QMatrix() {}
// void QMatrix(qreal, qreal, qreal, qreal, qreal, qreal)
MyQMatrix(qreal m11, qreal m12, qreal m21, qreal m22, qreal dx, qreal dy) : QMatrix(m11, m12, m21, m22, dx, dy) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:60
// [-2] void QMatrix(Qt::Initialization)
extern "C" Q_DECL_EXPORT
void* C_ZN7QMatrixC2EN2Qt14InitializationE(Qt::Initialization arg0) {
  return  new QMatrix(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:61
// [-2] void QMatrix()
extern "C" Q_DECL_EXPORT
void* C_ZN7QMatrixC2Ev() {
  return  new QMatrix();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:62
// [-2] void QMatrix(qreal, qreal, qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN7QMatrixC2Edddddd(qreal m11, qreal m12, qreal m21, qreal m22, qreal dx, qreal dy) {
  return  new QMatrix(m11, m12, m21, m22, dx, dy);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:67
// [48] QMatrix & operator=(class QMatrix &&)
extern "C" Q_DECL_EXPORT
void* C_ZN7QMatrixaSEOS_(void *this_, QMatrix && other) {
  auto& rv = ((QMatrix*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:69
// [48] QMatrix & operator=(const class QMatrix &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QMatrixaSERKS_(void *this_, QMatrix* arg0) {
  auto& rv = ((QMatrix*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:75
// [-2] void setMatrix(qreal, qreal, qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN7QMatrix9setMatrixEdddddd(void *this_, qreal m11, qreal m12, qreal m21, qreal m22, qreal dx, qreal dy) {
  ((QMatrix*)this_)->setMatrix(m11, m12, m21, m22, dx, dy);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:78
// [8] qreal m11()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QMatrix3m11Ev(void *this_) {
  return (qreal)((QMatrix*)this_)->m11();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:79
// [8] qreal m12()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QMatrix3m12Ev(void *this_) {
  return (qreal)((QMatrix*)this_)->m12();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:80
// [8] qreal m21()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QMatrix3m21Ev(void *this_) {
  return (qreal)((QMatrix*)this_)->m21();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:81
// [8] qreal m22()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QMatrix3m22Ev(void *this_) {
  return (qreal)((QMatrix*)this_)->m22();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:82
// [8] qreal dx()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QMatrix2dxEv(void *this_) {
  return (qreal)((QMatrix*)this_)->dx();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:83
// [8] qreal dy()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QMatrix2dyEv(void *this_) {
  return (qreal)((QMatrix*)this_)->dy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:85
// [-2] void map(int, int, int *, int *)
extern "C" Q_DECL_EXPORT
void C_ZNK7QMatrix3mapEiiPiS0_(void *this_, int x, int y, int * tx, int * ty) {
  ((QMatrix*)this_)->map(x, y, tx, ty);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:86
// [-2] void map(qreal, qreal, qreal *, qreal *)
extern "C" Q_DECL_EXPORT
void C_ZNK7QMatrix3mapEddPdS0_(void *this_, qreal x, qreal y, qreal * tx, qreal * ty) {
  ((QMatrix*)this_)->map(x, y, tx, ty);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:87
// [16] QRect mapRect(const class QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QMatrix7mapRectERK5QRect(void *this_, QRect* arg0) {
  auto rv = ((QMatrix*)this_)->mapRect(*arg0);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:88
// [32] QRectF mapRect(const class QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QMatrix7mapRectERK6QRectF(void *this_, QRectF* arg0) {
  auto rv = ((QMatrix*)this_)->mapRect(*arg0);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:90
// [8] QPoint map(const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QMatrix3mapERK6QPoint(void *this_, QPoint* p) {
  auto rv = ((QMatrix*)this_)->map(*p);
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:91
// [16] QPointF map(const class QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QMatrix3mapERK7QPointF(void *this_, QPointF* p) {
  auto rv = ((QMatrix*)this_)->map(*p);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:92
// [16] QLine map(const class QLine &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QMatrix3mapERK5QLine(void *this_, QLine* l) {
  auto rv = ((QMatrix*)this_)->map(*l);
return new QLine(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:93
// [32] QLineF map(const class QLineF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QMatrix3mapERK6QLineF(void *this_, QLineF* l) {
  auto rv = ((QMatrix*)this_)->map(*l);
return new QLineF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:94
// [8] QPolygonF map(const class QPolygonF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QMatrix3mapERK9QPolygonF(void *this_, QPolygonF* a) {
  auto rv = ((QMatrix*)this_)->map(*a);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:95
// [8] QPolygon map(const class QPolygon &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QMatrix3mapERK8QPolygon(void *this_, QPolygon* a) {
  auto rv = ((QMatrix*)this_)->map(*a);
return new QPolygon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:96
// [8] QRegion map(const class QRegion &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QMatrix3mapERK7QRegion(void *this_, QRegion* r) {
  auto rv = ((QMatrix*)this_)->map(*r);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:97
// [8] QPainterPath map(const class QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QMatrix3mapERK12QPainterPath(void *this_, QPainterPath* p) {
  auto rv = ((QMatrix*)this_)->map(*p);
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:98
// [8] QPolygon mapToPolygon(const class QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QMatrix12mapToPolygonERK5QRect(void *this_, QRect* r) {
  auto rv = ((QMatrix*)this_)->mapToPolygon(*r);
return new QPolygon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:100
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN7QMatrix5resetEv(void *this_) {
  ((QMatrix*)this_)->reset();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:101
// [1] bool isIdentity()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QMatrix10isIdentityEv(void *this_) {
  return (bool)((QMatrix*)this_)->isIdentity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:103
// [48] QMatrix & translate(qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN7QMatrix9translateEdd(void *this_, qreal dx, qreal dy) {
  auto& rv = ((QMatrix*)this_)->translate(dx, dy);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:104
// [48] QMatrix & scale(qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN7QMatrix5scaleEdd(void *this_, qreal sx, qreal sy) {
  auto& rv = ((QMatrix*)this_)->scale(sx, sy);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:105
// [48] QMatrix & shear(qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN7QMatrix5shearEdd(void *this_, qreal sh, qreal sv) {
  auto& rv = ((QMatrix*)this_)->shear(sh, sv);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:106
// [48] QMatrix & rotate(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN7QMatrix6rotateEd(void *this_, qreal a) {
  auto& rv = ((QMatrix*)this_)->rotate(a);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:108
// [1] bool isInvertible()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QMatrix12isInvertibleEv(void *this_) {
  return (bool)((QMatrix*)this_)->isInvertible();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:109
// [8] qreal determinant()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QMatrix11determinantEv(void *this_) {
  return (qreal)((QMatrix*)this_)->determinant();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:111
// [48] QMatrix inverted(_Bool *)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QMatrix8invertedEPb(void *this_, bool * invertible) {
  auto rv = ((QMatrix*)this_)->inverted(invertible);
return new QMatrix(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:113
// [1] bool operator==(const class QMatrix &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QMatrixeqERKS_(void *this_, QMatrix* arg0) {
  return (bool)((QMatrix*)this_)->operator==(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:114
// [1] bool operator!=(const class QMatrix &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QMatrixneERKS_(void *this_, QMatrix* arg0) {
  return (bool)((QMatrix*)this_)->operator!=(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:116
// [48] QMatrix & operator*=(const class QMatrix &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QMatrixmLERKS_(void *this_, QMatrix* arg0) {
  auto& rv = ((QMatrix*)this_)->operator*=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:117
// [48] QMatrix operator*(const class QMatrix &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QMatrixmlERKS_(void *this_, QMatrix* o) {
  auto rv = ((QMatrix*)this_)->operator*(*o);
return new QMatrix(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN7QMatrixD2Ev(void *this_) {
  delete (QMatrix*)(this_);
}
//  main block end
