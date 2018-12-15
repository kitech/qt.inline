//  header block begin

// since 0x040400
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsgridlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsGridLayout is pure virtual: false
// QGraphicsGridLayout has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsGridLayout_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsGridLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsGridLayout_t qt_meta_stringdata_MyQGraphicsGridLayout = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQGraphicsGridLayout"
  },
  "MyQGraphicsGridLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsGridLayout[] = {
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
class Q_DECL_EXPORT MyQGraphicsGridLayout : public QGraphicsGridLayout {
public:
  virtual ~MyQGraphicsGridLayout() {}
// void QGraphicsGridLayout(QGraphicsLayoutItem *)
MyQGraphicsGridLayout(QGraphicsLayoutItem * parent) : QGraphicsGridLayout(parent) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:57
// [-2] void QGraphicsGridLayout(QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QGraphicsGridLayoutC2EP19QGraphicsLayoutItem(QGraphicsLayoutItem * parent) {
  return  new QGraphicsGridLayout(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:58
// [-2] void ~QGraphicsGridLayout()
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayoutD2Ev(void *this_) {
  delete (QGraphicsGridLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:60
// [-2] void addItem(QGraphicsLayoutItem *, int, int, int, int, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout7addItemEP19QGraphicsLayoutItemiiii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QGraphicsLayoutItem * item, int row, int column, int rowSpan, int columnSpan, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsGridLayout*)this_)->addItem(item, row, column, rowSpan, columnSpan, alignment);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:62
// [-2] void addItem(QGraphicsLayoutItem *, int, int, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout7addItemEP19QGraphicsLayoutItemii6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QGraphicsLayoutItem * item, int row, int column, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsGridLayout*)this_)->addItem(item, row, column, alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:64
// [-2] void setHorizontalSpacing(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout20setHorizontalSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsGridLayout*)this_)->setHorizontalSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:65
// [8] qreal horizontalSpacing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout17horizontalSpacingEv(void *this_) {
  return (qreal)((QGraphicsGridLayout*)this_)->horizontalSpacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:66
// [-2] void setVerticalSpacing(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout18setVerticalSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsGridLayout*)this_)->setVerticalSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:67
// [8] qreal verticalSpacing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout15verticalSpacingEv(void *this_) {
  return (qreal)((QGraphicsGridLayout*)this_)->verticalSpacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:68
// [-2] void setSpacing(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout10setSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsGridLayout*)this_)->setSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:70
// [-2] void setRowSpacing(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout13setRowSpacingEid(void *this_, int row, qreal spacing) {
  ((QGraphicsGridLayout*)this_)->setRowSpacing(row, spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:71
// [8] qreal rowSpacing(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout10rowSpacingEi(void *this_, int row) {
  return (qreal)((QGraphicsGridLayout*)this_)->rowSpacing(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:72
// [-2] void setColumnSpacing(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout16setColumnSpacingEid(void *this_, int column, qreal spacing) {
  ((QGraphicsGridLayout*)this_)->setColumnSpacing(column, spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:73
// [8] qreal columnSpacing(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout13columnSpacingEi(void *this_, int column) {
  return (qreal)((QGraphicsGridLayout*)this_)->columnSpacing(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:75
// [-2] void setRowStretchFactor(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout19setRowStretchFactorEii(void *this_, int row, int stretch) {
  ((QGraphicsGridLayout*)this_)->setRowStretchFactor(row, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:76
// [4] int rowStretchFactor(int)
extern "C" Q_DECL_EXPORT
int C_ZNK19QGraphicsGridLayout16rowStretchFactorEi(void *this_, int row) {
  return (int)((QGraphicsGridLayout*)this_)->rowStretchFactor(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:77
// [-2] void setColumnStretchFactor(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout22setColumnStretchFactorEii(void *this_, int column, int stretch) {
  ((QGraphicsGridLayout*)this_)->setColumnStretchFactor(column, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:78
// [4] int columnStretchFactor(int)
extern "C" Q_DECL_EXPORT
int C_ZNK19QGraphicsGridLayout19columnStretchFactorEi(void *this_, int column) {
  return (int)((QGraphicsGridLayout*)this_)->columnStretchFactor(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:80
// [-2] void setRowMinimumHeight(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout19setRowMinimumHeightEid(void *this_, int row, qreal height) {
  ((QGraphicsGridLayout*)this_)->setRowMinimumHeight(row, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:81
// [8] qreal rowMinimumHeight(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout16rowMinimumHeightEi(void *this_, int row) {
  return (qreal)((QGraphicsGridLayout*)this_)->rowMinimumHeight(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:82
// [-2] void setRowPreferredHeight(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout21setRowPreferredHeightEid(void *this_, int row, qreal height) {
  ((QGraphicsGridLayout*)this_)->setRowPreferredHeight(row, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:83
// [8] qreal rowPreferredHeight(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout18rowPreferredHeightEi(void *this_, int row) {
  return (qreal)((QGraphicsGridLayout*)this_)->rowPreferredHeight(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:84
// [-2] void setRowMaximumHeight(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout19setRowMaximumHeightEid(void *this_, int row, qreal height) {
  ((QGraphicsGridLayout*)this_)->setRowMaximumHeight(row, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:85
// [8] qreal rowMaximumHeight(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout16rowMaximumHeightEi(void *this_, int row) {
  return (qreal)((QGraphicsGridLayout*)this_)->rowMaximumHeight(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:86
// [-2] void setRowFixedHeight(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout17setRowFixedHeightEid(void *this_, int row, qreal height) {
  ((QGraphicsGridLayout*)this_)->setRowFixedHeight(row, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:88
// [-2] void setColumnMinimumWidth(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout21setColumnMinimumWidthEid(void *this_, int column, qreal width) {
  ((QGraphicsGridLayout*)this_)->setColumnMinimumWidth(column, width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:89
// [8] qreal columnMinimumWidth(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout18columnMinimumWidthEi(void *this_, int column) {
  return (qreal)((QGraphicsGridLayout*)this_)->columnMinimumWidth(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:90
// [-2] void setColumnPreferredWidth(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout23setColumnPreferredWidthEid(void *this_, int column, qreal width) {
  ((QGraphicsGridLayout*)this_)->setColumnPreferredWidth(column, width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:91
// [8] qreal columnPreferredWidth(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout20columnPreferredWidthEi(void *this_, int column) {
  return (qreal)((QGraphicsGridLayout*)this_)->columnPreferredWidth(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:92
// [-2] void setColumnMaximumWidth(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout21setColumnMaximumWidthEid(void *this_, int column, qreal width) {
  ((QGraphicsGridLayout*)this_)->setColumnMaximumWidth(column, width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:93
// [8] qreal columnMaximumWidth(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsGridLayout18columnMaximumWidthEi(void *this_, int column) {
  return (qreal)((QGraphicsGridLayout*)this_)->columnMaximumWidth(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:94
// [-2] void setColumnFixedWidth(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout19setColumnFixedWidthEid(void *this_, int column, qreal width) {
  ((QGraphicsGridLayout*)this_)->setColumnFixedWidth(column, width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:96
// [-2] void setRowAlignment(int, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout15setRowAlignmentEi6QFlagsIN2Qt13AlignmentFlagEE(void *this_, int row, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsGridLayout*)this_)->setRowAlignment(row, alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:97
// [4] Qt::Alignment rowAlignment(int)
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK19QGraphicsGridLayout12rowAlignmentEi(void *this_, int row) {
  return (Qt::Alignment)((QGraphicsGridLayout*)this_)->rowAlignment(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:98
// [-2] void setColumnAlignment(int, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout18setColumnAlignmentEi6QFlagsIN2Qt13AlignmentFlagEE(void *this_, int column, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsGridLayout*)this_)->setColumnAlignment(column, alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:99
// [4] Qt::Alignment columnAlignment(int)
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK19QGraphicsGridLayout15columnAlignmentEi(void *this_, int column) {
  return (Qt::Alignment)((QGraphicsGridLayout*)this_)->columnAlignment(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:101
// [-2] void setAlignment(QGraphicsLayoutItem *, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout12setAlignmentEP19QGraphicsLayoutItem6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QGraphicsLayoutItem * item, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsGridLayout*)this_)->setAlignment(item, alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:102
// [4] Qt::Alignment alignment(QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK19QGraphicsGridLayout9alignmentEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  return (Qt::Alignment)((QGraphicsGridLayout*)this_)->alignment(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:104
// [4] int rowCount()
extern "C" Q_DECL_EXPORT
int C_ZNK19QGraphicsGridLayout8rowCountEv(void *this_) {
  return (int)((QGraphicsGridLayout*)this_)->rowCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:105
// [4] int columnCount()
extern "C" Q_DECL_EXPORT
int C_ZNK19QGraphicsGridLayout11columnCountEv(void *this_) {
  return (int)((QGraphicsGridLayout*)this_)->columnCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:107
// [8] QGraphicsLayoutItem * itemAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsGridLayout6itemAtEii(void *this_, int row, int column) {
  return (void*)((QGraphicsGridLayout*)this_)->itemAt(row, column);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:110
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK19QGraphicsGridLayout5countEv(void *this_) {
  return (int)((QGraphicsGridLayout*)this_)->count();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:111
// [8] QGraphicsLayoutItem * itemAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsGridLayout6itemAtEi(void *this_, int index) {
  return (void*)((QGraphicsGridLayout*)this_)->itemAt(index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:112
// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout8removeAtEi(void *this_, int index) {
  ((QGraphicsGridLayout*)this_)->removeAt(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:113
// [-2] void removeItem(QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout10removeItemEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  ((QGraphicsGridLayout*)this_)->removeItem(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:115
// [-2] void invalidate()
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout10invalidateEv(void *this_) {
  ((QGraphicsGridLayout*)this_)->invalidate();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:118
// [-2] void setGeometry(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsGridLayout11setGeometryERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsGridLayout*)this_)->setGeometry(*rect);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsgridlayout.h:119
// [16] QSizeF sizeHint(Qt::SizeHint, const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsGridLayout8sizeHintEN2Qt8SizeHintERK6QSizeF(void *this_, Qt::SizeHint which, QSizeF* constraint) {
  auto rv = ((QGraphicsGridLayout*)this_)->sizeHint(which, *constraint);
return new QSizeF(rv);
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
