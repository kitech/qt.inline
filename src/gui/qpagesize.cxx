//  header block begin

// since 0x050300
// /usr/include/qt/QtGui/qpagesize.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpagesize.h>
#include <QtGui>
#include "callback_inherit.h"

// QPageSize is pure virtual: false
// QPageSize has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPageSize_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPageSize_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPageSize_t qt_meta_stringdata_MyQPageSize = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQPageSize"
  },
  "MyQPageSize"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPageSize[] = {
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
class Q_DECL_EXPORT MyQPageSize : public QPageSize {
public:
  virtual ~MyQPageSize() {}
// void QPageSize()
MyQPageSize() : QPageSize() {}
// void QPageSize(QPageSize::PageSizeId)
MyQPageSize(QPageSize::PageSizeId pageSizeId) : QPageSize(pageSizeId) {}
// void QPageSize(const QSize &, const QString &, QPageSize::SizeMatchPolicy)
MyQPageSize(const QSize & pointSize, const QString & name, QPageSize::SizeMatchPolicy matchPolicy) : QPageSize(pointSize, name, matchPolicy) {}
// void QPageSize(const QSizeF &, QPageSize::Unit, const QString &, QPageSize::SizeMatchPolicy)
MyQPageSize(const QSizeF & size, QPageSize::Unit units, const QString & name, QPageSize::SizeMatchPolicy matchPolicy) : QPageSize(size, units, name, matchPolicy) {}
// void QPageSize(const QPageSize &)
MyQPageSize(const QPageSize & other) : QPageSize(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:230
// [-2] void QPageSize()
extern "C" Q_DECL_EXPORT
void* C_ZN9QPageSizeC2Ev() {
  return  new QPageSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:231
// [-2] void QPageSize(QPageSize::PageSizeId)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPageSizeC2ENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  return  new QPageSize(pageSizeId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:232
// [-2] void QPageSize(const QSize &, const QString &, QPageSize::SizeMatchPolicy)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPageSizeC2ERK5QSizeRK7QStringNS_15SizeMatchPolicyE(QSize* pointSize, QString* name, QPageSize::SizeMatchPolicy matchPolicy) {
  return  new QPageSize(*pointSize, *name, matchPolicy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:235
// [-2] void QPageSize(const QSizeF &, QPageSize::Unit, const QString &, QPageSize::SizeMatchPolicy)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPageSizeC2ERK6QSizeFNS_4UnitERK7QStringNS_15SizeMatchPolicyE(QSizeF* size, QPageSize::Unit units, QString* name, QPageSize::SizeMatchPolicy matchPolicy) {
  return  new QPageSize(*size, units, *name, matchPolicy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:238
// [-2] void QPageSize(const QPageSize &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPageSizeC2ERKS_(QPageSize* other) {
  return  new QPageSize(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:240
// [8] QPageSize & operator=(QPageSize &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPageSizeaSEOS_(void *this_, QPageSize && other) {
  auto& rv = ((QPageSize*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:242
// [8] QPageSize & operator=(const QPageSize &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPageSizeaSERKS_(void *this_, QPageSize* other) {
  auto& rv = ((QPageSize*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:243
// [-2] void ~QPageSize()
extern "C" Q_DECL_EXPORT
void C_ZN9QPageSizeD2Ev(void *this_) {
  delete (QPageSize*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:246
// [-2] void swap(QPageSize &)
extern "C" Q_DECL_EXPORT
void C_ZN9QPageSize4swapERS_(void *this_, QPageSize* other) {
  ((QPageSize*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:249
// [1] bool isEquivalentTo(const QPageSize &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QPageSize14isEquivalentToERKS_(void *this_, QPageSize* other) {
  return (bool)((QPageSize*)this_)->isEquivalentTo(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:251
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QPageSize7isValidEv(void *this_) {
  return (bool)((QPageSize*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:253
// [8] QString key()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPageSize3keyEv(void *this_) {
  auto rv = ((QPageSize*)this_)->key();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:254
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPageSize4nameEv(void *this_) {
  auto rv = ((QPageSize*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:256
// [4] QPageSize::PageSizeId id()
extern "C" Q_DECL_EXPORT
QPageSize::PageSizeId C_ZNK9QPageSize2idEv(void *this_) {
  return (QPageSize::PageSizeId)((QPageSize*)this_)->id();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:258
// [4] int windowsId()
extern "C" Q_DECL_EXPORT
int C_ZNK9QPageSize9windowsIdEv(void *this_) {
  return (int)((QPageSize*)this_)->windowsId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:260
// [16] QSizeF definitionSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPageSize14definitionSizeEv(void *this_) {
  auto rv = ((QPageSize*)this_)->definitionSize();
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:261
// [4] QPageSize::Unit definitionUnits()
extern "C" Q_DECL_EXPORT
QPageSize::Unit C_ZNK9QPageSize15definitionUnitsEv(void *this_) {
  return (QPageSize::Unit)((QPageSize*)this_)->definitionUnits();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:263
// [16] QSizeF size(QPageSize::Unit)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPageSize4sizeENS_4UnitE(void *this_, QPageSize::Unit units) {
  auto rv = ((QPageSize*)this_)->size(units);
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:264
// [8] QSize sizePoints()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPageSize10sizePointsEv(void *this_) {
  auto rv = ((QPageSize*)this_)->sizePoints();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:265
// [8] QSize sizePixels(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPageSize10sizePixelsEi(void *this_, int resolution) {
  auto rv = ((QPageSize*)this_)->sizePixels(resolution);
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:267
// [32] QRectF rect(QPageSize::Unit)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPageSize4rectENS_4UnitE(void *this_, QPageSize::Unit units) {
  auto rv = ((QPageSize*)this_)->rect(units);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:268
// [16] QRect rectPoints()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPageSize10rectPointsEv(void *this_) {
  auto rv = ((QPageSize*)this_)->rectPoints();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:269
// [16] QRect rectPixels(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPageSize10rectPixelsEi(void *this_, int resolution) {
  auto rv = ((QPageSize*)this_)->rectPixels(resolution);
return new QRect(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:271
// [8] QString key(QPageSize::PageSizeId)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPageSize3keyENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  auto rv = QPageSize::key(pageSizeId);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:272
// [8] QString name(QPageSize::PageSizeId)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPageSize4nameENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  auto rv = QPageSize::name(pageSizeId);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:274
// [4] QPageSize::PageSizeId id(const QSize &, QPageSize::SizeMatchPolicy)
extern "C" Q_DECL_EXPORT
QPageSize::PageSizeId C_ZN9QPageSize2idERK5QSizeNS_15SizeMatchPolicyE(QSize* pointSize, QPageSize::SizeMatchPolicy matchPolicy) {
  return (QPageSize::PageSizeId)QPageSize::id(*pointSize, matchPolicy);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:276
// [4] QPageSize::PageSizeId id(const QSizeF &, QPageSize::Unit, QPageSize::SizeMatchPolicy)
extern "C" Q_DECL_EXPORT
QPageSize::PageSizeId C_ZN9QPageSize2idERK6QSizeFNS_4UnitENS_15SizeMatchPolicyE(QSizeF* size, QPageSize::Unit units, QPageSize::SizeMatchPolicy matchPolicy) {
  return (QPageSize::PageSizeId)QPageSize::id(*size, units, matchPolicy);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:279
// [4] QPageSize::PageSizeId id(int)
extern "C" Q_DECL_EXPORT
QPageSize::PageSizeId C_ZN9QPageSize2idEi(int windowsId) {
  return (QPageSize::PageSizeId)QPageSize::id(windowsId);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:280
// [4] int windowsId(QPageSize::PageSizeId)
extern "C" Q_DECL_EXPORT
int C_ZN9QPageSize9windowsIdENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  return (int)QPageSize::windowsId(pageSizeId);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:282
// [16] QSizeF definitionSize(QPageSize::PageSizeId)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPageSize14definitionSizeENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  auto rv = QPageSize::definitionSize(pageSizeId);
return new QSizeF(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:283
// [4] QPageSize::Unit definitionUnits(QPageSize::PageSizeId)
extern "C" Q_DECL_EXPORT
QPageSize::Unit C_ZN9QPageSize15definitionUnitsENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  return (QPageSize::Unit)QPageSize::definitionUnits(pageSizeId);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:285
// [16] QSizeF size(QPageSize::PageSizeId, QPageSize::Unit)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPageSize4sizeENS_10PageSizeIdENS_4UnitE(QPageSize::PageSizeId pageSizeId, QPageSize::Unit units) {
  auto rv = QPageSize::size(pageSizeId, units);
return new QSizeF(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:286
// [8] QSize sizePoints(QPageSize::PageSizeId)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPageSize10sizePointsENS_10PageSizeIdE(QPageSize::PageSizeId pageSizeId) {
  auto rv = QPageSize::sizePoints(pageSizeId);
return new QSize(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:287
// [8] QSize sizePixels(QPageSize::PageSizeId, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPageSize10sizePixelsENS_10PageSizeIdEi(QPageSize::PageSizeId pageSizeId, int resolution) {
  auto rv = QPageSize::sizePixels(pageSizeId, resolution);
return new QSize(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
