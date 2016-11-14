// /usr/include/qt/QtWidgets/qstackedlayout.h
#include <qstackedlayout.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qstackedlayout.h:52
// const QMetaObject * metaObject()
extern "C"
void C_ZNK14QStackedLayout10metaObjectEv(void *this_) {
  /*return*/ ((QStackedLayout*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qstackedlayout.h:65
// void QStackedLayout()
extern "C"
void* C_ZN14QStackedLayoutC1Ev() {
  return new QStackedLayout();
}
// /usr/include/qt/QtWidgets/qstackedlayout.h:66
// void QStackedLayout(class QWidget *)
extern "C"
void* C_ZN14QStackedLayoutC1EP7QWidget(QWidget * parent) {
  return new QStackedLayout(parent);
}
// /usr/include/qt/QtWidgets/qstackedlayout.h:67
// void QStackedLayout(class QLayout *)
extern "C"
void* C_ZN14QStackedLayoutC1EP7QLayout(QLayout * parentLayout) {
  return new QStackedLayout(parentLayout);
}
// virtual
// /usr/include/qt/QtWidgets/qstackedlayout.h:68
// void ~QStackedLayout()
extern "C"
void C_ZN14QStackedLayoutD1Ev(void *this_) {
  delete (QStackedLayout*)(this_);
}
// /usr/include/qt/QtWidgets/qstackedlayout.h:70
// int addWidget(class QWidget *)
extern "C"
void C_ZN14QStackedLayout9addWidgetEP7QWidget(void *this_, QWidget * w) {
  /*return*/ ((QStackedLayout*)this_)->addWidget(w);
}
// /usr/include/qt/QtWidgets/qstackedlayout.h:71
// int insertWidget(int, class QWidget *)
extern "C"
void C_ZN14QStackedLayout12insertWidgetEiP7QWidget(void *this_, int index, QWidget * w) {
  /*return*/ ((QStackedLayout*)this_)->insertWidget(index, w);
}
// /usr/include/qt/QtWidgets/qstackedlayout.h:73
// QWidget * currentWidget()
extern "C"
void C_ZNK14QStackedLayout13currentWidgetEv(void *this_) {
  /*return*/ ((QStackedLayout*)this_)->currentWidget();
}
// /usr/include/qt/QtWidgets/qstackedlayout.h:74
// int currentIndex()
extern "C"
void C_ZNK14QStackedLayout12currentIndexEv(void *this_) {
  /*return*/ ((QStackedLayout*)this_)->currentIndex();
}
// /usr/include/qt/QtWidgets/qstackedlayout.h:76
// QWidget * widget(int)
extern "C"
void C_ZNK14QStackedLayout6widgetEi(void *this_, int a0) {
  /*return*/ ((QStackedLayout*)this_)->widget(a0);
}
// virtual
// /usr/include/qt/QtWidgets/qstackedlayout.h:77
// int count()
extern "C"
void C_ZNK14QStackedLayout5countEv(void *this_) {
  /*return*/ ((QStackedLayout*)this_)->count();
}
// /usr/include/qt/QtWidgets/qstackedlayout.h:79
// QStackedLayout::StackingMode stackingMode()
extern "C"
void C_ZNK14QStackedLayout12stackingModeEv(void *this_) {
  /*return*/ ((QStackedLayout*)this_)->stackingMode();
}
// /usr/include/qt/QtWidgets/qstackedlayout.h:80
// void setStackingMode(enum QStackedLayout::StackingMode)
extern "C"
void C_ZN14QStackedLayout15setStackingModeENS_12StackingModeE(void *this_, QStackedLayout::StackingMode stackingMode) {
  ((QStackedLayout*)this_)->setStackingMode(stackingMode);
}
// virtual
// /usr/include/qt/QtWidgets/qstackedlayout.h:83
// void addItem(class QLayoutItem *)
extern "C"
void C_ZN14QStackedLayout7addItemEP11QLayoutItem(void *this_, QLayoutItem * item) {
  ((QStackedLayout*)this_)->addItem(item);
}
// virtual
// /usr/include/qt/QtWidgets/qstackedlayout.h:84
// QSize sizeHint()
extern "C"
void C_ZNK14QStackedLayout8sizeHintEv(void *this_) {
  /*return*/ ((QStackedLayout*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qstackedlayout.h:85
// QSize minimumSize()
extern "C"
void C_ZNK14QStackedLayout11minimumSizeEv(void *this_) {
  /*return*/ ((QStackedLayout*)this_)->minimumSize();
}
// virtual
// /usr/include/qt/QtWidgets/qstackedlayout.h:86
// QLayoutItem * itemAt(int)
extern "C"
void C_ZNK14QStackedLayout6itemAtEi(void *this_, int a0) {
  /*return*/ ((QStackedLayout*)this_)->itemAt(a0);
}
// virtual
// /usr/include/qt/QtWidgets/qstackedlayout.h:87
// QLayoutItem * takeAt(int)
extern "C"
void C_ZN14QStackedLayout6takeAtEi(void *this_, int a0) {
  /*return*/ ((QStackedLayout*)this_)->takeAt(a0);
}
// virtual
// /usr/include/qt/QtWidgets/qstackedlayout.h:88
// void setGeometry(const class QRect &)
extern "C"
void C_ZN14QStackedLayout11setGeometryERK5QRect(void *this_, const QRect & rect) {
  ((QStackedLayout*)this_)->setGeometry(rect);
}
// virtual
// /usr/include/qt/QtWidgets/qstackedlayout.h:89
// bool hasHeightForWidth()
extern "C"
void C_ZNK14QStackedLayout17hasHeightForWidthEv(void *this_) {
  /*return*/ ((QStackedLayout*)this_)->hasHeightForWidth();
}
// virtual
// /usr/include/qt/QtWidgets/qstackedlayout.h:90
// int heightForWidth(int)
extern "C"
void C_ZNK14QStackedLayout14heightForWidthEi(void *this_, int width) {
  /*return*/ ((QStackedLayout*)this_)->heightForWidth(width);
}
// /usr/include/qt/QtWidgets/qstackedlayout.h:93
// void widgetRemoved(int)
extern "C"
void C_ZN14QStackedLayout13widgetRemovedEi(void *this_, int index) {
  ((QStackedLayout*)this_)->widgetRemoved(index);
}
// /usr/include/qt/QtWidgets/qstackedlayout.h:94
// void currentChanged(int)
extern "C"
void C_ZN14QStackedLayout14currentChangedEi(void *this_, int index) {
  ((QStackedLayout*)this_)->currentChanged(index);
}
// /usr/include/qt/QtWidgets/qstackedlayout.h:97
// void setCurrentIndex(int)
extern "C"
void C_ZN14QStackedLayout15setCurrentIndexEi(void *this_, int index) {
  ((QStackedLayout*)this_)->setCurrentIndex(index);
}
// /usr/include/qt/QtWidgets/qstackedlayout.h:98
// void setCurrentWidget(class QWidget *)
extern "C"
void C_ZN14QStackedLayout16setCurrentWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QStackedLayout*)this_)->setCurrentWidget(w);
}