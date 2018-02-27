//  header block begin
// /usr/include/qt/QtWidgets/qspinbox.h
#ifndef protected
#define protected public
#endif
#include <qspinbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDoubleSpinBox is pure virtual: false
// QDoubleSpinBox has virtual projected: false
//  header block end

//  main block begin

class MyQDoubleSpinBox : public QDoubleSpinBox {
public:
  virtual ~MyQDoubleSpinBox() {}
// void QDoubleSpinBox(class QWidget *)
MyQDoubleSpinBox(QWidget * parent) : QDoubleSpinBox(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:115
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK14QDoubleSpinBox10metaObjectEv(void *this_) {
  return (void*)((QDoubleSpinBox*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:126
// [-2] void QDoubleSpinBox(class QWidget *)
extern "C"
void* C_ZN14QDoubleSpinBoxC2EP7QWidget(QWidget * parent) {
  return  new QDoubleSpinBox(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:127
// [-2] void ~QDoubleSpinBox()
extern "C"
void C_ZN14QDoubleSpinBoxD2Ev(void *this_) {
  delete (QDoubleSpinBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:129
// [8] double value()
extern "C"
double C_ZNK14QDoubleSpinBox5valueEv(void *this_) {
  return (double)((QDoubleSpinBox*)this_)->value();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:131
// [8] QString prefix()
extern "C"
void* C_ZNK14QDoubleSpinBox6prefixEv(void *this_) {
  auto rv = ((QDoubleSpinBox*)this_)->prefix();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:132
// [-2] void setPrefix(const class QString &)
extern "C"
void C_ZN14QDoubleSpinBox9setPrefixERK7QString(void *this_, QString* prefix) {
  ((QDoubleSpinBox*)this_)->setPrefix(*prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:134
// [8] QString suffix()
extern "C"
void* C_ZNK14QDoubleSpinBox6suffixEv(void *this_) {
  auto rv = ((QDoubleSpinBox*)this_)->suffix();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:135
// [-2] void setSuffix(const class QString &)
extern "C"
void C_ZN14QDoubleSpinBox9setSuffixERK7QString(void *this_, QString* suffix) {
  ((QDoubleSpinBox*)this_)->setSuffix(*suffix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:137
// [8] QString cleanText()
extern "C"
void* C_ZNK14QDoubleSpinBox9cleanTextEv(void *this_) {
  auto rv = ((QDoubleSpinBox*)this_)->cleanText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:139
// [8] double singleStep()
extern "C"
double C_ZNK14QDoubleSpinBox10singleStepEv(void *this_) {
  return (double)((QDoubleSpinBox*)this_)->singleStep();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:140
// [-2] void setSingleStep(double)
extern "C"
void C_ZN14QDoubleSpinBox13setSingleStepEd(void *this_, double val) {
  ((QDoubleSpinBox*)this_)->setSingleStep(val);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:142
// [8] double minimum()
extern "C"
double C_ZNK14QDoubleSpinBox7minimumEv(void *this_) {
  return (double)((QDoubleSpinBox*)this_)->minimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:143
// [-2] void setMinimum(double)
extern "C"
void C_ZN14QDoubleSpinBox10setMinimumEd(void *this_, double min) {
  ((QDoubleSpinBox*)this_)->setMinimum(min);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:145
// [8] double maximum()
extern "C"
double C_ZNK14QDoubleSpinBox7maximumEv(void *this_) {
  return (double)((QDoubleSpinBox*)this_)->maximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:146
// [-2] void setMaximum(double)
extern "C"
void C_ZN14QDoubleSpinBox10setMaximumEd(void *this_, double max) {
  ((QDoubleSpinBox*)this_)->setMaximum(max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:148
// [-2] void setRange(double, double)
extern "C"
void C_ZN14QDoubleSpinBox8setRangeEdd(void *this_, double min, double max) {
  ((QDoubleSpinBox*)this_)->setRange(min, max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:150
// [4] int decimals()
extern "C"
int C_ZNK14QDoubleSpinBox8decimalsEv(void *this_) {
  return (int)((QDoubleSpinBox*)this_)->decimals();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:151
// [-2] void setDecimals(int)
extern "C"
void C_ZN14QDoubleSpinBox11setDecimalsEi(void *this_, int prec) {
  ((QDoubleSpinBox*)this_)->setDecimals(prec);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:153
// [4] QValidator::State validate(class QString &, int &)
extern "C"
QValidator::State C_ZNK14QDoubleSpinBox8validateER7QStringRi(void *this_, QString* input, int & pos) {
  return (QValidator::State)((QDoubleSpinBox*)this_)->validate(*input, pos);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:154
// [8] double valueFromText(const class QString &)
extern "C"
double C_ZNK14QDoubleSpinBox13valueFromTextERK7QString(void *this_, QString* text) {
  return (double)((QDoubleSpinBox*)this_)->valueFromText(*text);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:155
// [8] QString textFromValue(double)
extern "C"
void* C_ZNK14QDoubleSpinBox13textFromValueEd(void *this_, double val) {
  auto rv = ((QDoubleSpinBox*)this_)->textFromValue(val);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:156
// [-2] void fixup(class QString &)
extern "C"
void C_ZNK14QDoubleSpinBox5fixupER7QString(void *this_, QString* str) {
  ((QDoubleSpinBox*)this_)->fixup(*str);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:159
// [-2] void setValue(double)
extern "C"
void C_ZN14QDoubleSpinBox8setValueEd(void *this_, double val) {
  ((QDoubleSpinBox*)this_)->setValue(val);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:162
// [-2] void valueChanged(double)
extern "C"
void C_ZN14QDoubleSpinBox12valueChangedEd(void *this_, double arg0) {
  ((QDoubleSpinBox*)this_)->valueChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:163
// [-2] void valueChanged(const class QString &)
extern "C"
void C_ZN14QDoubleSpinBox12valueChangedERK7QString(void *this_, QString* arg0) {
  ((QDoubleSpinBox*)this_)->valueChanged(*arg0);
}

//  main block end
