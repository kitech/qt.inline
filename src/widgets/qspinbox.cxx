//  header block begin
// /usr/include/qt/QtWidgets/qspinbox.h
#include <qspinbox.h>
#include <QtWidgets>

// QSpinBox is pure virtual: false
// QSpinBox has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:93
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN8QSpinBox5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN8QSpinBox5eventEP6QEvent(void*cbfn)
{ callback_ZN8QSpinBox5eventEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:94
// [4] QValidator::State validate(class QString &, int &)
extern "C"
void* callback_ZNK8QSpinBox8validateER7QStringRi_fnptr = 0;
extern "C" void set_callback_ZNK8QSpinBox8validateER7QStringRi(void*cbfn)
{ callback_ZNK8QSpinBox8validateER7QStringRi_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:95
// [4] int valueFromText(const class QString &)
extern "C"
void* callback_ZNK8QSpinBox13valueFromTextERK7QString_fnptr = 0;
extern "C" void set_callback_ZNK8QSpinBox13valueFromTextERK7QString(void*cbfn)
{ callback_ZNK8QSpinBox13valueFromTextERK7QString_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:96
// [8] QString textFromValue(int)
extern "C"
void* callback_ZNK8QSpinBox13textFromValueEi_fnptr = 0;
extern "C" void set_callback_ZNK8QSpinBox13textFromValueEi(void*cbfn)
{ callback_ZNK8QSpinBox13textFromValueEi_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:97
// [-2] void fixup(class QString &)
extern "C"
void* callback_ZNK8QSpinBox5fixupER7QString_fnptr = 0;
extern "C" void set_callback_ZNK8QSpinBox5fixupER7QString(void*cbfn)
{ callback_ZNK8QSpinBox5fixupER7QString_fnptr = cbfn; }

class MyQSpinBox : public QSpinBox {
public:
  virtual ~MyQSpinBox() {}
// void QSpinBox(class QWidget *)
MyQSpinBox(QWidget * parent) : QSpinBox(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN8QSpinBox5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    return QSpinBox::event(event);
  }
// QValidator::State validate(class QString &, int &)
  virtual QValidator::State validate(QString & input, int & pos) {
    auto fnptr = ((QValidator::State (*)(void* , QString*, int &))(callback_ZNK8QSpinBox8validateER7QStringRi_fnptr));
    if (fnptr != 0) {
      fnptr(this , (QString*)&input, pos);
    }
    return QSpinBox::validate(input, pos);
  }
// int valueFromText(const class QString &)
  virtual int valueFromText(const QString & text) {
    auto fnptr = ((int (*)(void* , QString*))(callback_ZNK8QSpinBox13valueFromTextERK7QString_fnptr));
    if (fnptr != 0) {
      fnptr(this , (QString*)&text);
    }
    return QSpinBox::valueFromText(text);
  }
// QString textFromValue(int)
  virtual QString textFromValue(int val) {
    auto fnptr = ((QString (*)(void* , int))(callback_ZNK8QSpinBox13textFromValueEi_fnptr));
    if (fnptr != 0) {
      fnptr(this , val);
    }
    return QSpinBox::textFromValue(val);
  }
// void fixup(class QString &)
  virtual void fixup(QString & str) {
    auto fnptr = ((void (*)(void* , QString*))(callback_ZNK8QSpinBox5fixupER7QString_fnptr));
    if (fnptr != 0) {
      fnptr(this , (QString*)&str);
    }
    QSpinBox::fixup(str);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK8QSpinBox10metaObjectEv(void *this_) {
  return (void*)((QSpinBox*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:65
// [-2] void QSpinBox(class QWidget *)
extern "C"
void* C_ZN8QSpinBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQSpinBox*)(0);
  return  new MyQSpinBox(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:66
// [-2] void ~QSpinBox()
extern "C"
void C_ZN8QSpinBoxD2Ev(void *this_) {
  delete (QSpinBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:68
// [4] int value()
extern "C"
int C_ZNK8QSpinBox5valueEv(void *this_) {
  return (int)((QSpinBox*)this_)->value();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:70
// [8] QString prefix()
extern "C"
void* C_ZNK8QSpinBox6prefixEv(void *this_) {
  auto rv = ((QSpinBox*)this_)->prefix();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:71
// [-2] void setPrefix(const class QString &)
extern "C"
void C_ZN8QSpinBox9setPrefixERK7QString(void *this_, QString* prefix) {
  ((QSpinBox*)this_)->setPrefix(*prefix);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:73
// [8] QString suffix()
extern "C"
void* C_ZNK8QSpinBox6suffixEv(void *this_) {
  auto rv = ((QSpinBox*)this_)->suffix();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:74
// [-2] void setSuffix(const class QString &)
extern "C"
void C_ZN8QSpinBox9setSuffixERK7QString(void *this_, QString* suffix) {
  ((QSpinBox*)this_)->setSuffix(*suffix);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:76
// [8] QString cleanText()
extern "C"
void* C_ZNK8QSpinBox9cleanTextEv(void *this_) {
  auto rv = ((QSpinBox*)this_)->cleanText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:78
// [4] int singleStep()
extern "C"
int C_ZNK8QSpinBox10singleStepEv(void *this_) {
  return (int)((QSpinBox*)this_)->singleStep();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:79
// [-2] void setSingleStep(int)
extern "C"
void C_ZN8QSpinBox13setSingleStepEi(void *this_, int val) {
  ((QSpinBox*)this_)->setSingleStep(val);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:81
// [4] int minimum()
extern "C"
int C_ZNK8QSpinBox7minimumEv(void *this_) {
  return (int)((QSpinBox*)this_)->minimum();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:82
// [-2] void setMinimum(int)
extern "C"
void C_ZN8QSpinBox10setMinimumEi(void *this_, int min) {
  ((QSpinBox*)this_)->setMinimum(min);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:84
// [4] int maximum()
extern "C"
int C_ZNK8QSpinBox7maximumEv(void *this_) {
  return (int)((QSpinBox*)this_)->maximum();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:85
// [-2] void setMaximum(int)
extern "C"
void C_ZN8QSpinBox10setMaximumEi(void *this_, int max) {
  ((QSpinBox*)this_)->setMaximum(max);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:87
// [-2] void setRange(int, int)
extern "C"
void C_ZN8QSpinBox8setRangeEii(void *this_, int min, int max) {
  ((QSpinBox*)this_)->setRange(min, max);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:89
// [4] int displayIntegerBase()
extern "C"
int C_ZNK8QSpinBox18displayIntegerBaseEv(void *this_) {
  return (int)((QSpinBox*)this_)->displayIntegerBase();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:90
// [-2] void setDisplayIntegerBase(int)
extern "C"
void C_ZN8QSpinBox21setDisplayIntegerBaseEi(void *this_, int base) {
  ((QSpinBox*)this_)->setDisplayIntegerBase(base);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:101
// [-2] void setValue(int)
extern "C"
void C_ZN8QSpinBox8setValueEi(void *this_, int val) {
  ((QSpinBox*)this_)->setValue(val);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:104
// [-2] void valueChanged(int)
extern "C"
void C_ZN8QSpinBox12valueChangedEi(void *this_, int arg0) {
  ((QSpinBox*)this_)->valueChanged(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:105
// [-2] void valueChanged(const class QString &)
extern "C"
void C_ZN8QSpinBox12valueChangedERK7QString(void *this_, QString* arg0) {
  ((QSpinBox*)this_)->valueChanged(*arg0);
}
//  main block end
