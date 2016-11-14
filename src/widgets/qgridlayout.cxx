// /usr/include/qt/QtWidgets/qgridlayout.h
#include <qgridlayout.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qgridlayout.h:57
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QGridLayout10metaObjectEv(void *this_) {
  /*return*/ ((QGridLayout*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgridlayout.h:63
// void QGridLayout(class QWidget *)
extern "C"
void* C_ZN11QGridLayoutC1EP7QWidget(QWidget * parent) {
  return new QGridLayout(parent);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:64
// void QGridLayout()
extern "C"
void* C_ZN11QGridLayoutC1Ev() {
  return new QGridLayout();
}
// virtual
// /usr/include/qt/QtWidgets/qgridlayout.h:66
// void ~QGridLayout()
extern "C"
void C_ZN11QGridLayoutD1Ev(void *this_) {
  delete (QGridLayout*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qgridlayout.h:68
// QSize sizeHint()
extern "C"
void C_ZNK11QGridLayout8sizeHintEv(void *this_) {
  /*return*/ ((QGridLayout*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qgridlayout.h:69
// QSize minimumSize()
extern "C"
void C_ZNK11QGridLayout11minimumSizeEv(void *this_) {
  /*return*/ ((QGridLayout*)this_)->minimumSize();
}
// virtual
// /usr/include/qt/QtWidgets/qgridlayout.h:70
// QSize maximumSize()
extern "C"
void C_ZNK11QGridLayout11maximumSizeEv(void *this_) {
  /*return*/ ((QGridLayout*)this_)->maximumSize();
}
// /usr/include/qt/QtWidgets/qgridlayout.h:72
// void setHorizontalSpacing(int)
extern "C"
void C_ZN11QGridLayout20setHorizontalSpacingEi(void *this_, int spacing) {
  ((QGridLayout*)this_)->setHorizontalSpacing(spacing);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:73
// int horizontalSpacing()
extern "C"
void C_ZNK11QGridLayout17horizontalSpacingEv(void *this_) {
  /*return*/ ((QGridLayout*)this_)->horizontalSpacing();
}
// /usr/include/qt/QtWidgets/qgridlayout.h:74
// void setVerticalSpacing(int)
extern "C"
void C_ZN11QGridLayout18setVerticalSpacingEi(void *this_, int spacing) {
  ((QGridLayout*)this_)->setVerticalSpacing(spacing);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:75
// int verticalSpacing()
extern "C"
void C_ZNK11QGridLayout15verticalSpacingEv(void *this_) {
  /*return*/ ((QGridLayout*)this_)->verticalSpacing();
}
// /usr/include/qt/QtWidgets/qgridlayout.h:76
// void setSpacing(int)
extern "C"
void C_ZN11QGridLayout10setSpacingEi(void *this_, int spacing) {
  ((QGridLayout*)this_)->setSpacing(spacing);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:77
// int spacing()
extern "C"
void C_ZNK11QGridLayout7spacingEv(void *this_) {
  /*return*/ ((QGridLayout*)this_)->spacing();
}
// /usr/include/qt/QtWidgets/qgridlayout.h:79
// void setRowStretch(int, int)
extern "C"
void C_ZN11QGridLayout13setRowStretchEii(void *this_, int row, int stretch) {
  ((QGridLayout*)this_)->setRowStretch(row, stretch);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:80
// void setColumnStretch(int, int)
extern "C"
void C_ZN11QGridLayout16setColumnStretchEii(void *this_, int column, int stretch) {
  ((QGridLayout*)this_)->setColumnStretch(column, stretch);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:81
// int rowStretch(int)
extern "C"
void C_ZNK11QGridLayout10rowStretchEi(void *this_, int row) {
  /*return*/ ((QGridLayout*)this_)->rowStretch(row);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:82
// int columnStretch(int)
extern "C"
void C_ZNK11QGridLayout13columnStretchEi(void *this_, int column) {
  /*return*/ ((QGridLayout*)this_)->columnStretch(column);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:84
// void setRowMinimumHeight(int, int)
extern "C"
void C_ZN11QGridLayout19setRowMinimumHeightEii(void *this_, int row, int minSize) {
  ((QGridLayout*)this_)->setRowMinimumHeight(row, minSize);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:85
// void setColumnMinimumWidth(int, int)
extern "C"
void C_ZN11QGridLayout21setColumnMinimumWidthEii(void *this_, int column, int minSize) {
  ((QGridLayout*)this_)->setColumnMinimumWidth(column, minSize);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:86
// int rowMinimumHeight(int)
extern "C"
void C_ZNK11QGridLayout16rowMinimumHeightEi(void *this_, int row) {
  /*return*/ ((QGridLayout*)this_)->rowMinimumHeight(row);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:87
// int columnMinimumWidth(int)
extern "C"
void C_ZNK11QGridLayout18columnMinimumWidthEi(void *this_, int column) {
  /*return*/ ((QGridLayout*)this_)->columnMinimumWidth(column);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:89
// int columnCount()
extern "C"
void C_ZNK11QGridLayout11columnCountEv(void *this_) {
  /*return*/ ((QGridLayout*)this_)->columnCount();
}
// /usr/include/qt/QtWidgets/qgridlayout.h:90
// int rowCount()
extern "C"
void C_ZNK11QGridLayout8rowCountEv(void *this_) {
  /*return*/ ((QGridLayout*)this_)->rowCount();
}
// /usr/include/qt/QtWidgets/qgridlayout.h:92
// QRect cellRect(int, int)
extern "C"
void C_ZNK11QGridLayout8cellRectEii(void *this_, int row, int column) {
  /*return*/ ((QGridLayout*)this_)->cellRect(row, column);
}
// virtual
// /usr/include/qt/QtWidgets/qgridlayout.h:94
// bool hasHeightForWidth()
extern "C"
void C_ZNK11QGridLayout17hasHeightForWidthEv(void *this_) {
  /*return*/ ((QGridLayout*)this_)->hasHeightForWidth();
}
// virtual
// /usr/include/qt/QtWidgets/qgridlayout.h:95
// int heightForWidth(int)
extern "C"
void C_ZNK11QGridLayout14heightForWidthEi(void *this_, int a0) {
  /*return*/ ((QGridLayout*)this_)->heightForWidth(a0);
}
// virtual
// /usr/include/qt/QtWidgets/qgridlayout.h:96
// int minimumHeightForWidth(int)
extern "C"
void C_ZNK11QGridLayout21minimumHeightForWidthEi(void *this_, int a0) {
  /*return*/ ((QGridLayout*)this_)->minimumHeightForWidth(a0);
}
// virtual
// /usr/include/qt/QtWidgets/qgridlayout.h:98
// Qt::Orientations expandingDirections()
extern "C"
void C_ZNK11QGridLayout19expandingDirectionsEv(void *this_) {
  /*return*/ ((QGridLayout*)this_)->expandingDirections();
}
// virtual
// /usr/include/qt/QtWidgets/qgridlayout.h:99
// void invalidate()
extern "C"
void C_ZN11QGridLayout10invalidateEv(void *this_) {
  ((QGridLayout*)this_)->invalidate();
}
// inline
// /usr/include/qt/QtWidgets/qgridlayout.h:101
// void addWidget(class QWidget *)
extern "C"
void C_ZN11QGridLayout9addWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QGridLayout*)this_)->addWidget(w);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:102
// void addWidget(class QWidget *, int, int, Qt::Alignment)
extern "C"
void C_ZN11QGridLayout9addWidgetEP7QWidgetii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QWidget * a0, int row, int column, Qt::Alignment a3) {
  ((QGridLayout*)this_)->addWidget(a0, row, column, a3);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:103
// void addWidget(class QWidget *, int, int, int, int, Qt::Alignment)
extern "C"
void C_ZN11QGridLayout9addWidgetEP7QWidgetiiii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QWidget * a0, int row, int column, int rowSpan, int columnSpan, Qt::Alignment a5) {
  ((QGridLayout*)this_)->addWidget(a0, row, column, rowSpan, columnSpan, a5);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:104
// void addLayout(class QLayout *, int, int, Qt::Alignment)
extern "C"
void C_ZN11QGridLayout9addLayoutEP7QLayoutii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QLayout * a0, int row, int column, Qt::Alignment a3) {
  ((QGridLayout*)this_)->addLayout(a0, row, column, a3);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:105
// void addLayout(class QLayout *, int, int, int, int, Qt::Alignment)
extern "C"
void C_ZN11QGridLayout9addLayoutEP7QLayoutiiii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QLayout * a0, int row, int column, int rowSpan, int columnSpan, Qt::Alignment a5) {
  ((QGridLayout*)this_)->addLayout(a0, row, column, rowSpan, columnSpan, a5);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:107
// void setOriginCorner(Qt::Corner)
extern "C"
void C_ZN11QGridLayout15setOriginCornerEN2Qt6CornerE(void *this_, Qt::Corner a0) {
  ((QGridLayout*)this_)->setOriginCorner(a0);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:108
// Qt::Corner originCorner()
extern "C"
void C_ZNK11QGridLayout12originCornerEv(void *this_) {
  /*return*/ ((QGridLayout*)this_)->originCorner();
}
// virtual
// /usr/include/qt/QtWidgets/qgridlayout.h:110
// QLayoutItem * itemAt(int)
extern "C"
void C_ZNK11QGridLayout6itemAtEi(void *this_, int index) {
  /*return*/ ((QGridLayout*)this_)->itemAt(index);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:111
// QLayoutItem * itemAtPosition(int, int)
extern "C"
void C_ZNK11QGridLayout14itemAtPositionEii(void *this_, int row, int column) {
  /*return*/ ((QGridLayout*)this_)->itemAtPosition(row, column);
}
// virtual
// /usr/include/qt/QtWidgets/qgridlayout.h:112
// QLayoutItem * takeAt(int)
extern "C"
void C_ZN11QGridLayout6takeAtEi(void *this_, int index) {
  /*return*/ ((QGridLayout*)this_)->takeAt(index);
}
// virtual
// /usr/include/qt/QtWidgets/qgridlayout.h:113
// int count()
extern "C"
void C_ZNK11QGridLayout5countEv(void *this_) {
  /*return*/ ((QGridLayout*)this_)->count();
}
// virtual
// /usr/include/qt/QtWidgets/qgridlayout.h:114
// void setGeometry(const class QRect &)
extern "C"
void C_ZN11QGridLayout11setGeometryERK5QRect(void *this_, const QRect & a0) {
  ((QGridLayout*)this_)->setGeometry(a0);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:116
// void addItem(class QLayoutItem *, int, int, int, int, Qt::Alignment)
extern "C"
void C_ZN11QGridLayout7addItemEP11QLayoutItemiiii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QLayoutItem * item, int row, int column, int rowSpan, int columnSpan, Qt::Alignment a5) {
  ((QGridLayout*)this_)->addItem(item, row, column, rowSpan, columnSpan, a5);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:118
// void setDefaultPositioning(int, Qt::Orientation)
extern "C"
void C_ZN11QGridLayout21setDefaultPositioningEiN2Qt11OrientationE(void *this_, int n, Qt::Orientation orient) {
  ((QGridLayout*)this_)->setDefaultPositioning(n, orient);
}
// /usr/include/qt/QtWidgets/qgridlayout.h:119
// void getItemPosition(int, int *, int *, int *, int *)
extern "C"
void C_ZNK11QGridLayout15getItemPositionEiPiS0_S0_S0_(void *this_, int idx, int * row, int * column, int * rowSpan, int * columnSpan) {
  ((QGridLayout*)this_)->getItemPosition(idx, row, column, rowSpan, columnSpan);
}