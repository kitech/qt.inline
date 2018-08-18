//  header block begin
// /usr/include/qt/QtWidgets/qspinbox.h
#ifndef protected
#define protected public
#endif
#include <qspinbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSpinBox is pure virtual: false
// QSpinBox has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSpinBox : public QSpinBox {
public:
  virtual ~MyQSpinBox() {}
// void QSpinBox(QWidget *)
MyQSpinBox(QWidget * parent) : QSpinBox(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSpinBox::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QValidator::State validate(QString &, int &)
  virtual QValidator::State validate(QString & input, int & pos) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"validate", &handled, 2, (uint64_t)&input, (uint64_t)&pos, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QValidator::State)(int)(irv);
      // ElaboratedEnumQValidator::State
    } else {
    return QSpinBox::validate(input, pos);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// int valueFromText(const QString &)
  virtual int valueFromText(const QString & text) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"valueFromText", &handled, 1, (uint64_t)&text, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QSpinBox::valueFromText(text);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QString textFromValue(int)
  virtual QString textFromValue(int val) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"textFromValue", &handled, 1, (uint64_t)val, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QString*)(irv);
      // RecordRecordQString
    } else {
    return QSpinBox::textFromValue(val);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void fixup(QString &)
  virtual void fixup(QString & str) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"fixup", &handled, 1, (uint64_t)&str, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSpinBox::fixup(str);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:93
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QSpinBox5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QSpinBox*)this_)->QSpinBox::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:94
// [4] QValidator::State validate(QString &, int &)
extern "C" Q_DECL_EXPORT
QValidator::State C_ZNK8QSpinBox8validateER7QStringRi(void *this_, QString* input, int & pos) {
  return (QValidator::State)((QSpinBox*)this_)->QSpinBox::validate(*input, pos);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:95
// [4] int valueFromText(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZNK8QSpinBox13valueFromTextERK7QString(void *this_, QString* text) {
  return (int)((QSpinBox*)this_)->QSpinBox::valueFromText(*text);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:96
// [8] QString textFromValue(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSpinBox13textFromValueEi(void *this_, int val) {
  auto rv = ((QSpinBox*)this_)->QSpinBox::textFromValue(val);
return new QString(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:97
// [-2] void fixup(QString &)
extern "C" Q_DECL_EXPORT
void C_ZNK8QSpinBox5fixupER7QString(void *this_, QString* str) {
  ((QSpinBox*)this_)->QSpinBox::fixup(*str);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSpinBox10metaObjectEv(void *this_) {
  return (void*)((QSpinBox*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:65
// [-2] void QSpinBox(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QSpinBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQSpinBox*)(0);
  return  new MyQSpinBox(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:66
// [-2] void ~QSpinBox()
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBoxD2Ev(void *this_) {
  delete (QSpinBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:68
// [4] int value()
extern "C" Q_DECL_EXPORT
int C_ZNK8QSpinBox5valueEv(void *this_) {
  return (int)((QSpinBox*)this_)->value();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:70
// [8] QString prefix()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSpinBox6prefixEv(void *this_) {
  auto rv = ((QSpinBox*)this_)->prefix();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:71
// [-2] void setPrefix(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox9setPrefixERK7QString(void *this_, QString* prefix) {
  ((QSpinBox*)this_)->setPrefix(*prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:73
// [8] QString suffix()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSpinBox6suffixEv(void *this_) {
  auto rv = ((QSpinBox*)this_)->suffix();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:74
// [-2] void setSuffix(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox9setSuffixERK7QString(void *this_, QString* suffix) {
  ((QSpinBox*)this_)->setSuffix(*suffix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:76
// [8] QString cleanText()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSpinBox9cleanTextEv(void *this_) {
  auto rv = ((QSpinBox*)this_)->cleanText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:78
// [4] int singleStep()
extern "C" Q_DECL_EXPORT
int C_ZNK8QSpinBox10singleStepEv(void *this_) {
  return (int)((QSpinBox*)this_)->singleStep();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:79
// [-2] void setSingleStep(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox13setSingleStepEi(void *this_, int val) {
  ((QSpinBox*)this_)->setSingleStep(val);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:81
// [4] int minimum()
extern "C" Q_DECL_EXPORT
int C_ZNK8QSpinBox7minimumEv(void *this_) {
  return (int)((QSpinBox*)this_)->minimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:82
// [-2] void setMinimum(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox10setMinimumEi(void *this_, int min) {
  ((QSpinBox*)this_)->setMinimum(min);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:84
// [4] int maximum()
extern "C" Q_DECL_EXPORT
int C_ZNK8QSpinBox7maximumEv(void *this_) {
  return (int)((QSpinBox*)this_)->maximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:85
// [-2] void setMaximum(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox10setMaximumEi(void *this_, int max) {
  ((QSpinBox*)this_)->setMaximum(max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:87
// [-2] void setRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox8setRangeEii(void *this_, int min, int max) {
  ((QSpinBox*)this_)->setRange(min, max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:89
// [4] int displayIntegerBase()
extern "C" Q_DECL_EXPORT
int C_ZNK8QSpinBox18displayIntegerBaseEv(void *this_) {
  return (int)((QSpinBox*)this_)->displayIntegerBase();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:90
// [-2] void setDisplayIntegerBase(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox21setDisplayIntegerBaseEi(void *this_, int base) {
  ((QSpinBox*)this_)->setDisplayIntegerBase(base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:101
// [-2] void setValue(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox8setValueEi(void *this_, int val) {
  ((QSpinBox*)this_)->setValue(val);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:104
// [-2] void valueChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox12valueChangedEi(void *this_, int arg0) {
  ((QSpinBox*)this_)->valueChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:105
// [-2] void valueChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox12valueChangedERK7QString(void *this_, QString* arg0) {
  ((QSpinBox*)this_)->valueChanged(*arg0);
}

//  main block end
