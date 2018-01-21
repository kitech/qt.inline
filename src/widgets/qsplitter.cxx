//  header block begin
// /usr/include/qt/QtWidgets/qsplitter.h
#include <qsplitter.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qsplitter.h:59
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QSplitter10metaObjectEv(void *this_) {
  /*return*/ ((QSplitter*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qsplitter.h:67
// void QSplitter(class QWidget *)
extern "C"
void* C_ZN9QSplitterC1EP7QWidget(QWidget * parent) {
  return new QSplitter(parent);
}
// /usr/include/qt/QtWidgets/qsplitter.h:68
// void QSplitter(Qt::Orientation, class QWidget *)
extern "C"
void* C_ZN9QSplitterC1EN2Qt11OrientationEP7QWidget(Qt::Orientation arg0, QWidget * parent) {
  return new QSplitter(arg0, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qsplitter.h:69
// void ~QSplitter()
extern "C"
void C_ZN9QSplitterD1Ev(void *this_) {
  delete (QSplitter*)(this_);
}
// /usr/include/qt/QtWidgets/qsplitter.h:71
// void addWidget(class QWidget *)
extern "C"
void C_ZN9QSplitter9addWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QSplitter*)this_)->addWidget(widget);
}
// /usr/include/qt/QtWidgets/qsplitter.h:72
// void insertWidget(int, class QWidget *)
extern "C"
void C_ZN9QSplitter12insertWidgetEiP7QWidget(void *this_, int index, QWidget * widget) {
  ((QSplitter*)this_)->insertWidget(index, widget);
}
// /usr/include/qt/QtWidgets/qsplitter.h:74
// void setOrientation(Qt::Orientation)
extern "C"
void C_ZN9QSplitter14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation arg0) {
  ((QSplitter*)this_)->setOrientation(arg0);
}
// /usr/include/qt/QtWidgets/qsplitter.h:75
// Qt::Orientation orientation()
extern "C"
void C_ZNK9QSplitter11orientationEv(void *this_) {
  /*return*/ ((QSplitter*)this_)->orientation();
}
// /usr/include/qt/QtWidgets/qsplitter.h:77
// void setChildrenCollapsible(_Bool)
extern "C"
void C_ZN9QSplitter22setChildrenCollapsibleEb(void *this_, bool arg0) {
  ((QSplitter*)this_)->setChildrenCollapsible(arg0);
}
// /usr/include/qt/QtWidgets/qsplitter.h:78
// bool childrenCollapsible()
extern "C"
void C_ZNK9QSplitter19childrenCollapsibleEv(void *this_) {
  /*return*/ ((QSplitter*)this_)->childrenCollapsible();
}
// /usr/include/qt/QtWidgets/qsplitter.h:80
// void setCollapsible(int, _Bool)
extern "C"
void C_ZN9QSplitter14setCollapsibleEib(void *this_, int index, bool arg1) {
  ((QSplitter*)this_)->setCollapsible(index, arg1);
}
// /usr/include/qt/QtWidgets/qsplitter.h:81
// bool isCollapsible(int)
extern "C"
void C_ZNK9QSplitter13isCollapsibleEi(void *this_, int index) {
  /*return*/ ((QSplitter*)this_)->isCollapsible(index);
}
// /usr/include/qt/QtWidgets/qsplitter.h:82
// void setOpaqueResize(_Bool)
extern "C"
void C_ZN9QSplitter15setOpaqueResizeEb(void *this_, bool opaque) {
  ((QSplitter*)this_)->setOpaqueResize(opaque);
}
// /usr/include/qt/QtWidgets/qsplitter.h:83
// bool opaqueResize()
extern "C"
void C_ZNK9QSplitter12opaqueResizeEv(void *this_) {
  /*return*/ ((QSplitter*)this_)->opaqueResize();
}
// /usr/include/qt/QtWidgets/qsplitter.h:84
// void refresh()
extern "C"
void C_ZN9QSplitter7refreshEv(void *this_) {
  ((QSplitter*)this_)->refresh();
}
// virtual
// /usr/include/qt/QtWidgets/qsplitter.h:86
// QSize sizeHint()
extern "C"
void C_ZNK9QSplitter8sizeHintEv(void *this_) {
  /*return*/ ((QSplitter*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qsplitter.h:87
// QSize minimumSizeHint()
extern "C"
void C_ZNK9QSplitter15minimumSizeHintEv(void *this_) {
  /*return*/ ((QSplitter*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qsplitter.h:89
// QList<int> sizes()
extern "C"
void C_ZNK9QSplitter5sizesEv(void *this_) {
  /*return*/ ((QSplitter*)this_)->sizes();
}
// /usr/include/qt/QtWidgets/qsplitter.h:90
// void setSizes(const QList<int> &)
extern "C"
void C_ZN9QSplitter8setSizesERK5QListIiE(void *this_, const QList<int> & list) {
  ((QSplitter*)this_)->setSizes(list);
}
// /usr/include/qt/QtWidgets/qsplitter.h:92
// QByteArray saveState()
extern "C"
void C_ZNK9QSplitter9saveStateEv(void *this_) {
  /*return*/ ((QSplitter*)this_)->saveState();
}
// /usr/include/qt/QtWidgets/qsplitter.h:93
// bool restoreState(const class QByteArray &)
extern "C"
void C_ZN9QSplitter12restoreStateERK10QByteArray(void *this_, const QByteArray & state) {
  /*return*/ ((QSplitter*)this_)->restoreState(state);
}
// /usr/include/qt/QtWidgets/qsplitter.h:95
// int handleWidth()
extern "C"
void C_ZNK9QSplitter11handleWidthEv(void *this_) {
  /*return*/ ((QSplitter*)this_)->handleWidth();
}
// /usr/include/qt/QtWidgets/qsplitter.h:96
// void setHandleWidth(int)
extern "C"
void C_ZN9QSplitter14setHandleWidthEi(void *this_, int arg0) {
  ((QSplitter*)this_)->setHandleWidth(arg0);
}
// /usr/include/qt/QtWidgets/qsplitter.h:98
// int indexOf(class QWidget *)
extern "C"
void C_ZNK9QSplitter7indexOfEP7QWidget(void *this_, QWidget * w) {
  /*return*/ ((QSplitter*)this_)->indexOf(w);
}
// /usr/include/qt/QtWidgets/qsplitter.h:99
// QWidget * widget(int)
extern "C"
void C_ZNK9QSplitter6widgetEi(void *this_, int index) {
  /*return*/ ((QSplitter*)this_)->widget(index);
}
// /usr/include/qt/QtWidgets/qsplitter.h:100
// int count()
extern "C"
void C_ZNK9QSplitter5countEv(void *this_) {
  /*return*/ ((QSplitter*)this_)->count();
}
// /usr/include/qt/QtWidgets/qsplitter.h:102
// void getRange(int, int *, int *)
extern "C"
void C_ZNK9QSplitter8getRangeEiPiS0_(void *this_, int index, int * arg1, int * arg2) {
  ((QSplitter*)this_)->getRange(index, arg1, arg2);
}
// /usr/include/qt/QtWidgets/qsplitter.h:103
// QSplitterHandle * handle(int)
extern "C"
void C_ZNK9QSplitter6handleEi(void *this_, int index) {
  /*return*/ ((QSplitter*)this_)->handle(index);
}
// /usr/include/qt/QtWidgets/qsplitter.h:105
// void setStretchFactor(int, int)
extern "C"
void C_ZN9QSplitter16setStretchFactorEii(void *this_, int index, int stretch) {
  ((QSplitter*)this_)->setStretchFactor(index, stretch);
}
// /usr/include/qt/QtWidgets/qsplitter.h:108
// void splitterMoved(int, int)
extern "C"
void C_ZN9QSplitter13splitterMovedEii(void *this_, int pos, int index) {
  ((QSplitter*)this_)->splitterMoved(pos, index);
}
//  main block end
