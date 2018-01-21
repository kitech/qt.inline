//  header block begin
// /usr/include/qt/QtGui/qpagesize.h
#include <qpagesize.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qpagesize.h:229
// void QPageSize()
extern "C"
void* C_ZN9QPageSizeC1Ev() {
  return new QPageSize();
}
// /usr/include/qt/QtGui/qpagesize.h:230
// void QPageSize(enum QPageSize::PageSizeId)
extern "C"
void* C_ZN9QPageSizeC1ENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  return new QPageSize(pageSizeId);
}
// /usr/include/qt/QtGui/qpagesize.h:231
// void QPageSize(const class QSize &, const class QString &, enum QPageSize::SizeMatchPolicy)
extern "C"
void* C_ZN9QPageSizeC1ERK5QSizeRK7QStringNS_15SizeMatchPolicyE(const QSize & pointSize, const QString & name, QPageSize::SizeMatchPolicy matchPolicy) {
  return new QPageSize(pointSize, name, matchPolicy);
}
// /usr/include/qt/QtGui/qpagesize.h:234
// void QPageSize(const class QSizeF &, enum QPageSize::Unit, const class QString &, enum QPageSize::SizeMatchPolicy)
extern "C"
void* C_ZN9QPageSizeC1ERK6QSizeFNS_4UnitERK7QStringNS_15SizeMatchPolicyE(const QSizeF & size, QPageSize::Unit units, const QString & name, QPageSize::SizeMatchPolicy matchPolicy) {
  return new QPageSize(size, units, name, matchPolicy);
}
// /usr/include/qt/QtGui/qpagesize.h:242
// void ~QPageSize()
extern "C"
void C_ZN9QPageSizeD1Ev(void *this_) {
  delete (QPageSize*)(this_);
}
// inline
// /usr/include/qt/QtGui/qpagesize.h:245
// void swap(class QPageSize &)
extern "C"
void C_ZN9QPageSize4swapERS_(void *this_, QPageSize & other) {
  ((QPageSize*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qpagesize.h:248
// bool isEquivalentTo(const class QPageSize &)
extern "C"
void C_ZNK9QPageSize14isEquivalentToERKS_(void *this_, const QPageSize & other) {
  /*return*/ ((QPageSize*)this_)->isEquivalentTo(other);
}
// /usr/include/qt/QtGui/qpagesize.h:250
// bool isValid()
extern "C"
void C_ZNK9QPageSize7isValidEv(void *this_) {
  /*return*/ ((QPageSize*)this_)->isValid();
}
// /usr/include/qt/QtGui/qpagesize.h:252
// QString key()
extern "C"
void C_ZNK9QPageSize3keyEv(void *this_) {
  /*return*/ ((QPageSize*)this_)->key();
}
// /usr/include/qt/QtGui/qpagesize.h:253
// QString name()
extern "C"
void C_ZNK9QPageSize4nameEv(void *this_) {
  /*return*/ ((QPageSize*)this_)->name();
}
// /usr/include/qt/QtGui/qpagesize.h:255
// QPageSize::PageSizeId id()
extern "C"
void C_ZNK9QPageSize2idEv(void *this_) {
  /*return*/ ((QPageSize*)this_)->id();
}
// /usr/include/qt/QtGui/qpagesize.h:257
// int windowsId()
extern "C"
void C_ZNK9QPageSize9windowsIdEv(void *this_) {
  /*return*/ ((QPageSize*)this_)->windowsId();
}
// /usr/include/qt/QtGui/qpagesize.h:259
// QSizeF definitionSize()
extern "C"
void C_ZNK9QPageSize14definitionSizeEv(void *this_) {
  /*return*/ ((QPageSize*)this_)->definitionSize();
}
// /usr/include/qt/QtGui/qpagesize.h:260
// QPageSize::Unit definitionUnits()
extern "C"
void C_ZNK9QPageSize15definitionUnitsEv(void *this_) {
  /*return*/ ((QPageSize*)this_)->definitionUnits();
}
// /usr/include/qt/QtGui/qpagesize.h:262
// QSizeF size(enum QPageSize::Unit)
extern "C"
void C_ZNK9QPageSize4sizeENS_4UnitE(void *this_, QPageSize::Unit units) {
  /*return*/ ((QPageSize*)this_)->size(units);
}
// /usr/include/qt/QtGui/qpagesize.h:263
// QSize sizePoints()
extern "C"
void C_ZNK9QPageSize10sizePointsEv(void *this_) {
  /*return*/ ((QPageSize*)this_)->sizePoints();
}
// /usr/include/qt/QtGui/qpagesize.h:264
// QSize sizePixels(int)
extern "C"
void C_ZNK9QPageSize10sizePixelsEi(void *this_, int resolution) {
  /*return*/ ((QPageSize*)this_)->sizePixels(resolution);
}
// /usr/include/qt/QtGui/qpagesize.h:266
// QRectF rect(enum QPageSize::Unit)
extern "C"
void C_ZNK9QPageSize4rectENS_4UnitE(void *this_, QPageSize::Unit units) {
  /*return*/ ((QPageSize*)this_)->rect(units);
}
// /usr/include/qt/QtGui/qpagesize.h:267
// QRect rectPoints()
extern "C"
void C_ZNK9QPageSize10rectPointsEv(void *this_) {
  /*return*/ ((QPageSize*)this_)->rectPoints();
}
// /usr/include/qt/QtGui/qpagesize.h:268
// QRect rectPixels(int)
extern "C"
void C_ZNK9QPageSize10rectPixelsEi(void *this_, int resolution) {
  /*return*/ ((QPageSize*)this_)->rectPixels(resolution);
}
// static
// /usr/include/qt/QtGui/qpagesize.h:270
// QString key(enum QPageSize::PageSizeId)
extern "C"
void C_ZN9QPageSize3keyENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  /*return*/ QPageSize::key(pageSizeId);
}
// static
// /usr/include/qt/QtGui/qpagesize.h:271
// QString name(enum QPageSize::PageSizeId)
extern "C"
void C_ZN9QPageSize4nameENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  /*return*/ QPageSize::name(pageSizeId);
}
// static
// /usr/include/qt/QtGui/qpagesize.h:273
// QPageSize::PageSizeId id(const class QSize &, enum QPageSize::SizeMatchPolicy)
extern "C"
void C_ZN9QPageSize2idERK5QSizeNS_15SizeMatchPolicyE(const QSize & pointSize, QPageSize::SizeMatchPolicy matchPolicy) {
  /*return*/ QPageSize::id(pointSize, matchPolicy);
}
// static
// /usr/include/qt/QtGui/qpagesize.h:275
// QPageSize::PageSizeId id(const class QSizeF &, enum QPageSize::Unit, enum QPageSize::SizeMatchPolicy)
extern "C"
void C_ZN9QPageSize2idERK6QSizeFNS_4UnitENS_15SizeMatchPolicyE(const QSizeF & size, QPageSize::Unit units, QPageSize::SizeMatchPolicy matchPolicy) {
  /*return*/ QPageSize::id(size, units, matchPolicy);
}
// static
// /usr/include/qt/QtGui/qpagesize.h:278
// QPageSize::PageSizeId id(int)
extern "C"
void C_ZN9QPageSize2idEi(int windowsId) {
  /*return*/ QPageSize::id(windowsId);
}
// static
// /usr/include/qt/QtGui/qpagesize.h:279
// int windowsId(enum QPageSize::PageSizeId)
extern "C"
void C_ZN9QPageSize9windowsIdENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  /*return*/ QPageSize::windowsId(pageSizeId);
}
// static
// /usr/include/qt/QtGui/qpagesize.h:281
// QSizeF definitionSize(enum QPageSize::PageSizeId)
extern "C"
void C_ZN9QPageSize14definitionSizeENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  /*return*/ QPageSize::definitionSize(pageSizeId);
}
// static
// /usr/include/qt/QtGui/qpagesize.h:282
// QPageSize::Unit definitionUnits(enum QPageSize::PageSizeId)
extern "C"
void C_ZN9QPageSize15definitionUnitsENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  /*return*/ QPageSize::definitionUnits(pageSizeId);
}
// static
// /usr/include/qt/QtGui/qpagesize.h:284
// QSizeF size(enum QPageSize::PageSizeId, enum QPageSize::Unit)
extern "C"
void C_ZN9QPageSize4sizeENS_10PageSizeIdENS_4UnitE(QPageSize::PageSizeId pageSizeId, QPageSize::Unit units) {
  /*return*/ QPageSize::size(pageSizeId, units);
}
// static
// /usr/include/qt/QtGui/qpagesize.h:285
// QSize sizePoints(enum QPageSize::PageSizeId)
extern "C"
void C_ZN9QPageSize10sizePointsENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  /*return*/ QPageSize::sizePoints(pageSizeId);
}
// static
// /usr/include/qt/QtGui/qpagesize.h:286
// QSize sizePixels(enum QPageSize::PageSizeId, int)
extern "C"
void C_ZN9QPageSize10sizePixelsENS_10PageSizeIdEi(QPageSize::PageSizeId pageSizeId, int resolution) {
  /*return*/ QPageSize::sizePixels(pageSizeId, resolution);
}
//  main block end
