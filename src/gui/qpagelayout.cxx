// /usr/include/qt/QtGui/qpagelayout.h
#include <qpagelayout.h>
#include <QtGui>

// /usr/include/qt/QtGui/qpagelayout.h:79
// void QPageLayout()
extern "C"
void* C_ZN11QPageLayoutC1Ev() {
  return new QPageLayout();
}
// /usr/include/qt/QtGui/qpagelayout.h:80
// void QPageLayout(const class QPageSize &, enum QPageLayout::Orientation, const class QMarginsF &, enum QPageLayout::Unit, const class QMarginsF &)
extern "C"
void* C_ZN11QPageLayoutC1ERK9QPageSizeNS_11OrientationERK9QMarginsFNS_4UnitES6_(const QPageSize & pageSize, QPageLayout::Orientation orientation, const QMarginsF & margins, QPageLayout::Unit units, const QMarginsF & minMargins) {
  return new QPageLayout(pageSize, orientation, margins, units, minMargins);
}
// /usr/include/qt/QtGui/qpagelayout.h:88
// void ~QPageLayout()
extern "C"
void C_ZN11QPageLayoutD1Ev(void *this_) {
  delete (QPageLayout*)(this_);
}
// inline
// /usr/include/qt/QtGui/qpagelayout.h:90
// void swap(class QPageLayout &)
extern "C"
void C_ZN11QPageLayout4swapERS_(void *this_, QPageLayout & other) {
  ((QPageLayout*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qpagelayout.h:93
// bool isEquivalentTo(const class QPageLayout &)
extern "C"
void C_ZNK11QPageLayout14isEquivalentToERKS_(void *this_, const QPageLayout & other) {
  /*return*/ ((QPageLayout*)this_)->isEquivalentTo(other);
}
// /usr/include/qt/QtGui/qpagelayout.h:95
// bool isValid()
extern "C"
void C_ZNK11QPageLayout7isValidEv(void *this_) {
  /*return*/ ((QPageLayout*)this_)->isValid();
}
// /usr/include/qt/QtGui/qpagelayout.h:97
// void setMode(enum QPageLayout::Mode)
extern "C"
void C_ZN11QPageLayout7setModeENS_4ModeE(void *this_, QPageLayout::Mode mode) {
  ((QPageLayout*)this_)->setMode(mode);
}
// /usr/include/qt/QtGui/qpagelayout.h:98
// QPageLayout::Mode mode()
extern "C"
void C_ZNK11QPageLayout4modeEv(void *this_) {
  /*return*/ ((QPageLayout*)this_)->mode();
}
// /usr/include/qt/QtGui/qpagelayout.h:100
// void setPageSize(const class QPageSize &, const class QMarginsF &)
extern "C"
void C_ZN11QPageLayout11setPageSizeERK9QPageSizeRK9QMarginsF(void *this_, const QPageSize & pageSize, const QMarginsF & minMargins) {
  ((QPageLayout*)this_)->setPageSize(pageSize, minMargins);
}
// /usr/include/qt/QtGui/qpagelayout.h:102
// QPageSize pageSize()
extern "C"
void C_ZNK11QPageLayout8pageSizeEv(void *this_) {
  /*return*/ ((QPageLayout*)this_)->pageSize();
}
// /usr/include/qt/QtGui/qpagelayout.h:104
// void setOrientation(enum QPageLayout::Orientation)
extern "C"
void C_ZN11QPageLayout14setOrientationENS_11OrientationE(void *this_, QPageLayout::Orientation orientation) {
  ((QPageLayout*)this_)->setOrientation(orientation);
}
// /usr/include/qt/QtGui/qpagelayout.h:105
// QPageLayout::Orientation orientation()
extern "C"
void C_ZNK11QPageLayout11orientationEv(void *this_) {
  /*return*/ ((QPageLayout*)this_)->orientation();
}
// /usr/include/qt/QtGui/qpagelayout.h:107
// void setUnits(enum QPageLayout::Unit)
extern "C"
void C_ZN11QPageLayout8setUnitsENS_4UnitE(void *this_, QPageLayout::Unit units) {
  ((QPageLayout*)this_)->setUnits(units);
}
// /usr/include/qt/QtGui/qpagelayout.h:108
// QPageLayout::Unit units()
extern "C"
void C_ZNK11QPageLayout5unitsEv(void *this_) {
  /*return*/ ((QPageLayout*)this_)->units();
}
// /usr/include/qt/QtGui/qpagelayout.h:110
// bool setMargins(const class QMarginsF &)
extern "C"
void C_ZN11QPageLayout10setMarginsERK9QMarginsF(void *this_, const QMarginsF & margins) {
  /*return*/ ((QPageLayout*)this_)->setMargins(margins);
}
// /usr/include/qt/QtGui/qpagelayout.h:111
// bool setLeftMargin(qreal)
extern "C"
void C_ZN11QPageLayout13setLeftMarginEd(void *this_, qreal leftMargin) {
  /*return*/ ((QPageLayout*)this_)->setLeftMargin(leftMargin);
}
// /usr/include/qt/QtGui/qpagelayout.h:112
// bool setRightMargin(qreal)
extern "C"
void C_ZN11QPageLayout14setRightMarginEd(void *this_, qreal rightMargin) {
  /*return*/ ((QPageLayout*)this_)->setRightMargin(rightMargin);
}
// /usr/include/qt/QtGui/qpagelayout.h:113
// bool setTopMargin(qreal)
extern "C"
void C_ZN11QPageLayout12setTopMarginEd(void *this_, qreal topMargin) {
  /*return*/ ((QPageLayout*)this_)->setTopMargin(topMargin);
}
// /usr/include/qt/QtGui/qpagelayout.h:114
// bool setBottomMargin(qreal)
extern "C"
void C_ZN11QPageLayout15setBottomMarginEd(void *this_, qreal bottomMargin) {
  /*return*/ ((QPageLayout*)this_)->setBottomMargin(bottomMargin);
}
// /usr/include/qt/QtGui/qpagelayout.h:116
// QMarginsF margins()
extern "C"
void C_ZNK11QPageLayout7marginsEv(void *this_) {
  /*return*/ ((QPageLayout*)this_)->margins();
}
// /usr/include/qt/QtGui/qpagelayout.h:117
// QMarginsF margins(enum QPageLayout::Unit)
extern "C"
void C_ZNK11QPageLayout7marginsENS_4UnitE(void *this_, QPageLayout::Unit units) {
  /*return*/ ((QPageLayout*)this_)->margins(units);
}
// /usr/include/qt/QtGui/qpagelayout.h:118
// QMargins marginsPoints()
extern "C"
void C_ZNK11QPageLayout13marginsPointsEv(void *this_) {
  /*return*/ ((QPageLayout*)this_)->marginsPoints();
}
// /usr/include/qt/QtGui/qpagelayout.h:119
// QMargins marginsPixels(int)
extern "C"
void C_ZNK11QPageLayout13marginsPixelsEi(void *this_, int resolution) {
  /*return*/ ((QPageLayout*)this_)->marginsPixels(resolution);
}
// /usr/include/qt/QtGui/qpagelayout.h:121
// void setMinimumMargins(const class QMarginsF &)
extern "C"
void C_ZN11QPageLayout17setMinimumMarginsERK9QMarginsF(void *this_, const QMarginsF & minMargins) {
  ((QPageLayout*)this_)->setMinimumMargins(minMargins);
}
// /usr/include/qt/QtGui/qpagelayout.h:122
// QMarginsF minimumMargins()
extern "C"
void C_ZNK11QPageLayout14minimumMarginsEv(void *this_) {
  /*return*/ ((QPageLayout*)this_)->minimumMargins();
}
// /usr/include/qt/QtGui/qpagelayout.h:123
// QMarginsF maximumMargins()
extern "C"
void C_ZNK11QPageLayout14maximumMarginsEv(void *this_) {
  /*return*/ ((QPageLayout*)this_)->maximumMargins();
}
// /usr/include/qt/QtGui/qpagelayout.h:125
// QRectF fullRect()
extern "C"
void C_ZNK11QPageLayout8fullRectEv(void *this_) {
  /*return*/ ((QPageLayout*)this_)->fullRect();
}
// /usr/include/qt/QtGui/qpagelayout.h:126
// QRectF fullRect(enum QPageLayout::Unit)
extern "C"
void C_ZNK11QPageLayout8fullRectENS_4UnitE(void *this_, QPageLayout::Unit units) {
  /*return*/ ((QPageLayout*)this_)->fullRect(units);
}
// /usr/include/qt/QtGui/qpagelayout.h:127
// QRect fullRectPoints()
extern "C"
void C_ZNK11QPageLayout14fullRectPointsEv(void *this_) {
  /*return*/ ((QPageLayout*)this_)->fullRectPoints();
}
// /usr/include/qt/QtGui/qpagelayout.h:128
// QRect fullRectPixels(int)
extern "C"
void C_ZNK11QPageLayout14fullRectPixelsEi(void *this_, int resolution) {
  /*return*/ ((QPageLayout*)this_)->fullRectPixels(resolution);
}
// /usr/include/qt/QtGui/qpagelayout.h:130
// QRectF paintRect()
extern "C"
void C_ZNK11QPageLayout9paintRectEv(void *this_) {
  /*return*/ ((QPageLayout*)this_)->paintRect();
}
// /usr/include/qt/QtGui/qpagelayout.h:131
// QRectF paintRect(enum QPageLayout::Unit)
extern "C"
void C_ZNK11QPageLayout9paintRectENS_4UnitE(void *this_, QPageLayout::Unit units) {
  /*return*/ ((QPageLayout*)this_)->paintRect(units);
}
// /usr/include/qt/QtGui/qpagelayout.h:132
// QRect paintRectPoints()
extern "C"
void C_ZNK11QPageLayout15paintRectPointsEv(void *this_) {
  /*return*/ ((QPageLayout*)this_)->paintRectPoints();
}
// /usr/include/qt/QtGui/qpagelayout.h:133
// QRect paintRectPixels(int)
extern "C"
void C_ZNK11QPageLayout15paintRectPixelsEi(void *this_, int resolution) {
  /*return*/ ((QPageLayout*)this_)->paintRectPixels(resolution);
}