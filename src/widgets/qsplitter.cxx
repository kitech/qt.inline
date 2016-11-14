// /usr/include/qt/QtWidgets/qsplitter.h
#include <qsplitter.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qsplitter.h:137
// const QMetaObject * metaObject()
extern "C"
void C_ZNK15QSplitterHandle10metaObjectEv(void *this_) {
  /*return*/ ((QSplitterHandle*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qsplitter.h:139
// void QSplitterHandle(Qt::Orientation, class QSplitter *)
extern "C"
void* C_ZN15QSplitterHandleC1EN2Qt11OrientationEP9QSplitter(Qt::Orientation o, QSplitter * parent) {
  return new QSplitterHandle(o, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qsplitter.h:140
// void ~QSplitterHandle()
extern "C"
void C_ZN15QSplitterHandleD1Ev(void *this_) {
  delete (QSplitterHandle*)(this_);
}
// /usr/include/qt/QtWidgets/qsplitter.h:142
// void setOrientation(Qt::Orientation)
extern "C"
void C_ZN15QSplitterHandle14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation o) {
  ((QSplitterHandle*)this_)->setOrientation(o);
}
// /usr/include/qt/QtWidgets/qsplitter.h:143
// Qt::Orientation orientation()
extern "C"
void C_ZNK15QSplitterHandle11orientationEv(void *this_) {
  /*return*/ ((QSplitterHandle*)this_)->orientation();
}
// /usr/include/qt/QtWidgets/qsplitter.h:144
// bool opaqueResize()
extern "C"
void C_ZNK15QSplitterHandle12opaqueResizeEv(void *this_) {
  /*return*/ ((QSplitterHandle*)this_)->opaqueResize();
}
// /usr/include/qt/QtWidgets/qsplitter.h:145
// QSplitter * splitter()
extern "C"
void C_ZNK15QSplitterHandle8splitterEv(void *this_) {
  /*return*/ ((QSplitterHandle*)this_)->splitter();
}
// virtual
// /usr/include/qt/QtWidgets/qsplitter.h:147
// QSize sizeHint()
extern "C"
void C_ZNK15QSplitterHandle8sizeHintEv(void *this_) {
  /*return*/ ((QSplitterHandle*)this_)->sizeHint();
}