//  header block begin
// /usr/include/qt/QtWidgets/qradiobutton.h
#include <qradiobutton.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qradiobutton.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK12QRadioButton10metaObjectEv(void *this_) {
  /*return*/ ((QRadioButton*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qradiobutton.h:56
// void QRadioButton(class QWidget *)
extern "C"
void* C_ZN12QRadioButtonC1EP7QWidget(QWidget * parent) {
  return new QRadioButton(parent);
}
// /usr/include/qt/QtWidgets/qradiobutton.h:57
// void QRadioButton(const class QString &, class QWidget *)
extern "C"
void* C_ZN12QRadioButtonC1ERK7QStringP7QWidget(const QString & text, QWidget * parent) {
  return new QRadioButton(text, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qradiobutton.h:58
// void ~QRadioButton()
extern "C"
void C_ZN12QRadioButtonD1Ev(void *this_) {
  delete (QRadioButton*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qradiobutton.h:60
// QSize sizeHint()
extern "C"
void C_ZNK12QRadioButton8sizeHintEv(void *this_) {
  /*return*/ ((QRadioButton*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qradiobutton.h:61
// QSize minimumSizeHint()
extern "C"
void C_ZNK12QRadioButton15minimumSizeHintEv(void *this_) {
  /*return*/ ((QRadioButton*)this_)->minimumSizeHint();
}
//  main block end
