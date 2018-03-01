//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h
#ifndef protected
#define protected public
#endif
#include <qgraphicsgridlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsGridLayout is pure virtual: false
// QGraphicsGridLayout has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsGridLayout : public QGraphicsGridLayout {
public:
  virtual ~MyQGraphicsGridLayout() {}
// void QGraphicsGridLayout(class QGraphicsLayoutItem *)
MyQGraphicsGridLayout(QGraphicsLayoutItem * parent) : QGraphicsGridLayout(parent) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:56
// [-2] void QGraphicsGridLayout(class QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QGraphicsGridLayoutC2EP19QGraphicsLayoutItem(QGraphicsLayoutItem * parent) {
  return  new QGraphicsGridLayout(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:57
// [-2] void ~QGraphicsGridLayout()
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayoutD2Ev(void *this_) {
  delete (QGraphicsGridLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:59
// [-2] void addItem(class QGraphicsLayoutItem *, int, int, int, int, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout7addItemEP19QGraphicsLayoutItemiiii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QGraphicsLayoutItem * item, int row, int column, int rowSpan, int columnSpan, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsGridLayout*)this_)->addItem(item, row, column, rowSpan, columnSpan, alignment);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:61
// [-2] void addItem(class QGraphicsLayoutItem *, int, int, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout7addItemEP19QGraphicsLayoutItemii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QGraphicsLayoutItem * item, int row, int column, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsGridLayout*)this_)->addItem(item, row, column, alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:63
// [-2] void setHorizontalSpacing(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout20setHorizontalSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsGridLayout*)this_)->setHorizontalSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:64
// [8] qreal horizontalSpacing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout17horizontalSpacingEv(void *this_) {
  return (qreal)((QGraphicsGridLayout*)this_)->horizontalSpacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:65
// [-2] void setVerticalSpacing(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout18setVerticalSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsGridLayout*)this_)->setVerticalSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:66
// [8] qreal verticalSpacing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout15verticalSpacingEv(void *this_) {
  return (qreal)((QGraphicsGridLayout*)this_)->verticalSpacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:67
// [-2] void setSpacing(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout10setSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsGridLayout*)this_)->setSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:69
// [-2] void setRowSpacing(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout13setRowSpacingEid(void *this_, int row, qreal spacing) {
  ((QGraphicsGridLayout*)this_)->setRowSpacing(row, spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:70
// [8] qreal rowSpacing(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout10rowSpacingEi(void *this_, int row) {
  return (qreal)((QGraphicsGridLayout*)this_)->rowSpacing(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:71
// [-2] void setColumnSpacing(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout16setColumnSpacingEid(void *this_, int column, qreal spacing) {
  ((QGraphicsGridLayout*)this_)->setColumnSpacing(column, spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:72
// [8] qreal columnSpacing(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout13columnSpacingEi(void *this_, int column) {
  return (qreal)((QGraphicsGridLayout*)this_)->columnSpacing(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:74
// [-2] void setRowStretchFactor(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout19setRowStretchFactorEii(void *this_, int row, int stretch) {
  ((QGraphicsGridLayout*)this_)->setRowStretchFactor(row, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:75
// [4] int rowStretchFactor(int)
extern "C" Q_DECL_EXPORT
int C_ZNK19QGraphicsGridLayout16rowStretchFactorEi(void *this_, int row) {
  return (int)((QGraphicsGridLayout*)this_)->rowStretchFactor(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:76
// [-2] void setColumnStretchFactor(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout22setColumnStretchFactorEii(void *this_, int column, int stretch) {
  ((QGraphicsGridLayout*)this_)->setColumnStretchFactor(column, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:77
// [4] int columnStretchFactor(int)
extern "C" Q_DECL_EXPORT
int C_ZNK19QGraphicsGridLayout19columnStretchFactorEi(void *this_, int column) {
  return (int)((QGraphicsGridLayout*)this_)->columnStretchFactor(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:79
// [-2] void setRowMinimumHeight(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout19setRowMinimumHeightEid(void *this_, int row, qreal height) {
  ((QGraphicsGridLayout*)this_)->setRowMinimumHeight(row, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:80
// [8] qreal rowMinimumHeight(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout16rowMinimumHeightEi(void *this_, int row) {
  return (qreal)((QGraphicsGridLayout*)this_)->rowMinimumHeight(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:81
// [-2] void setRowPreferredHeight(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout21setRowPreferredHeightEid(void *this_, int row, qreal height) {
  ((QGraphicsGridLayout*)this_)->setRowPreferredHeight(row, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:82
// [8] qreal rowPreferredHeight(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout18rowPreferredHeightEi(void *this_, int row) {
  return (qreal)((QGraphicsGridLayout*)this_)->rowPreferredHeight(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:83
// [-2] void setRowMaximumHeight(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout19setRowMaximumHeightEid(void *this_, int row, qreal height) {
  ((QGraphicsGridLayout*)this_)->setRowMaximumHeight(row, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:84
// [8] qreal rowMaximumHeight(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout16rowMaximumHeightEi(void *this_, int row) {
  return (qreal)((QGraphicsGridLayout*)this_)->rowMaximumHeight(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:85
// [-2] void setRowFixedHeight(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout17setRowFixedHeightEid(void *this_, int row, qreal height) {
  ((QGraphicsGridLayout*)this_)->setRowFixedHeight(row, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:87
// [-2] void setColumnMinimumWidth(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout21setColumnMinimumWidthEid(void *this_, int column, qreal width) {
  ((QGraphicsGridLayout*)this_)->setColumnMinimumWidth(column, width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:88
// [8] qreal columnMinimumWidth(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout18columnMinimumWidthEi(void *this_, int column) {
  return (qreal)((QGraphicsGridLayout*)this_)->columnMinimumWidth(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:89
// [-2] void setColumnPreferredWidth(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout23setColumnPreferredWidthEid(void *this_, int column, qreal width) {
  ((QGraphicsGridLayout*)this_)->setColumnPreferredWidth(column, width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:90
// [8] qreal columnPreferredWidth(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout20columnPreferredWidthEi(void *this_, int column) {
  return (qreal)((QGraphicsGridLayout*)this_)->columnPreferredWidth(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:91
// [-2] void setColumnMaximumWidth(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout21setColumnMaximumWidthEid(void *this_, int column, qreal width) {
  ((QGraphicsGridLayout*)this_)->setColumnMaximumWidth(column, width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:92
// [8] qreal columnMaximumWidth(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout18columnMaximumWidthEi(void *this_, int column) {
  return (qreal)((QGraphicsGridLayout*)this_)->columnMaximumWidth(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:93
// [-2] void setColumnFixedWidth(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout19setColumnFixedWidthEid(void *this_, int column, qreal width) {
  ((QGraphicsGridLayout*)this_)->setColumnFixedWidth(column, width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:95
// [-2] void setRowAlignment(int, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout15setRowAlignmentEi6QFlagsIN2Qt13AlignmentFlagEE(void *this_, int row, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsGridLayout*)this_)->setRowAlignment(row, alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:96
// [4] Qt::Alignment rowAlignment(int)
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK19QGraphicsGridLayout12rowAlignmentEi(void *this_, int row) {
  return (Qt::Alignment)((QGraphicsGridLayout*)this_)->rowAlignment(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:97
// [-2] void setColumnAlignment(int, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout18setColumnAlignmentEi6QFlagsIN2Qt13AlignmentFlagEE(void *this_, int column, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsGridLayout*)this_)->setColumnAlignment(column, alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:98
// [4] Qt::Alignment columnAlignment(int)
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK19QGraphicsGridLayout15columnAlignmentEi(void *this_, int column) {
  return (Qt::Alignment)((QGraphicsGridLayout*)this_)->columnAlignment(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:100
// [-2] void setAlignment(class QGraphicsLayoutItem *, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout12setAlignmentEP19QGraphicsLayoutItem6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QGraphicsLayoutItem * item, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsGridLayout*)this_)->setAlignment(item, alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:101
// [4] Qt::Alignment alignment(class QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK19QGraphicsGridLayout9alignmentEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  return (Qt::Alignment)((QGraphicsGridLayout*)this_)->alignment(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:103
// [4] int rowCount()
extern "C" Q_DECL_EXPORT
int C_ZNK19QGraphicsGridLayout8rowCountEv(void *this_) {
  return (int)((QGraphicsGridLayout*)this_)->rowCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:104
// [4] int columnCount()
extern "C" Q_DECL_EXPORT
int C_ZNK19QGraphicsGridLayout11columnCountEv(void *this_) {
  return (int)((QGraphicsGridLayout*)this_)->columnCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:106
// [8] QGraphicsLayoutItem * itemAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsGridLayout6itemAtEii(void *this_, int row, int column) {
  return (void*)((QGraphicsGridLayout*)this_)->itemAt(row, column);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:109
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK19QGraphicsGridLayout5countEv(void *this_) {
  return (int)((QGraphicsGridLayout*)this_)->count();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:110
// [8] QGraphicsLayoutItem * itemAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsGridLayout6itemAtEi(void *this_, int index) {
  return (void*)((QGraphicsGridLayout*)this_)->itemAt(index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:111
// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout8removeAtEi(void *this_, int index) {
  ((QGraphicsGridLayout*)this_)->removeAt(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:112
// [-2] void removeItem(class QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout10removeItemEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  ((QGraphicsGridLayout*)this_)->removeItem(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:114
// [-2] void invalidate()
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout10invalidateEv(void *this_) {
  ((QGraphicsGridLayout*)this_)->invalidate();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:117
// [-2] void setGeometry(const class QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout11setGeometryERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsGridLayout*)this_)->setGeometry(*rect);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:118
// [16] QSizeF sizeHint(Qt::SizeHint, const class QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsGridLayout8sizeHintEN2Qt8SizeHintERK6QSizeF(void *this_, Qt::SizeHint which, QSizeF* constraint) {
  auto rv = ((QGraphicsGridLayout*)this_)->sizeHint(which, *constraint);
return new QSizeF(rv);
}

//  main block end
