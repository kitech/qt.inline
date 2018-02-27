//  header block begin
// /usr/include/qt/QtGui/qregion.h
#ifndef protected
#define protected public
#endif
#include <qregion.h>
#include <QtGui>
#include "callback_inherit.h"

// QRegion is pure virtual: false
// QRegion has virtual projected: false
//  header block end

//  main block begin

class MyQRegion : public QRegion {
public:
  virtual ~MyQRegion() {}
// void QRegion()
MyQRegion() : QRegion() {}
// void QRegion(int, int, int, int, enum QRegion::RegionType)
MyQRegion(int x, int y, int w, int h, QRegion::RegionType t) : QRegion(x, y, w, h, t) {}
// void QRegion(const class QRect &, enum QRegion::RegionType)
MyQRegion(const QRect & r, QRegion::RegionType t) : QRegion(r, t) {}
// void QRegion(const class QPolygon &, Qt::FillRule)
MyQRegion(const QPolygon & pa, Qt::FillRule fillRule) : QRegion(pa, fillRule) {}
// void QRegion(const class QBitmap &)
MyQRegion(const QBitmap & bitmap) : QRegion(bitmap) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:67
// [-2] void QRegion()
extern "C"
void* C_ZN7QRegionC2Ev() {
  return  new QRegion();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:68
// [-2] void QRegion(int, int, int, int, enum QRegion::RegionType)
extern "C"
void* C_ZN7QRegionC2EiiiiNS_10RegionTypeE(int x, int y, int w, int h, QRegion::RegionType t) {
  return  new QRegion(x, y, w, h, t);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:69
// [-2] void QRegion(const class QRect &, enum QRegion::RegionType)
extern "C"
void* C_ZN7QRegionC2ERK5QRectNS_10RegionTypeE(QRect* r, QRegion::RegionType t) {
  return  new QRegion(*r, t);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:70
// [-2] void QRegion(const class QPolygon &, Qt::FillRule)
extern "C"
void* C_ZN7QRegionC2ERK8QPolygonN2Qt8FillRuleE(QPolygon* pa, Qt::FillRule fillRule) {
  return  new QRegion(*pa, fillRule);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:74
// [-2] void QRegion(const class QBitmap &)
extern "C"
void* C_ZN7QRegionC2ERK7QBitmap(QBitmap* bitmap) {
  return  new QRegion(*bitmap);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:75
// [-2] void ~QRegion()
extern "C"
void C_ZN7QRegionD2Ev(void *this_) {
  delete (QRegion*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:76
// [8] QRegion & operator=(const class QRegion &)
extern "C"
void* C_ZN7QRegionaSERKS_(void *this_, QRegion* arg0) {
  auto& rv = ((QRegion*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:78
// [8] QRegion & operator=(class QRegion &&)
extern "C"
void* C_ZN7QRegionaSEOS_(void *this_, QRegion && other) {
  auto& rv = ((QRegion*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:81
// [-2] void swap(class QRegion &)
extern "C"
void C_ZN7QRegion4swapERS_(void *this_, QRegion* other) {
  ((QRegion*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:82
// [1] bool isEmpty()
extern "C"
bool C_ZNK7QRegion7isEmptyEv(void *this_) {
  return (bool)((QRegion*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:83
// [1] bool isNull()
extern "C"
bool C_ZNK7QRegion6isNullEv(void *this_) {
  return (bool)((QRegion*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:88
// [8] QRegion::const_iterator begin()
extern "C"
void C_ZNK7QRegion5beginEv(void *this_) {
  auto rv = ((QRegion*)this_)->begin();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:89
// [8] QRegion::const_iterator cbegin()
extern "C"
void C_ZNK7QRegion6cbeginEv(void *this_) {
  auto rv = ((QRegion*)this_)->cbegin();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:90
// [8] QRegion::const_iterator end()
extern "C"
void C_ZNK7QRegion3endEv(void *this_) {
  auto rv = ((QRegion*)this_)->end();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:91
// [8] QRegion::const_iterator cend()
extern "C"
void C_ZNK7QRegion4cendEv(void *this_) {
  auto rv = ((QRegion*)this_)->cend();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:97
// [1] bool contains(const class QPoint &)
extern "C"
bool C_ZNK7QRegion8containsERK6QPoint(void *this_, QPoint* p) {
  return (bool)((QRegion*)this_)->contains(*p);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:98
// [1] bool contains(const class QRect &)
extern "C"
bool C_ZNK7QRegion8containsERK5QRect(void *this_, QRect* r) {
  return (bool)((QRegion*)this_)->contains(*r);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:100
// [-2] void translate(int, int)
extern "C"
void C_ZN7QRegion9translateEii(void *this_, int dx, int dy) {
  ((QRegion*)this_)->translate(dx, dy);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:101
// [-2] void translate(const class QPoint &)
extern "C"
void C_ZN7QRegion9translateERK6QPoint(void *this_, QPoint* p) {
  ((QRegion*)this_)->translate(*p);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:102
// [8] QRegion translated(int, int)
extern "C"
void* C_ZNK7QRegion10translatedEii(void *this_, int dx, int dy) {
  auto rv = ((QRegion*)this_)->translated(dx, dy);
return new QRegion(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:103
// [8] QRegion translated(const class QPoint &)
extern "C"
void* C_ZNK7QRegion10translatedERK6QPoint(void *this_, QPoint* p) {
  auto rv = ((QRegion*)this_)->translated(*p);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:105
// [8] QRegion united(const class QRegion &)
extern "C"
void* C_ZNK7QRegion6unitedERKS_(void *this_, QRegion* r) {
  auto rv = ((QRegion*)this_)->united(*r);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:106
// [8] QRegion united(const class QRect &)
extern "C"
void* C_ZNK7QRegion6unitedERK5QRect(void *this_, QRect* r) {
  auto rv = ((QRegion*)this_)->united(*r);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:107
// [8] QRegion intersected(const class QRegion &)
extern "C"
void* C_ZNK7QRegion11intersectedERKS_(void *this_, QRegion* r) {
  auto rv = ((QRegion*)this_)->intersected(*r);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:108
// [8] QRegion intersected(const class QRect &)
extern "C"
void* C_ZNK7QRegion11intersectedERK5QRect(void *this_, QRect* r) {
  auto rv = ((QRegion*)this_)->intersected(*r);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:109
// [8] QRegion subtracted(const class QRegion &)
extern "C"
void* C_ZNK7QRegion10subtractedERKS_(void *this_, QRegion* r) {
  auto rv = ((QRegion*)this_)->subtracted(*r);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:110
// [8] QRegion xored(const class QRegion &)
extern "C"
void* C_ZNK7QRegion5xoredERKS_(void *this_, QRegion* r) {
  auto rv = ((QRegion*)this_)->xored(*r);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:121
// [1] bool intersects(const class QRegion &)
extern "C"
bool C_ZNK7QRegion10intersectsERKS_(void *this_, QRegion* r) {
  return (bool)((QRegion*)this_)->intersects(*r);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:122
// [1] bool intersects(const class QRect &)
extern "C"
bool C_ZNK7QRegion10intersectsERK5QRect(void *this_, QRect* r) {
  return (bool)((QRegion*)this_)->intersects(*r);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:124
// [16] QRect boundingRect()
extern "C"
void* C_ZNK7QRegion12boundingRectEv(void *this_) {
  auto rv = ((QRegion*)this_)->boundingRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:126
// [-2] void setRects(const class QRect *, int)
extern "C"
void C_ZN7QRegion8setRectsEPK5QRecti(void *this_, const QRect * rect, int num) {
  ((QRegion*)this_)->setRects(rect, num);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:127
// [4] int rectCount()
extern "C"
int C_ZNK7QRegion9rectCountEv(void *this_) {
  return (int)((QRegion*)this_)->rectCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:138
// [8] QRegion operator|(const class QRegion &)
extern "C"
void* C_ZNK7QRegionorERKS_(void *this_, QRegion* r) {
  auto rv = ((QRegion*)this_)->operator|(*r);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:139
// [8] QRegion operator+(const class QRegion &)
extern "C"
void* C_ZNK7QRegionplERKS_(void *this_, QRegion* r) {
  auto rv = ((QRegion*)this_)->operator+(*r);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:140
// [8] QRegion operator+(const class QRect &)
extern "C"
void* C_ZNK7QRegionplERK5QRect(void *this_, QRect* r) {
  auto rv = ((QRegion*)this_)->operator+(*r);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:141
// [8] QRegion operator&(const class QRegion &)
extern "C"
void* C_ZNK7QRegionanERKS_(void *this_, QRegion* r) {
  auto rv = ((QRegion*)this_)->operator&(*r);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:142
// [8] QRegion operator&(const class QRect &)
extern "C"
void* C_ZNK7QRegionanERK5QRect(void *this_, QRect* r) {
  auto rv = ((QRegion*)this_)->operator&(*r);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:143
// [8] QRegion operator-(const class QRegion &)
extern "C"
void* C_ZNK7QRegionmiERKS_(void *this_, QRegion* r) {
  auto rv = ((QRegion*)this_)->operator-(*r);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:144
// [8] QRegion operator^(const class QRegion &)
extern "C"
void* C_ZNK7QRegioneoERKS_(void *this_, QRegion* r) {
  auto rv = ((QRegion*)this_)->operator^(*r);
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:146
// [8] QRegion & operator|=(const class QRegion &)
extern "C"
void* C_ZN7QRegionoRERKS_(void *this_, QRegion* r) {
  auto& rv = ((QRegion*)this_)->operator|=(*r);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:147
// [8] QRegion & operator+=(const class QRegion &)
extern "C"
void* C_ZN7QRegionpLERKS_(void *this_, QRegion* r) {
  auto& rv = ((QRegion*)this_)->operator+=(*r);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:148
// [8] QRegion & operator+=(const class QRect &)
extern "C"
void* C_ZN7QRegionpLERK5QRect(void *this_, QRect* r) {
  auto& rv = ((QRegion*)this_)->operator+=(*r);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:149
// [8] QRegion & operator&=(const class QRegion &)
extern "C"
void* C_ZN7QRegionaNERKS_(void *this_, QRegion* r) {
  auto& rv = ((QRegion*)this_)->operator&=(*r);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:150
// [8] QRegion & operator&=(const class QRect &)
extern "C"
void* C_ZN7QRegionaNERK5QRect(void *this_, QRect* r) {
  auto& rv = ((QRegion*)this_)->operator&=(*r);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:151
// [8] QRegion & operator-=(const class QRegion &)
extern "C"
void* C_ZN7QRegionmIERKS_(void *this_, QRegion* r) {
  auto& rv = ((QRegion*)this_)->operator-=(*r);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:152
// [8] QRegion & operator^=(const class QRegion &)
extern "C"
void* C_ZN7QRegioneOERKS_(void *this_, QRegion* r) {
  auto& rv = ((QRegion*)this_)->operator^=(*r);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:154
// [1] bool operator==(const class QRegion &)
extern "C"
bool C_ZNK7QRegioneqERKS_(void *this_, QRegion* r) {
  return (bool)((QRegion*)this_)->operator==(*r);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:155
// [1] bool operator!=(const class QRegion &)
extern "C"
bool C_ZNK7QRegionneERKS_(void *this_, QRegion* r) {
  return (bool)((QRegion*)this_)->operator!=(*r);
}

//  main block end
