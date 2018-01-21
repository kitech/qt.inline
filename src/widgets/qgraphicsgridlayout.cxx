//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h
#include <qgraphicsgridlayout.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:56
// void QGraphicsGridLayout(class QGraphicsLayoutItem *)
extern "C"
void* C_ZN19QGraphicsGridLayoutC1EP19QGraphicsLayoutItem(QGraphicsLayoutItem * parent) {
  return new QGraphicsGridLayout(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:57
// void ~QGraphicsGridLayout()
extern "C"
void C_ZN19QGraphicsGridLayoutD1Ev(void *this_) {
  delete (QGraphicsGridLayout*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:59
// void addItem(class QGraphicsLayoutItem *, int, int, int, int, Qt::Alignment)
extern "C"
void C_ZN19QGraphicsGridLayout7addItemEP19QGraphicsLayoutItemiiii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QGraphicsLayoutItem * item, int row, int column, int rowSpan, int columnSpan, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsGridLayout*)this_)->addItem(item, row, column, rowSpan, columnSpan, alignment);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:61
// void addItem(class QGraphicsLayoutItem *, int, int, Qt::Alignment)
extern "C"
void C_ZN19QGraphicsGridLayout7addItemEP19QGraphicsLayoutItemii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QGraphicsLayoutItem * item, int row, int column, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsGridLayout*)this_)->addItem(item, row, column, alignment);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:63
// void setHorizontalSpacing(qreal)
extern "C"
void C_ZN19QGraphicsGridLayout20setHorizontalSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsGridLayout*)this_)->setHorizontalSpacing(spacing);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:64
// qreal horizontalSpacing()
extern "C"
void C_ZNK19QGraphicsGridLayout17horizontalSpacingEv(void *this_) {
  /*return*/ ((QGraphicsGridLayout*)this_)->horizontalSpacing();
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:65
// void setVerticalSpacing(qreal)
extern "C"
void C_ZN19QGraphicsGridLayout18setVerticalSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsGridLayout*)this_)->setVerticalSpacing(spacing);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:66
// qreal verticalSpacing()
extern "C"
void C_ZNK19QGraphicsGridLayout15verticalSpacingEv(void *this_) {
  /*return*/ ((QGraphicsGridLayout*)this_)->verticalSpacing();
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:67
// void setSpacing(qreal)
extern "C"
void C_ZN19QGraphicsGridLayout10setSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsGridLayout*)this_)->setSpacing(spacing);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:69
// void setRowSpacing(int, qreal)
extern "C"
void C_ZN19QGraphicsGridLayout13setRowSpacingEid(void *this_, int row, qreal spacing) {
  ((QGraphicsGridLayout*)this_)->setRowSpacing(row, spacing);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:70
// qreal rowSpacing(int)
extern "C"
void C_ZNK19QGraphicsGridLayout10rowSpacingEi(void *this_, int row) {
  /*return*/ ((QGraphicsGridLayout*)this_)->rowSpacing(row);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:71
// void setColumnSpacing(int, qreal)
extern "C"
void C_ZN19QGraphicsGridLayout16setColumnSpacingEid(void *this_, int column, qreal spacing) {
  ((QGraphicsGridLayout*)this_)->setColumnSpacing(column, spacing);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:72
// qreal columnSpacing(int)
extern "C"
void C_ZNK19QGraphicsGridLayout13columnSpacingEi(void *this_, int column) {
  /*return*/ ((QGraphicsGridLayout*)this_)->columnSpacing(column);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:74
// void setRowStretchFactor(int, int)
extern "C"
void C_ZN19QGraphicsGridLayout19setRowStretchFactorEii(void *this_, int row, int stretch) {
  ((QGraphicsGridLayout*)this_)->setRowStretchFactor(row, stretch);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:75
// int rowStretchFactor(int)
extern "C"
void C_ZNK19QGraphicsGridLayout16rowStretchFactorEi(void *this_, int row) {
  /*return*/ ((QGraphicsGridLayout*)this_)->rowStretchFactor(row);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:76
// void setColumnStretchFactor(int, int)
extern "C"
void C_ZN19QGraphicsGridLayout22setColumnStretchFactorEii(void *this_, int column, int stretch) {
  ((QGraphicsGridLayout*)this_)->setColumnStretchFactor(column, stretch);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:77
// int columnStretchFactor(int)
extern "C"
void C_ZNK19QGraphicsGridLayout19columnStretchFactorEi(void *this_, int column) {
  /*return*/ ((QGraphicsGridLayout*)this_)->columnStretchFactor(column);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:79
// void setRowMinimumHeight(int, qreal)
extern "C"
void C_ZN19QGraphicsGridLayout19setRowMinimumHeightEid(void *this_, int row, qreal height) {
  ((QGraphicsGridLayout*)this_)->setRowMinimumHeight(row, height);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:80
// qreal rowMinimumHeight(int)
extern "C"
void C_ZNK19QGraphicsGridLayout16rowMinimumHeightEi(void *this_, int row) {
  /*return*/ ((QGraphicsGridLayout*)this_)->rowMinimumHeight(row);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:81
// void setRowPreferredHeight(int, qreal)
extern "C"
void C_ZN19QGraphicsGridLayout21setRowPreferredHeightEid(void *this_, int row, qreal height) {
  ((QGraphicsGridLayout*)this_)->setRowPreferredHeight(row, height);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:82
// qreal rowPreferredHeight(int)
extern "C"
void C_ZNK19QGraphicsGridLayout18rowPreferredHeightEi(void *this_, int row) {
  /*return*/ ((QGraphicsGridLayout*)this_)->rowPreferredHeight(row);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:83
// void setRowMaximumHeight(int, qreal)
extern "C"
void C_ZN19QGraphicsGridLayout19setRowMaximumHeightEid(void *this_, int row, qreal height) {
  ((QGraphicsGridLayout*)this_)->setRowMaximumHeight(row, height);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:84
// qreal rowMaximumHeight(int)
extern "C"
void C_ZNK19QGraphicsGridLayout16rowMaximumHeightEi(void *this_, int row) {
  /*return*/ ((QGraphicsGridLayout*)this_)->rowMaximumHeight(row);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:85
// void setRowFixedHeight(int, qreal)
extern "C"
void C_ZN19QGraphicsGridLayout17setRowFixedHeightEid(void *this_, int row, qreal height) {
  ((QGraphicsGridLayout*)this_)->setRowFixedHeight(row, height);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:87
// void setColumnMinimumWidth(int, qreal)
extern "C"
void C_ZN19QGraphicsGridLayout21setColumnMinimumWidthEid(void *this_, int column, qreal width) {
  ((QGraphicsGridLayout*)this_)->setColumnMinimumWidth(column, width);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:88
// qreal columnMinimumWidth(int)
extern "C"
void C_ZNK19QGraphicsGridLayout18columnMinimumWidthEi(void *this_, int column) {
  /*return*/ ((QGraphicsGridLayout*)this_)->columnMinimumWidth(column);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:89
// void setColumnPreferredWidth(int, qreal)
extern "C"
void C_ZN19QGraphicsGridLayout23setColumnPreferredWidthEid(void *this_, int column, qreal width) {
  ((QGraphicsGridLayout*)this_)->setColumnPreferredWidth(column, width);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:90
// qreal columnPreferredWidth(int)
extern "C"
void C_ZNK19QGraphicsGridLayout20columnPreferredWidthEi(void *this_, int column) {
  /*return*/ ((QGraphicsGridLayout*)this_)->columnPreferredWidth(column);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:91
// void setColumnMaximumWidth(int, qreal)
extern "C"
void C_ZN19QGraphicsGridLayout21setColumnMaximumWidthEid(void *this_, int column, qreal width) {
  ((QGraphicsGridLayout*)this_)->setColumnMaximumWidth(column, width);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:92
// qreal columnMaximumWidth(int)
extern "C"
void C_ZNK19QGraphicsGridLayout18columnMaximumWidthEi(void *this_, int column) {
  /*return*/ ((QGraphicsGridLayout*)this_)->columnMaximumWidth(column);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:93
// void setColumnFixedWidth(int, qreal)
extern "C"
void C_ZN19QGraphicsGridLayout19setColumnFixedWidthEid(void *this_, int column, qreal width) {
  ((QGraphicsGridLayout*)this_)->setColumnFixedWidth(column, width);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:95
// void setRowAlignment(int, Qt::Alignment)
extern "C"
void C_ZN19QGraphicsGridLayout15setRowAlignmentEi6QFlagsIN2Qt13AlignmentFlagEE(void *this_, int row, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsGridLayout*)this_)->setRowAlignment(row, alignment);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:96
// Qt::Alignment rowAlignment(int)
extern "C"
void C_ZNK19QGraphicsGridLayout12rowAlignmentEi(void *this_, int row) {
  /*return*/ ((QGraphicsGridLayout*)this_)->rowAlignment(row);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:97
// void setColumnAlignment(int, Qt::Alignment)
extern "C"
void C_ZN19QGraphicsGridLayout18setColumnAlignmentEi6QFlagsIN2Qt13AlignmentFlagEE(void *this_, int column, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsGridLayout*)this_)->setColumnAlignment(column, alignment);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:98
// Qt::Alignment columnAlignment(int)
extern "C"
void C_ZNK19QGraphicsGridLayout15columnAlignmentEi(void *this_, int column) {
  /*return*/ ((QGraphicsGridLayout*)this_)->columnAlignment(column);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:100
// void setAlignment(class QGraphicsLayoutItem *, Qt::Alignment)
extern "C"
void C_ZN19QGraphicsGridLayout12setAlignmentEP19QGraphicsLayoutItem6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QGraphicsLayoutItem * item, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsGridLayout*)this_)->setAlignment(item, alignment);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:101
// Qt::Alignment alignment(class QGraphicsLayoutItem *)
extern "C"
void C_ZNK19QGraphicsGridLayout9alignmentEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  /*return*/ ((QGraphicsGridLayout*)this_)->alignment(item);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:103
// int rowCount()
extern "C"
void C_ZNK19QGraphicsGridLayout8rowCountEv(void *this_) {
  /*return*/ ((QGraphicsGridLayout*)this_)->rowCount();
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:104
// int columnCount()
extern "C"
void C_ZNK19QGraphicsGridLayout11columnCountEv(void *this_) {
  /*return*/ ((QGraphicsGridLayout*)this_)->columnCount();
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:106
// QGraphicsLayoutItem * itemAt(int, int)
extern "C"
void C_ZNK19QGraphicsGridLayout6itemAtEii(void *this_, int row, int column) {
  /*return*/ ((QGraphicsGridLayout*)this_)->itemAt(row, column);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:109
// int count()
extern "C"
void C_ZNK19QGraphicsGridLayout5countEv(void *this_) {
  /*return*/ ((QGraphicsGridLayout*)this_)->count();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:110
// QGraphicsLayoutItem * itemAt(int)
extern "C"
void C_ZNK19QGraphicsGridLayout6itemAtEi(void *this_, int index) {
  /*return*/ ((QGraphicsGridLayout*)this_)->itemAt(index);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:111
// void removeAt(int)
extern "C"
void C_ZN19QGraphicsGridLayout8removeAtEi(void *this_, int index) {
  ((QGraphicsGridLayout*)this_)->removeAt(index);
}
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:112
// void removeItem(class QGraphicsLayoutItem *)
extern "C"
void C_ZN19QGraphicsGridLayout10removeItemEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  ((QGraphicsGridLayout*)this_)->removeItem(item);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:114
// void invalidate()
extern "C"
void C_ZN19QGraphicsGridLayout10invalidateEv(void *this_) {
  ((QGraphicsGridLayout*)this_)->invalidate();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:117
// void setGeometry(const class QRectF &)
extern "C"
void C_ZN19QGraphicsGridLayout11setGeometryERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsGridLayout*)this_)->setGeometry(rect);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:118
// QSizeF sizeHint(Qt::SizeHint, const class QSizeF &)
extern "C"
void C_ZNK19QGraphicsGridLayout8sizeHintEN2Qt8SizeHintERK6QSizeF(void *this_, Qt::SizeHint which, const QSizeF & constraint) {
  /*return*/ ((QGraphicsGridLayout*)this_)->sizeHint(which, constraint);
}
//  main block end
