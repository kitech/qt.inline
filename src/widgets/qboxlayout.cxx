//  header block begin
// /usr/include/qt/QtWidgets/qboxlayout.h
#ifndef protected
#define protected public
#endif
#include <qboxlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QBoxLayout is pure virtual: false
// QBoxLayout has virtual projected: false
//  header block end

//  main block begin

class MyQBoxLayout : public QBoxLayout {
public:
  virtual ~MyQBoxLayout() {}
// void QBoxLayout(enum QBoxLayout::Direction, class QWidget *)
MyQBoxLayout(QBoxLayout::Direction arg0, QWidget * parent) : QBoxLayout(arg0, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:58
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK10QBoxLayout10metaObjectEv(void *this_) {
  return (void*)((QBoxLayout*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:64
// [-2] void QBoxLayout(enum QBoxLayout::Direction, class QWidget *)
extern "C"
void* C_ZN10QBoxLayoutC2ENS_9DirectionEP7QWidget(QBoxLayout::Direction arg0, QWidget * parent) {
  return  new QBoxLayout(arg0, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:66
// [-2] void ~QBoxLayout()
extern "C"
void C_ZN10QBoxLayoutD2Ev(void *this_) {
  delete (QBoxLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:68
// [4] QBoxLayout::Direction direction()
extern "C"
QBoxLayout::Direction C_ZNK10QBoxLayout9directionEv(void *this_) {
  return (QBoxLayout::Direction)((QBoxLayout*)this_)->direction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:69
// [-2] void setDirection(enum QBoxLayout::Direction)
extern "C"
void C_ZN10QBoxLayout12setDirectionENS_9DirectionE(void *this_, QBoxLayout::Direction arg0) {
  ((QBoxLayout*)this_)->setDirection(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:71
// [-2] void addSpacing(int)
extern "C"
void C_ZN10QBoxLayout10addSpacingEi(void *this_, int size) {
  ((QBoxLayout*)this_)->addSpacing(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:72
// [-2] void addStretch(int)
extern "C"
void C_ZN10QBoxLayout10addStretchEi(void *this_, int stretch) {
  ((QBoxLayout*)this_)->addStretch(stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:73
// [-2] void addSpacerItem(class QSpacerItem *)
extern "C"
void C_ZN10QBoxLayout13addSpacerItemEP11QSpacerItem(void *this_, QSpacerItem * spacerItem) {
  ((QBoxLayout*)this_)->addSpacerItem(spacerItem);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:74
// [-2] void addWidget(class QWidget *, int, Qt::Alignment)
extern "C"
void C_ZN10QBoxLayout9addWidgetEP7QWidgeti6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QWidget * arg0, int stretch, QFlags<Qt::AlignmentFlag> alignment) {
  ((QBoxLayout*)this_)->addWidget(arg0, stretch, alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:75
// [-2] void addLayout(class QLayout *, int)
extern "C"
void C_ZN10QBoxLayout9addLayoutEP7QLayouti(void *this_, QLayout * layout, int stretch) {
  ((QBoxLayout*)this_)->addLayout(layout, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:76
// [-2] void addStrut(int)
extern "C"
void C_ZN10QBoxLayout8addStrutEi(void *this_, int arg0) {
  ((QBoxLayout*)this_)->addStrut(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:77
// [-2] void addItem(class QLayoutItem *)
extern "C"
void C_ZN10QBoxLayout7addItemEP11QLayoutItem(void *this_, QLayoutItem * arg0) {
  ((QBoxLayout*)this_)->addItem(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:79
// [-2] void insertSpacing(int, int)
extern "C"
void C_ZN10QBoxLayout13insertSpacingEii(void *this_, int index, int size) {
  ((QBoxLayout*)this_)->insertSpacing(index, size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:80
// [-2] void insertStretch(int, int)
extern "C"
void C_ZN10QBoxLayout13insertStretchEii(void *this_, int index, int stretch) {
  ((QBoxLayout*)this_)->insertStretch(index, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:81
// [-2] void insertSpacerItem(int, class QSpacerItem *)
extern "C"
void C_ZN10QBoxLayout16insertSpacerItemEiP11QSpacerItem(void *this_, int index, QSpacerItem * spacerItem) {
  ((QBoxLayout*)this_)->insertSpacerItem(index, spacerItem);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:82
// [-2] void insertWidget(int, class QWidget *, int, Qt::Alignment)
extern "C"
void C_ZN10QBoxLayout12insertWidgetEiP7QWidgeti6QFlagsIN2Qt13AlignmentFlagEE(void *this_, int index, QWidget * widget, int stretch, QFlags<Qt::AlignmentFlag> alignment) {
  ((QBoxLayout*)this_)->insertWidget(index, widget, stretch, alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:83
// [-2] void insertLayout(int, class QLayout *, int)
extern "C"
void C_ZN10QBoxLayout12insertLayoutEiP7QLayouti(void *this_, int index, QLayout * layout, int stretch) {
  ((QBoxLayout*)this_)->insertLayout(index, layout, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:84
// [-2] void insertItem(int, class QLayoutItem *)
extern "C"
void C_ZN10QBoxLayout10insertItemEiP11QLayoutItem(void *this_, int index, QLayoutItem * arg1) {
  ((QBoxLayout*)this_)->insertItem(index, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:86
// [4] int spacing()
extern "C"
int C_ZNK10QBoxLayout7spacingEv(void *this_) {
  return (int)((QBoxLayout*)this_)->spacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:87
// [-2] void setSpacing(int)
extern "C"
void C_ZN10QBoxLayout10setSpacingEi(void *this_, int spacing) {
  ((QBoxLayout*)this_)->setSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:89
// [1] bool setStretchFactor(class QWidget *, int)
extern "C"
bool C_ZN10QBoxLayout16setStretchFactorEP7QWidgeti(void *this_, QWidget * w, int stretch) {
  return (bool)((QBoxLayout*)this_)->setStretchFactor(w, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:90
// [1] bool setStretchFactor(class QLayout *, int)
extern "C"
bool C_ZN10QBoxLayout16setStretchFactorEP7QLayouti(void *this_, QLayout * l, int stretch) {
  return (bool)((QBoxLayout*)this_)->setStretchFactor(l, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:91
// [-2] void setStretch(int, int)
extern "C"
void C_ZN10QBoxLayout10setStretchEii(void *this_, int index, int stretch) {
  ((QBoxLayout*)this_)->setStretch(index, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:92
// [4] int stretch(int)
extern "C"
int C_ZNK10QBoxLayout7stretchEi(void *this_, int index) {
  return (int)((QBoxLayout*)this_)->stretch(index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:94
// [8] QSize sizeHint()
extern "C"
void* C_ZNK10QBoxLayout8sizeHintEv(void *this_) {
  auto rv = ((QBoxLayout*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:95
// [8] QSize minimumSize()
extern "C"
void* C_ZNK10QBoxLayout11minimumSizeEv(void *this_) {
  auto rv = ((QBoxLayout*)this_)->minimumSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:96
// [8] QSize maximumSize()
extern "C"
void* C_ZNK10QBoxLayout11maximumSizeEv(void *this_) {
  auto rv = ((QBoxLayout*)this_)->maximumSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:98
// [1] bool hasHeightForWidth()
extern "C"
bool C_ZNK10QBoxLayout17hasHeightForWidthEv(void *this_) {
  return (bool)((QBoxLayout*)this_)->hasHeightForWidth();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:99
// [4] int heightForWidth(int)
extern "C"
int C_ZNK10QBoxLayout14heightForWidthEi(void *this_, int arg0) {
  return (int)((QBoxLayout*)this_)->heightForWidth(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:100
// [4] int minimumHeightForWidth(int)
extern "C"
int C_ZNK10QBoxLayout21minimumHeightForWidthEi(void *this_, int arg0) {
  return (int)((QBoxLayout*)this_)->minimumHeightForWidth(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:102
// [4] Qt::Orientations expandingDirections()
extern "C"
Qt::Orientations C_ZNK10QBoxLayout19expandingDirectionsEv(void *this_) {
  return (Qt::Orientations)((QBoxLayout*)this_)->expandingDirections();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:103
// [-2] void invalidate()
extern "C"
void C_ZN10QBoxLayout10invalidateEv(void *this_) {
  ((QBoxLayout*)this_)->invalidate();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:104
// [8] QLayoutItem * itemAt(int)
extern "C"
void* C_ZNK10QBoxLayout6itemAtEi(void *this_, int arg0) {
  return (void*)((QBoxLayout*)this_)->itemAt(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:105
// [8] QLayoutItem * takeAt(int)
extern "C"
void* C_ZN10QBoxLayout6takeAtEi(void *this_, int arg0) {
  return (void*)((QBoxLayout*)this_)->takeAt(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:106
// [4] int count()
extern "C"
int C_ZNK10QBoxLayout5countEv(void *this_) {
  return (int)((QBoxLayout*)this_)->count();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:107
// [-2] void setGeometry(const class QRect &)
extern "C"
void C_ZN10QBoxLayout11setGeometryERK5QRect(void *this_, QRect* arg0) {
  ((QBoxLayout*)this_)->setGeometry(*arg0);
}

//  main block end
