// /usr/include/qt/QtWidgets/qspinbox.h
#include <qspinbox.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qspinbox.h:115
// const QMetaObject * metaObject()
extern "C"
void C_ZNK14QDoubleSpinBox10metaObjectEv(void *this_) {
  /*return*/ ((QDoubleSpinBox*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qspinbox.h:126
// void QDoubleSpinBox(class QWidget *)
extern "C"
void* C_ZN14QDoubleSpinBoxC1EP7QWidget(QWidget * parent) {
  return new QDoubleSpinBox(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qspinbox.h:127
// void ~QDoubleSpinBox()
extern "C"
void C_ZN14QDoubleSpinBoxD1Ev(void *this_) {
  delete (QDoubleSpinBox*)(this_);
}
// /usr/include/qt/QtWidgets/qspinbox.h:129
// double value()
extern "C"
void C_ZNK14QDoubleSpinBox5valueEv(void *this_) {
  /*return*/ ((QDoubleSpinBox*)this_)->value();
}
// /usr/include/qt/QtWidgets/qspinbox.h:131
// QString prefix()
extern "C"
void C_ZNK14QDoubleSpinBox6prefixEv(void *this_) {
  /*return*/ ((QDoubleSpinBox*)this_)->prefix();
}
// /usr/include/qt/QtWidgets/qspinbox.h:132
// void setPrefix(const class QString &)
extern "C"
void C_ZN14QDoubleSpinBox9setPrefixERK7QString(void *this_, const QString & prefix) {
  ((QDoubleSpinBox*)this_)->setPrefix(prefix);
}
// /usr/include/qt/QtWidgets/qspinbox.h:134
// QString suffix()
extern "C"
void C_ZNK14QDoubleSpinBox6suffixEv(void *this_) {
  /*return*/ ((QDoubleSpinBox*)this_)->suffix();
}
// /usr/include/qt/QtWidgets/qspinbox.h:135
// void setSuffix(const class QString &)
extern "C"
void C_ZN14QDoubleSpinBox9setSuffixERK7QString(void *this_, const QString & suffix) {
  ((QDoubleSpinBox*)this_)->setSuffix(suffix);
}
// /usr/include/qt/QtWidgets/qspinbox.h:137
// QString cleanText()
extern "C"
void C_ZNK14QDoubleSpinBox9cleanTextEv(void *this_) {
  /*return*/ ((QDoubleSpinBox*)this_)->cleanText();
}
// /usr/include/qt/QtWidgets/qspinbox.h:139
// double singleStep()
extern "C"
void C_ZNK14QDoubleSpinBox10singleStepEv(void *this_) {
  /*return*/ ((QDoubleSpinBox*)this_)->singleStep();
}
// /usr/include/qt/QtWidgets/qspinbox.h:140
// void setSingleStep(double)
extern "C"
void C_ZN14QDoubleSpinBox13setSingleStepEd(void *this_, double val) {
  ((QDoubleSpinBox*)this_)->setSingleStep(val);
}
// /usr/include/qt/QtWidgets/qspinbox.h:142
// double minimum()
extern "C"
void C_ZNK14QDoubleSpinBox7minimumEv(void *this_) {
  /*return*/ ((QDoubleSpinBox*)this_)->minimum();
}
// /usr/include/qt/QtWidgets/qspinbox.h:143
// void setMinimum(double)
extern "C"
void C_ZN14QDoubleSpinBox10setMinimumEd(void *this_, double min) {
  ((QDoubleSpinBox*)this_)->setMinimum(min);
}
// /usr/include/qt/QtWidgets/qspinbox.h:145
// double maximum()
extern "C"
void C_ZNK14QDoubleSpinBox7maximumEv(void *this_) {
  /*return*/ ((QDoubleSpinBox*)this_)->maximum();
}
// /usr/include/qt/QtWidgets/qspinbox.h:146
// void setMaximum(double)
extern "C"
void C_ZN14QDoubleSpinBox10setMaximumEd(void *this_, double max) {
  ((QDoubleSpinBox*)this_)->setMaximum(max);
}
// /usr/include/qt/QtWidgets/qspinbox.h:148
// void setRange(double, double)
extern "C"
void C_ZN14QDoubleSpinBox8setRangeEdd(void *this_, double min, double max) {
  ((QDoubleSpinBox*)this_)->setRange(min, max);
}
// /usr/include/qt/QtWidgets/qspinbox.h:150
// int decimals()
extern "C"
void C_ZNK14QDoubleSpinBox8decimalsEv(void *this_) {
  /*return*/ ((QDoubleSpinBox*)this_)->decimals();
}
// /usr/include/qt/QtWidgets/qspinbox.h:151
// void setDecimals(int)
extern "C"
void C_ZN14QDoubleSpinBox11setDecimalsEi(void *this_, int prec) {
  ((QDoubleSpinBox*)this_)->setDecimals(prec);
}
// virtual
// /usr/include/qt/QtWidgets/qspinbox.h:153
// QValidator::State validate(class QString &, int &)
extern "C"
void C_ZNK14QDoubleSpinBox8validateER7QStringRi(void *this_, QString & input, int & pos) {
  /*return*/ ((QDoubleSpinBox*)this_)->validate(input, pos);
}
// virtual
// /usr/include/qt/QtWidgets/qspinbox.h:154
// double valueFromText(const class QString &)
extern "C"
void C_ZNK14QDoubleSpinBox13valueFromTextERK7QString(void *this_, const QString & text) {
  /*return*/ ((QDoubleSpinBox*)this_)->valueFromText(text);
}
// virtual
// /usr/include/qt/QtWidgets/qspinbox.h:155
// QString textFromValue(double)
extern "C"
void C_ZNK14QDoubleSpinBox13textFromValueEd(void *this_, double val) {
  /*return*/ ((QDoubleSpinBox*)this_)->textFromValue(val);
}
// virtual
// /usr/include/qt/QtWidgets/qspinbox.h:156
// void fixup(class QString &)
extern "C"
void C_ZNK14QDoubleSpinBox5fixupER7QString(void *this_, QString & str) {
  ((QDoubleSpinBox*)this_)->fixup(str);
}
// /usr/include/qt/QtWidgets/qspinbox.h:159
// void setValue(double)
extern "C"
void C_ZN14QDoubleSpinBox8setValueEd(void *this_, double val) {
  ((QDoubleSpinBox*)this_)->setValue(val);
}
// /usr/include/qt/QtWidgets/qspinbox.h:162
// void valueChanged(double)
extern "C"
void C_ZN14QDoubleSpinBox12valueChangedEd(void *this_, double a0) {
  ((QDoubleSpinBox*)this_)->valueChanged(a0);
}
// /usr/include/qt/QtWidgets/qspinbox.h:163
// void valueChanged(const class QString &)
extern "C"
void C_ZN14QDoubleSpinBox12valueChangedERK7QString(void *this_, const QString & a0) {
  ((QDoubleSpinBox*)this_)->valueChanged(a0);
}