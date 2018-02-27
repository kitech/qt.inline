//  header block begin
// /usr/include/qt/QtCore/qsize.h
#ifndef protected
#define protected public
#endif
#include <qsize.h>
#include <QtCore>
#include "callback_inherit.h"

// QSize is pure virtual: false
// QSize has virtual projected: false
//  header block end

//  main block begin

class MyQSize : public QSize {
public:
  virtual ~MyQSize() {}
// void QSize()
MyQSize() : QSize() {}
// void QSize(int, int)
MyQSize(int w, int h) : QSize(w, h) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:55
// [-2] void QSize()
extern "C"
void* C_ZN5QSizeC2Ev() {
  return  new QSize();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:56
// [-2] void QSize(int, int)
extern "C"
void* C_ZN5QSizeC2Eii(int w, int h) {
  return  new QSize(w, h);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:58
// [1] bool isNull()
extern "C"
bool C_ZNK5QSize6isNullEv(void *this_) {
  return (bool)((QSize*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:59
// [1] bool isEmpty()
extern "C"
bool C_ZNK5QSize7isEmptyEv(void *this_) {
  return (bool)((QSize*)this_)->isEmpty();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:60
// [1] bool isValid()
extern "C"
bool C_ZNK5QSize7isValidEv(void *this_) {
  return (bool)((QSize*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:62
// [4] int width()
extern "C"
int C_ZNK5QSize5widthEv(void *this_) {
  return (int)((QSize*)this_)->width();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:63
// [4] int height()
extern "C"
int C_ZNK5QSize6heightEv(void *this_) {
  return (int)((QSize*)this_)->height();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:64
// [-2] void setWidth(int)
extern "C"
void C_ZN5QSize8setWidthEi(void *this_, int w) {
  ((QSize*)this_)->setWidth(w);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:65
// [-2] void setHeight(int)
extern "C"
void C_ZN5QSize9setHeightEi(void *this_, int h) {
  ((QSize*)this_)->setHeight(h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:66
// [-2] void transpose()
extern "C"
void C_ZN5QSize9transposeEv(void *this_) {
  ((QSize*)this_)->transpose();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:67
// [8] QSize transposed()
extern "C"
void* C_ZNK5QSize10transposedEv(void *this_) {
  auto rv = ((QSize*)this_)->transposed();
return new QSize(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:69
// [-2] void scale(int, int, Qt::AspectRatioMode)
extern "C"
void C_ZN5QSize5scaleEiiN2Qt15AspectRatioModeE(void *this_, int w, int h, Qt::AspectRatioMode mode) {
  ((QSize*)this_)->scale(w, h, mode);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:70
// [-2] void scale(const class QSize &, Qt::AspectRatioMode)
extern "C"
void C_ZN5QSize5scaleERKS_N2Qt15AspectRatioModeE(void *this_, QSize* s, Qt::AspectRatioMode mode) {
  ((QSize*)this_)->scale(*s, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:71
// [8] QSize scaled(int, int, Qt::AspectRatioMode)
extern "C"
void* C_ZNK5QSize6scaledEiiN2Qt15AspectRatioModeE(void *this_, int w, int h, Qt::AspectRatioMode mode) {
  auto rv = ((QSize*)this_)->scaled(w, h, mode);
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:72
// [8] QSize scaled(const class QSize &, Qt::AspectRatioMode)
extern "C"
void* C_ZNK5QSize6scaledERKS_N2Qt15AspectRatioModeE(void *this_, QSize* s, Qt::AspectRatioMode mode) {
  auto rv = ((QSize*)this_)->scaled(*s, mode);
return new QSize(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:74
// [8] QSize expandedTo(const class QSize &)
extern "C"
void* C_ZNK5QSize10expandedToERKS_(void *this_, QSize* arg0) {
  auto rv = ((QSize*)this_)->expandedTo(*arg0);
return new QSize(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:75
// [8] QSize boundedTo(const class QSize &)
extern "C"
void* C_ZNK5QSize9boundedToERKS_(void *this_, QSize* arg0) {
  auto rv = ((QSize*)this_)->boundedTo(*arg0);
return new QSize(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:77
// [4] int & rwidth()
extern "C"
void* C_ZN5QSize6rwidthEv(void *this_) {
  auto& rv = ((QSize*)this_)->rwidth();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:78
// [4] int & rheight()
extern "C"
void* C_ZN5QSize7rheightEv(void *this_) {
  auto& rv = ((QSize*)this_)->rheight();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:80
// [8] QSize & operator+=(const class QSize &)
extern "C"
void* C_ZN5QSizepLERKS_(void *this_, QSize* arg0) {
  auto& rv = ((QSize*)this_)->operator+=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:81
// [8] QSize & operator-=(const class QSize &)
extern "C"
void* C_ZN5QSizemIERKS_(void *this_, QSize* arg0) {
  auto& rv = ((QSize*)this_)->operator-=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:82
// [8] QSize & operator*=(qreal)
extern "C"
void* C_ZN5QSizemLEd(void *this_, qreal c) {
  auto& rv = ((QSize*)this_)->operator*=(c);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:83
// [8] QSize & operator/=(qreal)
extern "C"
void* C_ZN5QSizedVEd(void *this_, qreal c) {
  auto& rv = ((QSize*)this_)->operator/=(c);
return &rv;
}


extern "C"
void C_ZN5QSizeD2Ev(void *this_) {
  delete (QSize*)(this_);
}
//  main block end
