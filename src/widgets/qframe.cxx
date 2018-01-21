//  header block begin
// /usr/include/qt/QtWidgets/qframe.h
#include <qframe.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qframe.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK6QFrame10metaObjectEv(void *this_) {
  /*return*/ ((QFrame*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qframe.h:63
// void QFrame(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN6QFrameC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  return new QFrame(parent, f);
}
// virtual
// /usr/include/qt/QtWidgets/qframe.h:64
// void ~QFrame()
extern "C"
void C_ZN6QFrameD1Ev(void *this_) {
  delete (QFrame*)(this_);
}
// /usr/include/qt/QtWidgets/qframe.h:66
// int frameStyle()
extern "C"
void C_ZNK6QFrame10frameStyleEv(void *this_) {
  /*return*/ ((QFrame*)this_)->frameStyle();
}
// /usr/include/qt/QtWidgets/qframe.h:67
// void setFrameStyle(int)
extern "C"
void C_ZN6QFrame13setFrameStyleEi(void *this_, int arg0) {
  ((QFrame*)this_)->setFrameStyle(arg0);
}
// /usr/include/qt/QtWidgets/qframe.h:69
// int frameWidth()
extern "C"
void C_ZNK6QFrame10frameWidthEv(void *this_) {
  /*return*/ ((QFrame*)this_)->frameWidth();
}
// virtual
// /usr/include/qt/QtWidgets/qframe.h:71
// QSize sizeHint()
extern "C"
void C_ZNK6QFrame8sizeHintEv(void *this_) {
  /*return*/ ((QFrame*)this_)->sizeHint();
}
// /usr/include/qt/QtWidgets/qframe.h:95
// QFrame::Shape frameShape()
extern "C"
void C_ZNK6QFrame10frameShapeEv(void *this_) {
  /*return*/ ((QFrame*)this_)->frameShape();
}
// /usr/include/qt/QtWidgets/qframe.h:96
// void setFrameShape(enum QFrame::Shape)
extern "C"
void C_ZN6QFrame13setFrameShapeENS_5ShapeE(void *this_, QFrame::Shape arg0) {
  ((QFrame*)this_)->setFrameShape(arg0);
}
// /usr/include/qt/QtWidgets/qframe.h:97
// QFrame::Shadow frameShadow()
extern "C"
void C_ZNK6QFrame11frameShadowEv(void *this_) {
  /*return*/ ((QFrame*)this_)->frameShadow();
}
// /usr/include/qt/QtWidgets/qframe.h:98
// void setFrameShadow(enum QFrame::Shadow)
extern "C"
void C_ZN6QFrame14setFrameShadowENS_6ShadowE(void *this_, QFrame::Shadow arg0) {
  ((QFrame*)this_)->setFrameShadow(arg0);
}
// /usr/include/qt/QtWidgets/qframe.h:100
// int lineWidth()
extern "C"
void C_ZNK6QFrame9lineWidthEv(void *this_) {
  /*return*/ ((QFrame*)this_)->lineWidth();
}
// /usr/include/qt/QtWidgets/qframe.h:101
// void setLineWidth(int)
extern "C"
void C_ZN6QFrame12setLineWidthEi(void *this_, int arg0) {
  ((QFrame*)this_)->setLineWidth(arg0);
}
// /usr/include/qt/QtWidgets/qframe.h:103
// int midLineWidth()
extern "C"
void C_ZNK6QFrame12midLineWidthEv(void *this_) {
  /*return*/ ((QFrame*)this_)->midLineWidth();
}
// /usr/include/qt/QtWidgets/qframe.h:104
// void setMidLineWidth(int)
extern "C"
void C_ZN6QFrame15setMidLineWidthEi(void *this_, int arg0) {
  ((QFrame*)this_)->setMidLineWidth(arg0);
}
// /usr/include/qt/QtWidgets/qframe.h:106
// QRect frameRect()
extern "C"
void C_ZNK6QFrame9frameRectEv(void *this_) {
  /*return*/ ((QFrame*)this_)->frameRect();
}
// /usr/include/qt/QtWidgets/qframe.h:107
// void setFrameRect(const class QRect &)
extern "C"
void C_ZN6QFrame12setFrameRectERK5QRect(void *this_, const QRect & arg0) {
  ((QFrame*)this_)->setFrameRect(arg0);
}
//  main block end
