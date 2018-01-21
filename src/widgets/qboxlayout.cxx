//  header block begin
// /usr/include/qt/QtWidgets/qboxlayout.h
#include <qboxlayout.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:57
// const QMetaObject * metaObject()
extern "C"
void C_ZNK10QBoxLayout10metaObjectEv(void *this_) {
  /*return*/ ((QBoxLayout*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qboxlayout.h:63
// void QBoxLayout(enum QBoxLayout::Direction, class QWidget *)
extern "C"
void* C_ZN10QBoxLayoutC1ENS_9DirectionEP7QWidget(QBoxLayout::Direction arg0, QWidget * parent) {
  return new QBoxLayout(arg0, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:65
// void ~QBoxLayout()
extern "C"
void C_ZN10QBoxLayoutD1Ev(void *this_) {
  delete (QBoxLayout*)(this_);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:67
// QBoxLayout::Direction direction()
extern "C"
void C_ZNK10QBoxLayout9directionEv(void *this_) {
  /*return*/ ((QBoxLayout*)this_)->direction();
}
// /usr/include/qt/QtWidgets/qboxlayout.h:68
// void setDirection(enum QBoxLayout::Direction)
extern "C"
void C_ZN10QBoxLayout12setDirectionENS_9DirectionE(void *this_, QBoxLayout::Direction arg0) {
  ((QBoxLayout*)this_)->setDirection(arg0);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:70
// void addSpacing(int)
extern "C"
void C_ZN10QBoxLayout10addSpacingEi(void *this_, int size) {
  ((QBoxLayout*)this_)->addSpacing(size);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:71
// void addStretch(int)
extern "C"
void C_ZN10QBoxLayout10addStretchEi(void *this_, int stretch) {
  ((QBoxLayout*)this_)->addStretch(stretch);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:72
// void addSpacerItem(class QSpacerItem *)
extern "C"
void C_ZN10QBoxLayout13addSpacerItemEP11QSpacerItem(void *this_, QSpacerItem * spacerItem) {
  ((QBoxLayout*)this_)->addSpacerItem(spacerItem);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:73
// void addWidget(class QWidget *, int, Qt::Alignment)
extern "C"
void C_ZN10QBoxLayout9addWidgetEP7QWidgeti6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QWidget * arg0, int stretch, QFlags<Qt::AlignmentFlag> alignment) {
  ((QBoxLayout*)this_)->addWidget(arg0, stretch, alignment);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:74
// void addLayout(class QLayout *, int)
extern "C"
void C_ZN10QBoxLayout9addLayoutEP7QLayouti(void *this_, QLayout * layout, int stretch) {
  ((QBoxLayout*)this_)->addLayout(layout, stretch);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:75
// void addStrut(int)
extern "C"
void C_ZN10QBoxLayout8addStrutEi(void *this_, int arg0) {
  ((QBoxLayout*)this_)->addStrut(arg0);
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:76
// void addItem(class QLayoutItem *)
extern "C"
void C_ZN10QBoxLayout7addItemEP11QLayoutItem(void *this_, QLayoutItem * arg0) {
  ((QBoxLayout*)this_)->addItem(arg0);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:78
// void insertSpacing(int, int)
extern "C"
void C_ZN10QBoxLayout13insertSpacingEii(void *this_, int index, int size) {
  ((QBoxLayout*)this_)->insertSpacing(index, size);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:79
// void insertStretch(int, int)
extern "C"
void C_ZN10QBoxLayout13insertStretchEii(void *this_, int index, int stretch) {
  ((QBoxLayout*)this_)->insertStretch(index, stretch);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:80
// void insertSpacerItem(int, class QSpacerItem *)
extern "C"
void C_ZN10QBoxLayout16insertSpacerItemEiP11QSpacerItem(void *this_, int index, QSpacerItem * spacerItem) {
  ((QBoxLayout*)this_)->insertSpacerItem(index, spacerItem);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:81
// void insertWidget(int, class QWidget *, int, Qt::Alignment)
extern "C"
void C_ZN10QBoxLayout12insertWidgetEiP7QWidgeti6QFlagsIN2Qt13AlignmentFlagEE(void *this_, int index, QWidget * widget, int stretch, QFlags<Qt::AlignmentFlag> alignment) {
  ((QBoxLayout*)this_)->insertWidget(index, widget, stretch, alignment);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:82
// void insertLayout(int, class QLayout *, int)
extern "C"
void C_ZN10QBoxLayout12insertLayoutEiP7QLayouti(void *this_, int index, QLayout * layout, int stretch) {
  ((QBoxLayout*)this_)->insertLayout(index, layout, stretch);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:83
// void insertItem(int, class QLayoutItem *)
extern "C"
void C_ZN10QBoxLayout10insertItemEiP11QLayoutItem(void *this_, int index, QLayoutItem * arg1) {
  ((QBoxLayout*)this_)->insertItem(index, arg1);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:85
// int spacing()
extern "C"
void C_ZNK10QBoxLayout7spacingEv(void *this_) {
  /*return*/ ((QBoxLayout*)this_)->spacing();
}
// /usr/include/qt/QtWidgets/qboxlayout.h:86
// void setSpacing(int)
extern "C"
void C_ZN10QBoxLayout10setSpacingEi(void *this_, int spacing) {
  ((QBoxLayout*)this_)->setSpacing(spacing);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:88
// bool setStretchFactor(class QWidget *, int)
extern "C"
void C_ZN10QBoxLayout16setStretchFactorEP7QWidgeti(void *this_, QWidget * w, int stretch) {
  /*return*/ ((QBoxLayout*)this_)->setStretchFactor(w, stretch);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:89
// bool setStretchFactor(class QLayout *, int)
extern "C"
void C_ZN10QBoxLayout16setStretchFactorEP7QLayouti(void *this_, QLayout * l, int stretch) {
  /*return*/ ((QBoxLayout*)this_)->setStretchFactor(l, stretch);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:90
// void setStretch(int, int)
extern "C"
void C_ZN10QBoxLayout10setStretchEii(void *this_, int index, int stretch) {
  ((QBoxLayout*)this_)->setStretch(index, stretch);
}
// /usr/include/qt/QtWidgets/qboxlayout.h:91
// int stretch(int)
extern "C"
void C_ZNK10QBoxLayout7stretchEi(void *this_, int index) {
  /*return*/ ((QBoxLayout*)this_)->stretch(index);
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:93
// QSize sizeHint()
extern "C"
void C_ZNK10QBoxLayout8sizeHintEv(void *this_) {
  /*return*/ ((QBoxLayout*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:94
// QSize minimumSize()
extern "C"
void C_ZNK10QBoxLayout11minimumSizeEv(void *this_) {
  /*return*/ ((QBoxLayout*)this_)->minimumSize();
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:95
// QSize maximumSize()
extern "C"
void C_ZNK10QBoxLayout11maximumSizeEv(void *this_) {
  /*return*/ ((QBoxLayout*)this_)->maximumSize();
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:97
// bool hasHeightForWidth()
extern "C"
void C_ZNK10QBoxLayout17hasHeightForWidthEv(void *this_) {
  /*return*/ ((QBoxLayout*)this_)->hasHeightForWidth();
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:98
// int heightForWidth(int)
extern "C"
void C_ZNK10QBoxLayout14heightForWidthEi(void *this_, int arg0) {
  /*return*/ ((QBoxLayout*)this_)->heightForWidth(arg0);
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:99
// int minimumHeightForWidth(int)
extern "C"
void C_ZNK10QBoxLayout21minimumHeightForWidthEi(void *this_, int arg0) {
  /*return*/ ((QBoxLayout*)this_)->minimumHeightForWidth(arg0);
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:101
// Qt::Orientations expandingDirections()
extern "C"
void C_ZNK10QBoxLayout19expandingDirectionsEv(void *this_) {
  /*return*/ ((QBoxLayout*)this_)->expandingDirections();
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:102
// void invalidate()
extern "C"
void C_ZN10QBoxLayout10invalidateEv(void *this_) {
  ((QBoxLayout*)this_)->invalidate();
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:103
// QLayoutItem * itemAt(int)
extern "C"
void C_ZNK10QBoxLayout6itemAtEi(void *this_, int arg0) {
  /*return*/ ((QBoxLayout*)this_)->itemAt(arg0);
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:104
// QLayoutItem * takeAt(int)
extern "C"
void C_ZN10QBoxLayout6takeAtEi(void *this_, int arg0) {
  /*return*/ ((QBoxLayout*)this_)->takeAt(arg0);
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:105
// int count()
extern "C"
void C_ZNK10QBoxLayout5countEv(void *this_) {
  /*return*/ ((QBoxLayout*)this_)->count();
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:106
// void setGeometry(const class QRect &)
extern "C"
void C_ZN10QBoxLayout11setGeometryERK5QRect(void *this_, const QRect & arg0) {
  ((QBoxLayout*)this_)->setGeometry(arg0);
}
//  main block end
