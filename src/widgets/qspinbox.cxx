//  header block begin
// /usr/include/qt/QtWidgets/qspinbox.h
#include <qspinbox.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qspinbox.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK8QSpinBox10metaObjectEv(void *this_) {
  /*return*/ ((QSpinBox*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qspinbox.h:65
// void QSpinBox(class QWidget *)
extern "C"
void* C_ZN8QSpinBoxC1EP7QWidget(QWidget * parent) {
  return new QSpinBox(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qspinbox.h:66
// void ~QSpinBox()
extern "C"
void C_ZN8QSpinBoxD1Ev(void *this_) {
  delete (QSpinBox*)(this_);
}
// /usr/include/qt/QtWidgets/qspinbox.h:68
// int value()
extern "C"
void C_ZNK8QSpinBox5valueEv(void *this_) {
  /*return*/ ((QSpinBox*)this_)->value();
}
// /usr/include/qt/QtWidgets/qspinbox.h:70
// QString prefix()
extern "C"
void C_ZNK8QSpinBox6prefixEv(void *this_) {
  /*return*/ ((QSpinBox*)this_)->prefix();
}
// /usr/include/qt/QtWidgets/qspinbox.h:71
// void setPrefix(const class QString &)
extern "C"
void C_ZN8QSpinBox9setPrefixERK7QString(void *this_, const QString & prefix) {
  ((QSpinBox*)this_)->setPrefix(prefix);
}
// /usr/include/qt/QtWidgets/qspinbox.h:73
// QString suffix()
extern "C"
void C_ZNK8QSpinBox6suffixEv(void *this_) {
  /*return*/ ((QSpinBox*)this_)->suffix();
}
// /usr/include/qt/QtWidgets/qspinbox.h:74
// void setSuffix(const class QString &)
extern "C"
void C_ZN8QSpinBox9setSuffixERK7QString(void *this_, const QString & suffix) {
  ((QSpinBox*)this_)->setSuffix(suffix);
}
// /usr/include/qt/QtWidgets/qspinbox.h:76
// QString cleanText()
extern "C"
void C_ZNK8QSpinBox9cleanTextEv(void *this_) {
  /*return*/ ((QSpinBox*)this_)->cleanText();
}
// /usr/include/qt/QtWidgets/qspinbox.h:78
// int singleStep()
extern "C"
void C_ZNK8QSpinBox10singleStepEv(void *this_) {
  /*return*/ ((QSpinBox*)this_)->singleStep();
}
// /usr/include/qt/QtWidgets/qspinbox.h:79
// void setSingleStep(int)
extern "C"
void C_ZN8QSpinBox13setSingleStepEi(void *this_, int val) {
  ((QSpinBox*)this_)->setSingleStep(val);
}
// /usr/include/qt/QtWidgets/qspinbox.h:81
// int minimum()
extern "C"
void C_ZNK8QSpinBox7minimumEv(void *this_) {
  /*return*/ ((QSpinBox*)this_)->minimum();
}
// /usr/include/qt/QtWidgets/qspinbox.h:82
// void setMinimum(int)
extern "C"
void C_ZN8QSpinBox10setMinimumEi(void *this_, int min) {
  ((QSpinBox*)this_)->setMinimum(min);
}
// /usr/include/qt/QtWidgets/qspinbox.h:84
// int maximum()
extern "C"
void C_ZNK8QSpinBox7maximumEv(void *this_) {
  /*return*/ ((QSpinBox*)this_)->maximum();
}
// /usr/include/qt/QtWidgets/qspinbox.h:85
// void setMaximum(int)
extern "C"
void C_ZN8QSpinBox10setMaximumEi(void *this_, int max) {
  ((QSpinBox*)this_)->setMaximum(max);
}
// /usr/include/qt/QtWidgets/qspinbox.h:87
// void setRange(int, int)
extern "C"
void C_ZN8QSpinBox8setRangeEii(void *this_, int min, int max) {
  ((QSpinBox*)this_)->setRange(min, max);
}
// /usr/include/qt/QtWidgets/qspinbox.h:89
// int displayIntegerBase()
extern "C"
void C_ZNK8QSpinBox18displayIntegerBaseEv(void *this_) {
  /*return*/ ((QSpinBox*)this_)->displayIntegerBase();
}
// /usr/include/qt/QtWidgets/qspinbox.h:90
// void setDisplayIntegerBase(int)
extern "C"
void C_ZN8QSpinBox21setDisplayIntegerBaseEi(void *this_, int base) {
  ((QSpinBox*)this_)->setDisplayIntegerBase(base);
}
// /usr/include/qt/QtWidgets/qspinbox.h:101
// void setValue(int)
extern "C"
void C_ZN8QSpinBox8setValueEi(void *this_, int val) {
  ((QSpinBox*)this_)->setValue(val);
}
// /usr/include/qt/QtWidgets/qspinbox.h:104
// void valueChanged(int)
extern "C"
void C_ZN8QSpinBox12valueChangedEi(void *this_, int arg0) {
  ((QSpinBox*)this_)->valueChanged(arg0);
}
// /usr/include/qt/QtWidgets/qspinbox.h:105
// void valueChanged(const class QString &)
extern "C"
void C_ZN8QSpinBox12valueChangedERK7QString(void *this_, const QString & arg0) {
  ((QSpinBox*)this_)->valueChanged(arg0);
}
//  main block end
