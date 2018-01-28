//  header block begin
// /usr/include/qt/QtGui/qpagesize.h
#include <qpagesize.h>
#include <QtGui>

// QPageSize is pure virtual: false
//  header block end

//  main block begin

class MyQPageSize : public QPageSize {
public:
MyQPageSize() : QPageSize() {}
MyQPageSize(QPageSize::PageSizeId pageSizeId) : QPageSize(pageSizeId) {}
MyQPageSize(const QSize & pointSize, const QString & name, QPageSize::SizeMatchPolicy matchPolicy) : QPageSize(pointSize, name, matchPolicy) {}
MyQPageSize(const QSizeF & size, QPageSize::Unit units, const QString & name, QPageSize::SizeMatchPolicy matchPolicy) : QPageSize(size, units, name, matchPolicy) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:230
// [-2] void QPageSize()
extern "C"
void* C_ZN9QPageSizeC1Ev() {
  (MyQPageSize*)(0);
  return  new MyQPageSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:231
// [-2] void QPageSize(enum QPageSize::PageSizeId)
extern "C"
void* C_ZN9QPageSizeC1ENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  (MyQPageSize*)(0);
  return  new MyQPageSize(pageSizeId);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:232
// [-2] void QPageSize(const class QSize &, const class QString &, enum QPageSize::SizeMatchPolicy)
extern "C"
void* C_ZN9QPageSizeC1ERK5QSizeRK7QStringNS_15SizeMatchPolicyE(const QSize & pointSize, const QString & name, QPageSize::SizeMatchPolicy matchPolicy) {
  (MyQPageSize*)(0);
  return  new MyQPageSize(pointSize, name, matchPolicy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:235
// [-2] void QPageSize(const class QSizeF &, enum QPageSize::Unit, const class QString &, enum QPageSize::SizeMatchPolicy)
extern "C"
void* C_ZN9QPageSizeC1ERK6QSizeFNS_4UnitERK7QStringNS_15SizeMatchPolicyE(const QSizeF & size, QPageSize::Unit units, const QString & name, QPageSize::SizeMatchPolicy matchPolicy) {
  (MyQPageSize*)(0);
  return  new MyQPageSize(size, units, name, matchPolicy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:243
// [-2] void ~QPageSize()
extern "C"
void C_ZN9QPageSizeD1Ev(void *this_) {
  delete (QPageSize*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:246
// [-2] void swap(class QPageSize &)
extern "C"
void C_ZN9QPageSize4swapERS_(void *this_, QPageSize & other) {
  ((QPageSize*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:249
// [1] bool isEquivalentTo(const class QPageSize &)
extern "C"
bool C_ZNK9QPageSize14isEquivalentToERKS_(void *this_, const QPageSize & other) {
  return (bool)((QPageSize*)this_)->isEquivalentTo(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:251
// [1] bool isValid()
extern "C"
bool C_ZNK9QPageSize7isValidEv(void *this_) {
  return (bool)((QPageSize*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:253
// [8] QString key()
extern "C"
void* C_ZNK9QPageSize3keyEv(void *this_) {
  auto rv = ((QPageSize*)this_)->key();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:254
// [8] QString name()
extern "C"
void* C_ZNK9QPageSize4nameEv(void *this_) {
  auto rv = ((QPageSize*)this_)->name();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:256
// [4] QPageSize::PageSizeId id()
extern "C"
QPageSize::PageSizeId C_ZNK9QPageSize2idEv(void *this_) {
  return (QPageSize::PageSizeId)((QPageSize*)this_)->id();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:258
// [4] int windowsId()
extern "C"
int C_ZNK9QPageSize9windowsIdEv(void *this_) {
  return (int)((QPageSize*)this_)->windowsId();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:260
// [16] QSizeF definitionSize()
extern "C"
void* C_ZNK9QPageSize14definitionSizeEv(void *this_) {
  auto rv = ((QPageSize*)this_)->definitionSize();
return new QSizeF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:261
// [4] QPageSize::Unit definitionUnits()
extern "C"
QPageSize::Unit C_ZNK9QPageSize15definitionUnitsEv(void *this_) {
  return (QPageSize::Unit)((QPageSize*)this_)->definitionUnits();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:263
// [16] QSizeF size(enum QPageSize::Unit)
extern "C"
void* C_ZNK9QPageSize4sizeENS_4UnitE(void *this_, QPageSize::Unit units) {
  auto rv = ((QPageSize*)this_)->size(units);
return new QSizeF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:264
// [8] QSize sizePoints()
extern "C"
void* C_ZNK9QPageSize10sizePointsEv(void *this_) {
  auto rv = ((QPageSize*)this_)->sizePoints();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:265
// [8] QSize sizePixels(int)
extern "C"
void* C_ZNK9QPageSize10sizePixelsEi(void *this_, int resolution) {
  auto rv = ((QPageSize*)this_)->sizePixels(resolution);
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:267
// [32] QRectF rect(enum QPageSize::Unit)
extern "C"
void* C_ZNK9QPageSize4rectENS_4UnitE(void *this_, QPageSize::Unit units) {
  auto rv = ((QPageSize*)this_)->rect(units);
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:268
// [16] QRect rectPoints()
extern "C"
void* C_ZNK9QPageSize10rectPointsEv(void *this_) {
  auto rv = ((QPageSize*)this_)->rectPoints();
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:269
// [16] QRect rectPixels(int)
extern "C"
void* C_ZNK9QPageSize10rectPixelsEi(void *this_, int resolution) {
  auto rv = ((QPageSize*)this_)->rectPixels(resolution);
return new QRect(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:271
// [8] QString key(enum QPageSize::PageSizeId)
extern "C"
void* C_ZN9QPageSize3keyENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  auto rv = QPageSize::key(pageSizeId);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:272
// [8] QString name(enum QPageSize::PageSizeId)
extern "C"
void* C_ZN9QPageSize4nameENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  auto rv = QPageSize::name(pageSizeId);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:274
// [4] QPageSize::PageSizeId id(const class QSize &, enum QPageSize::SizeMatchPolicy)
extern "C"
QPageSize::PageSizeId C_ZN9QPageSize2idERK5QSizeNS_15SizeMatchPolicyE(const QSize & pointSize, QPageSize::SizeMatchPolicy matchPolicy) {
  return (QPageSize::PageSizeId)QPageSize::id(pointSize, matchPolicy);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:276
// [4] QPageSize::PageSizeId id(const class QSizeF &, enum QPageSize::Unit, enum QPageSize::SizeMatchPolicy)
extern "C"
QPageSize::PageSizeId C_ZN9QPageSize2idERK6QSizeFNS_4UnitENS_15SizeMatchPolicyE(const QSizeF & size, QPageSize::Unit units, QPageSize::SizeMatchPolicy matchPolicy) {
  return (QPageSize::PageSizeId)QPageSize::id(size, units, matchPolicy);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:279
// [4] QPageSize::PageSizeId id(int)
extern "C"
QPageSize::PageSizeId C_ZN9QPageSize2idEi(int windowsId) {
  return (QPageSize::PageSizeId)QPageSize::id(windowsId);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:280
// [4] int windowsId(enum QPageSize::PageSizeId)
extern "C"
int C_ZN9QPageSize9windowsIdENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  return (int)QPageSize::windowsId(pageSizeId);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:282
// [16] QSizeF definitionSize(enum QPageSize::PageSizeId)
extern "C"
void* C_ZN9QPageSize14definitionSizeENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  auto rv = QPageSize::definitionSize(pageSizeId);
return new QSizeF(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:283
// [4] QPageSize::Unit definitionUnits(enum QPageSize::PageSizeId)
extern "C"
QPageSize::Unit C_ZN9QPageSize15definitionUnitsENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  return (QPageSize::Unit)QPageSize::definitionUnits(pageSizeId);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:285
// [16] QSizeF size(enum QPageSize::PageSizeId, enum QPageSize::Unit)
extern "C"
void* C_ZN9QPageSize4sizeENS_10PageSizeIdENS_4UnitE(QPageSize::PageSizeId pageSizeId, QPageSize::Unit units) {
  auto rv = QPageSize::size(pageSizeId, units);
return new QSizeF(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:286
// [8] QSize sizePoints(enum QPageSize::PageSizeId)
extern "C"
void* C_ZN9QPageSize10sizePointsENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  auto rv = QPageSize::sizePoints(pageSizeId);
return new QSize(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:287
// [8] QSize sizePixels(enum QPageSize::PageSizeId, int)
extern "C"
void* C_ZN9QPageSize10sizePixelsENS_10PageSizeIdEi(QPageSize::PageSizeId pageSizeId, int resolution) {
  auto rv = QPageSize::sizePixels(pageSizeId, resolution);
return new QSize(rv);
}
//  main block end
