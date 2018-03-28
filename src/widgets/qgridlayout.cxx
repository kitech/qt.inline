//  header block begin
// /usr/include/qt/QtWidgets/qgridlayout.h
#ifndef protected
#define protected public
#endif
#include <qgridlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGridLayout is pure virtual: false
// QGridLayout has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGridLayout : public QGridLayout {
public:
  virtual ~MyQGridLayout() {}
// void QGridLayout(QWidget *)
MyQGridLayout(QWidget * parent) : QGridLayout(parent) {}
// void QGridLayout()
MyQGridLayout() : QGridLayout() {}
// Protected virtual Visibility=Default Availability=Available
// void addItem(QLayoutItem *)
  virtual void addItem(QLayoutItem * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"addItem", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGridLayout::addItem(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:123
// [-2] void addItem(QLayoutItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout7addItemEP11QLayoutItem(void *this_, QLayoutItem * arg0) {
  ((QGridLayout*)this_)->QGridLayout::addItem(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGridLayout10metaObjectEv(void *this_) {
  return (void*)((QGridLayout*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:64
// [-2] void QGridLayout(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QGridLayoutC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQGridLayout*)(0);
  return  new MyQGridLayout(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:65
// [-2] void QGridLayout()
extern "C" Q_DECL_EXPORT
void* C_ZN11QGridLayoutC2Ev() {
  auto _nilp = (MyQGridLayout*)(0);
  return  new MyQGridLayout();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:67
// [-2] void ~QGridLayout()
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayoutD2Ev(void *this_) {
  delete (QGridLayout*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:69
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGridLayout8sizeHintEv(void *this_) {
  auto rv = ((QGridLayout*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:70
// [8] QSize minimumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGridLayout11minimumSizeEv(void *this_) {
  auto rv = ((QGridLayout*)this_)->minimumSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:71
// [8] QSize maximumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGridLayout11maximumSizeEv(void *this_) {
  auto rv = ((QGridLayout*)this_)->maximumSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:73
// [-2] void setHorizontalSpacing(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout20setHorizontalSpacingEi(void *this_, int spacing) {
  ((QGridLayout*)this_)->setHorizontalSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:74
// [4] int horizontalSpacing()
extern "C" Q_DECL_EXPORT
int C_ZNK11QGridLayout17horizontalSpacingEv(void *this_) {
  return (int)((QGridLayout*)this_)->horizontalSpacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:75
// [-2] void setVerticalSpacing(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout18setVerticalSpacingEi(void *this_, int spacing) {
  ((QGridLayout*)this_)->setVerticalSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:76
// [4] int verticalSpacing()
extern "C" Q_DECL_EXPORT
int C_ZNK11QGridLayout15verticalSpacingEv(void *this_) {
  return (int)((QGridLayout*)this_)->verticalSpacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:77
// [-2] void setSpacing(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout10setSpacingEi(void *this_, int spacing) {
  ((QGridLayout*)this_)->setSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:78
// [4] int spacing()
extern "C" Q_DECL_EXPORT
int C_ZNK11QGridLayout7spacingEv(void *this_) {
  return (int)((QGridLayout*)this_)->spacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:80
// [-2] void setRowStretch(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout13setRowStretchEii(void *this_, int row, int stretch) {
  ((QGridLayout*)this_)->setRowStretch(row, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:81
// [-2] void setColumnStretch(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout16setColumnStretchEii(void *this_, int column, int stretch) {
  ((QGridLayout*)this_)->setColumnStretch(column, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:82
// [4] int rowStretch(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QGridLayout10rowStretchEi(void *this_, int row) {
  return (int)((QGridLayout*)this_)->rowStretch(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:83
// [4] int columnStretch(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QGridLayout13columnStretchEi(void *this_, int column) {
  return (int)((QGridLayout*)this_)->columnStretch(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:85
// [-2] void setRowMinimumHeight(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout19setRowMinimumHeightEii(void *this_, int row, int minSize) {
  ((QGridLayout*)this_)->setRowMinimumHeight(row, minSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:86
// [-2] void setColumnMinimumWidth(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout21setColumnMinimumWidthEii(void *this_, int column, int minSize) {
  ((QGridLayout*)this_)->setColumnMinimumWidth(column, minSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:87
// [4] int rowMinimumHeight(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QGridLayout16rowMinimumHeightEi(void *this_, int row) {
  return (int)((QGridLayout*)this_)->rowMinimumHeight(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:88
// [4] int columnMinimumWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QGridLayout18columnMinimumWidthEi(void *this_, int column) {
  return (int)((QGridLayout*)this_)->columnMinimumWidth(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:90
// [4] int columnCount()
extern "C" Q_DECL_EXPORT
int C_ZNK11QGridLayout11columnCountEv(void *this_) {
  return (int)((QGridLayout*)this_)->columnCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:91
// [4] int rowCount()
extern "C" Q_DECL_EXPORT
int C_ZNK11QGridLayout8rowCountEv(void *this_) {
  return (int)((QGridLayout*)this_)->rowCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:93
// [16] QRect cellRect(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGridLayout8cellRectEii(void *this_, int row, int column) {
  auto rv = ((QGridLayout*)this_)->cellRect(row, column);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:95
// [1] bool hasHeightForWidth()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QGridLayout17hasHeightForWidthEv(void *this_) {
  return (bool)((QGridLayout*)this_)->hasHeightForWidth();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:96
// [4] int heightForWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QGridLayout14heightForWidthEi(void *this_, int arg0) {
  return (int)((QGridLayout*)this_)->heightForWidth(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:97
// [4] int minimumHeightForWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QGridLayout21minimumHeightForWidthEi(void *this_, int arg0) {
  return (int)((QGridLayout*)this_)->minimumHeightForWidth(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:99
// [4] Qt::Orientations expandingDirections()
extern "C" Q_DECL_EXPORT
Qt::Orientations C_ZNK11QGridLayout19expandingDirectionsEv(void *this_) {
  return (Qt::Orientations)((QGridLayout*)this_)->expandingDirections();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:100
// [-2] void invalidate()
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout10invalidateEv(void *this_) {
  ((QGridLayout*)this_)->invalidate();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:102
// [-2] void addWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout9addWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QGridLayout*)this_)->addWidget(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:103
// [-2] void addWidget(QWidget *, int, int, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout9addWidgetEP7QWidgetii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QWidget * arg0, int row, int column, QFlags<Qt::AlignmentFlag> arg3) {
  ((QGridLayout*)this_)->addWidget(arg0, row, column, arg3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:104
// [-2] void addWidget(QWidget *, int, int, int, int, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout9addWidgetEP7QWidgetiiii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QWidget * arg0, int row, int column, int rowSpan, int columnSpan, QFlags<Qt::AlignmentFlag> arg5) {
  ((QGridLayout*)this_)->addWidget(arg0, row, column, rowSpan, columnSpan, arg5);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:105
// [-2] void addLayout(QLayout *, int, int, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout9addLayoutEP7QLayoutii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QLayout * arg0, int row, int column, QFlags<Qt::AlignmentFlag> arg3) {
  ((QGridLayout*)this_)->addLayout(arg0, row, column, arg3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:106
// [-2] void addLayout(QLayout *, int, int, int, int, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout9addLayoutEP7QLayoutiiii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QLayout * arg0, int row, int column, int rowSpan, int columnSpan, QFlags<Qt::AlignmentFlag> arg5) {
  ((QGridLayout*)this_)->addLayout(arg0, row, column, rowSpan, columnSpan, arg5);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:108
// [-2] void setOriginCorner(Qt::Corner)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout15setOriginCornerEN2Qt6CornerE(void *this_, Qt::Corner arg0) {
  ((QGridLayout*)this_)->setOriginCorner(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:109
// [4] Qt::Corner originCorner()
extern "C" Q_DECL_EXPORT
Qt::Corner C_ZNK11QGridLayout12originCornerEv(void *this_) {
  return (Qt::Corner)((QGridLayout*)this_)->originCorner();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:111
// [8] QLayoutItem * itemAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGridLayout6itemAtEi(void *this_, int index) {
  return (void*)((QGridLayout*)this_)->itemAt(index);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qgridlayout.h:112
// [8] QLayoutItem * itemAtPosition(int, int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGridLayout14itemAtPositionEii(void *this_, int row, int column) {
  return (void*)((QGridLayout*)this_)->itemAtPosition(row, column);
}
#endif // QT_VERSION >= 0x040400

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:113
// [8] QLayoutItem * takeAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QGridLayout6takeAtEi(void *this_, int index) {
  return (void*)((QGridLayout*)this_)->takeAt(index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:114
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK11QGridLayout5countEv(void *this_) {
  return (int)((QGridLayout*)this_)->count();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:115
// [-2] void setGeometry(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout11setGeometryERK5QRect(void *this_, QRect* arg0) {
  ((QGridLayout*)this_)->setGeometry(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:117
// [-2] void addItem(QLayoutItem *, int, int, int, int, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout7addItemEP11QLayoutItemiiii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QLayoutItem * item, int row, int column, int rowSpan, int columnSpan, QFlags<Qt::AlignmentFlag> arg5) {
  ((QGridLayout*)this_)->addItem(item, row, column, rowSpan, columnSpan, arg5);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:119
// [-2] void setDefaultPositioning(int, Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN11QGridLayout21setDefaultPositioningEiN2Qt11OrientationE(void *this_, int n, Qt::Orientation orient) {
  ((QGridLayout*)this_)->setDefaultPositioning(n, orient);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:120
// [-2] void getItemPosition(int, int *, int *, int *, int *)
extern "C" Q_DECL_EXPORT
void C_ZNK11QGridLayout15getItemPositionEiPiS0_S0_S0_(void *this_, int idx, int * row, int * column, int * rowSpan, int * columnSpan) {
  ((QGridLayout*)this_)->getItemPosition(idx, row, column, rowSpan, columnSpan);
}

//  main block end
