//  header block begin
// since 0x050300
// /usr/include/qt/QtGui/qpagelayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpagelayout.h>
#include <QtGui>
#include "callback_inherit.h"

// QPageLayout is pure virtual: false
// QPageLayout has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQPageLayout_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPageLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPageLayout_t qt_meta_stringdata_MyQPageLayout = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQPageLayout"
  },
  "MyQPageLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPageLayout[] = {
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
class Q_DECL_EXPORT MyQPageLayout : public QPageLayout {
public:
  virtual ~MyQPageLayout() {}
// void QPageLayout()
MyQPageLayout() : QPageLayout() {}
// void QPageLayout(const QPageSize &, QPageLayout::Orientation, const QMarginsF &, QPageLayout::Unit, const QMarginsF &)
MyQPageLayout(const QPageSize & pageSize, QPageLayout::Orientation orientation, const QMarginsF & margins, QPageLayout::Unit units, const QMarginsF & minMargins) : QPageLayout(pageSize, orientation, margins, units, minMargins) {}
// void QPageLayout(const QPageLayout &)
MyQPageLayout(const QPageLayout & other) : QPageLayout(other) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:80
// [-2] void QPageLayout()
extern "C" Q_DECL_EXPORT
void* C_ZN11QPageLayoutC2Ev() {
  return  new QPageLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:81
// [-2] void QPageLayout(const QPageSize &, QPageLayout::Orientation, const QMarginsF &, QPageLayout::Unit, const QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPageLayoutC2ERK9QPageSizeNS_11OrientationERK9QMarginsFNS_4UnitES6_(QPageSize* pageSize, QPageLayout::Orientation orientation, QMarginsF* margins, QPageLayout::Unit units, QMarginsF* minMargins) {
  return  new QPageLayout(*pageSize, orientation, *margins, units, *minMargins);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:84
// [-2] void QPageLayout(const QPageLayout &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPageLayoutC2ERKS_(QPageLayout* other) {
  return  new QPageLayout(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:86
// [8] QPageLayout & operator=(QPageLayout &&)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPageLayoutaSEOS_(void *this_, QPageLayout && other) {
  auto& rv = ((QPageLayout*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:88
// [8] QPageLayout & operator=(const QPageLayout &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPageLayoutaSERKS_(void *this_, QPageLayout* other) {
  auto& rv = ((QPageLayout*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:89
// [-2] void ~QPageLayout()
extern "C" Q_DECL_EXPORT
void C_ZN11QPageLayoutD2Ev(void *this_) {
  delete (QPageLayout*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:91
// [-2] void swap(QPageLayout &)
extern "C" Q_DECL_EXPORT
void C_ZN11QPageLayout4swapERS_(void *this_, QPageLayout* other) {
  ((QPageLayout*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:94
// [1] bool isEquivalentTo(const QPageLayout &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QPageLayout14isEquivalentToERKS_(void *this_, QPageLayout* other) {
  return (bool)((QPageLayout*)this_)->isEquivalentTo(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:96
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QPageLayout7isValidEv(void *this_) {
  return (bool)((QPageLayout*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:98
// [-2] void setMode(QPageLayout::Mode)
extern "C" Q_DECL_EXPORT
void C_ZN11QPageLayout7setModeENS_4ModeE(void *this_, QPageLayout::Mode mode) {
  ((QPageLayout*)this_)->setMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:99
// [4] QPageLayout::Mode mode()
extern "C" Q_DECL_EXPORT
QPageLayout::Mode C_ZNK11QPageLayout4modeEv(void *this_) {
  return (QPageLayout::Mode)((QPageLayout*)this_)->mode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:101
// [-2] void setPageSize(const QPageSize &, const QMarginsF &)
extern "C" Q_DECL_EXPORT
void C_ZN11QPageLayout11setPageSizeERK9QPageSizeRK9QMarginsF(void *this_, QPageSize* pageSize, QMarginsF* minMargins) {
  ((QPageLayout*)this_)->setPageSize(*pageSize, *minMargins);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:103
// [8] QPageSize pageSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPageLayout8pageSizeEv(void *this_) {
  auto rv = ((QPageLayout*)this_)->pageSize();
return new QPageSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:105
// [-2] void setOrientation(QPageLayout::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN11QPageLayout14setOrientationENS_11OrientationE(void *this_, QPageLayout::Orientation orientation) {
  ((QPageLayout*)this_)->setOrientation(orientation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:106
// [4] QPageLayout::Orientation orientation()
extern "C" Q_DECL_EXPORT
QPageLayout::Orientation C_ZNK11QPageLayout11orientationEv(void *this_) {
  return (QPageLayout::Orientation)((QPageLayout*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:108
// [-2] void setUnits(QPageLayout::Unit)
extern "C" Q_DECL_EXPORT
void C_ZN11QPageLayout8setUnitsENS_4UnitE(void *this_, QPageLayout::Unit units) {
  ((QPageLayout*)this_)->setUnits(units);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:109
// [4] QPageLayout::Unit units()
extern "C" Q_DECL_EXPORT
QPageLayout::Unit C_ZNK11QPageLayout5unitsEv(void *this_) {
  return (QPageLayout::Unit)((QPageLayout*)this_)->units();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:111
// [1] bool setMargins(const QMarginsF &)
extern "C" Q_DECL_EXPORT
bool C_ZN11QPageLayout10setMarginsERK9QMarginsF(void *this_, QMarginsF* margins) {
  return (bool)((QPageLayout*)this_)->setMargins(*margins);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:112
// [1] bool setLeftMargin(qreal)
extern "C" Q_DECL_EXPORT
bool C_ZN11QPageLayout13setLeftMarginEd(void *this_, qreal leftMargin) {
  return (bool)((QPageLayout*)this_)->setLeftMargin(leftMargin);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:113
// [1] bool setRightMargin(qreal)
extern "C" Q_DECL_EXPORT
bool C_ZN11QPageLayout14setRightMarginEd(void *this_, qreal rightMargin) {
  return (bool)((QPageLayout*)this_)->setRightMargin(rightMargin);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:114
// [1] bool setTopMargin(qreal)
extern "C" Q_DECL_EXPORT
bool C_ZN11QPageLayout12setTopMarginEd(void *this_, qreal topMargin) {
  return (bool)((QPageLayout*)this_)->setTopMargin(topMargin);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:115
// [1] bool setBottomMargin(qreal)
extern "C" Q_DECL_EXPORT
bool C_ZN11QPageLayout15setBottomMarginEd(void *this_, qreal bottomMargin) {
  return (bool)((QPageLayout*)this_)->setBottomMargin(bottomMargin);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:117
// [32] QMarginsF margins()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPageLayout7marginsEv(void *this_) {
  auto rv = ((QPageLayout*)this_)->margins();
return new QMarginsF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:118
// [32] QMarginsF margins(QPageLayout::Unit)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPageLayout7marginsENS_4UnitE(void *this_, QPageLayout::Unit units) {
  auto rv = ((QPageLayout*)this_)->margins(units);
return new QMarginsF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:119
// [16] QMargins marginsPoints()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPageLayout13marginsPointsEv(void *this_) {
  auto rv = ((QPageLayout*)this_)->marginsPoints();
return new QMargins(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:120
// [16] QMargins marginsPixels(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPageLayout13marginsPixelsEi(void *this_, int resolution) {
  auto rv = ((QPageLayout*)this_)->marginsPixels(resolution);
return new QMargins(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:122
// [-2] void setMinimumMargins(const QMarginsF &)
extern "C" Q_DECL_EXPORT
void C_ZN11QPageLayout17setMinimumMarginsERK9QMarginsF(void *this_, QMarginsF* minMargins) {
  ((QPageLayout*)this_)->setMinimumMargins(*minMargins);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:123
// [32] QMarginsF minimumMargins()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPageLayout14minimumMarginsEv(void *this_) {
  auto rv = ((QPageLayout*)this_)->minimumMargins();
return new QMarginsF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:124
// [32] QMarginsF maximumMargins()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPageLayout14maximumMarginsEv(void *this_) {
  auto rv = ((QPageLayout*)this_)->maximumMargins();
return new QMarginsF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:126
// [32] QRectF fullRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPageLayout8fullRectEv(void *this_) {
  auto rv = ((QPageLayout*)this_)->fullRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:127
// [32] QRectF fullRect(QPageLayout::Unit)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPageLayout8fullRectENS_4UnitE(void *this_, QPageLayout::Unit units) {
  auto rv = ((QPageLayout*)this_)->fullRect(units);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:128
// [16] QRect fullRectPoints()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPageLayout14fullRectPointsEv(void *this_) {
  auto rv = ((QPageLayout*)this_)->fullRectPoints();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:129
// [16] QRect fullRectPixels(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPageLayout14fullRectPixelsEi(void *this_, int resolution) {
  auto rv = ((QPageLayout*)this_)->fullRectPixels(resolution);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:131
// [32] QRectF paintRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPageLayout9paintRectEv(void *this_) {
  auto rv = ((QPageLayout*)this_)->paintRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:132
// [32] QRectF paintRect(QPageLayout::Unit)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPageLayout9paintRectENS_4UnitE(void *this_, QPageLayout::Unit units) {
  auto rv = ((QPageLayout*)this_)->paintRect(units);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:133
// [16] QRect paintRectPoints()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPageLayout15paintRectPointsEv(void *this_) {
  auto rv = ((QPageLayout*)this_)->paintRectPoints();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:134
// [16] QRect paintRectPixels(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPageLayout15paintRectPixelsEi(void *this_, int resolution) {
  auto rv = ((QPageLayout*)this_)->paintRectPixels(resolution);
return new QRect(rv);
}

//  main block end
