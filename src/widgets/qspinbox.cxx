// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qspinbox.h
// dst-file: /src/widgets/qspinbox.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qspinbox.h>


#include <qstring.h>
#include <qvalidator.h>
// <= header block end

// main block begin =>
void __keep_qspinbox_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSpinBox_Class_Size()
{
  return sizeof(QSpinBox);
}

extern "C"
int QDoubleSpinBox_Class_Size()
{
  return sizeof(QDoubleSpinBox);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 76, column 10>
//   // proto:  void QSpinBox::setMinimum(int min);
// _ZN8QSpinBox10setMinimumEi setMinimum(int)
extern "C"
void
C_ZN8QSpinBox10setMinimumEi(void *qthis,
int arg1) {
  ((QSpinBox*)qthis)->setMinimum(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 70, column 13>
//   // proto:  QString QSpinBox::cleanText();
// _ZNK8QSpinBox9cleanTextEv cleanText()
extern "C"
QString*
C_ZNK8QSpinBox9cleanTextEv(void *qthis) {
  auto ret =
  ((QSpinBox*)qthis)->cleanText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 62, column 9>
//   // proto:  int QSpinBox::value();
// _ZNK8QSpinBox5valueEv value()
extern "C"
int
C_ZNK8QSpinBox5valueEv(void *qthis) {
  auto ret =
  ((QSpinBox*)qthis)->value();
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QSpinBox::~QSpinBox();
extern "C"
void C_ZN8QSpinBoxD2Ev(void *qthis) {
  delete (QSpinBox*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 79, column 10>
//   // proto:  void QSpinBox::setMaximum(int max);
// _ZN8QSpinBox10setMaximumEi setMaximum(int)
extern "C"
void
C_ZN8QSpinBox10setMaximumEi(void *qthis,
int arg1) {
  ((QSpinBox*)qthis)->setMaximum(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 99, column 10>
//   // proto:  void QSpinBox::valueChanged(const QString & );
// _ZN8QSpinBox12valueChangedERK7QString valueChanged(const class QString &)
extern "C"
void
C_ZN8QSpinBox12valueChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QSpinBox*)qthis)->valueChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 95, column 10>
//   // proto:  void QSpinBox::setValue(int val);
// _ZN8QSpinBox8setValueEi setValue(int)
extern "C"
void
C_ZN8QSpinBox8setValueEi(void *qthis,
int arg1) {
  ((QSpinBox*)qthis)->setValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 84, column 10>
//   // proto:  void QSpinBox::setDisplayIntegerBase(int base);
// _ZN8QSpinBox21setDisplayIntegerBaseEi setDisplayIntegerBase(int)
extern "C"
void
C_ZN8QSpinBox21setDisplayIntegerBaseEi(void *qthis,
int arg1) {
  ((QSpinBox*)qthis)->setDisplayIntegerBase(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 59, column 14>
//   // proto:  void QSpinBox::QSpinBox(QWidget * parent);
extern "C"
QSpinBox*
C_ZN8QSpinBoxC2EP7QWidget(QWidget * arg1) {
  auto ret = new QSpinBox(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 72, column 9>
//   // proto:  int QSpinBox::singleStep();
// _ZNK8QSpinBox10singleStepEv singleStep()
extern "C"
int
C_ZNK8QSpinBox10singleStepEv(void *qthis) {
  auto ret =
  ((QSpinBox*)qthis)->singleStep();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 83, column 9>
//   // proto:  int QSpinBox::displayIntegerBase();
// _ZNK8QSpinBox18displayIntegerBaseEv displayIntegerBase()
extern "C"
int
C_ZNK8QSpinBox18displayIntegerBaseEv(void *qthis) {
  auto ret =
  ((QSpinBox*)qthis)->displayIntegerBase();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 68, column 10>
//   // proto:  void QSpinBox::setSuffix(const QString & suffix);
// _ZN8QSpinBox9setSuffixERK7QString setSuffix(const class QString &)
extern "C"
void
C_ZN8QSpinBox9setSuffixERK7QString(void *qthis,
const QString* arg1) {
  ((QSpinBox*)qthis)->setSuffix(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 78, column 9>
//   // proto:  int QSpinBox::maximum();
// _ZNK8QSpinBox7maximumEv maximum()
extern "C"
int
C_ZNK8QSpinBox7maximumEv(void *qthis) {
  auto ret =
  ((QSpinBox*)qthis)->maximum();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 65, column 10>
//   // proto:  void QSpinBox::setPrefix(const QString & prefix);
// _ZN8QSpinBox9setPrefixERK7QString setPrefix(const class QString &)
extern "C"
void
C_ZN8QSpinBox9setPrefixERK7QString(void *qthis,
const QString* arg1) {
  ((QSpinBox*)qthis)->setPrefix(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 98, column 10>
//   // proto:  void QSpinBox::valueChanged(int );
// _ZN8QSpinBox12valueChangedEi valueChanged(int)
extern "C"
void
C_ZN8QSpinBox12valueChangedEi(void *qthis,
int arg1) {
  ((QSpinBox*)qthis)->valueChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 64, column 13>
//   // proto:  QString QSpinBox::prefix();
// _ZNK8QSpinBox6prefixEv prefix()
extern "C"
QString*
C_ZNK8QSpinBox6prefixEv(void *qthis) {
  auto ret =
  ((QSpinBox*)qthis)->prefix();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 47, column 5>
//   // proto:  const QMetaObject * QSpinBox::metaObject();
// _ZNK8QSpinBox10metaObjectEv metaObject()
extern "C"
void*
C_ZNK8QSpinBox10metaObjectEv(void *qthis) {
  auto ret =
  ((QSpinBox*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 67, column 13>
//   // proto:  QString QSpinBox::suffix();
// _ZNK8QSpinBox6suffixEv suffix()
extern "C"
QString*
C_ZNK8QSpinBox6suffixEv(void *qthis) {
  auto ret =
  ((QSpinBox*)qthis)->suffix();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 75, column 9>
//   // proto:  int QSpinBox::minimum();
// _ZNK8QSpinBox7minimumEv minimum()
extern "C"
int
C_ZNK8QSpinBox7minimumEv(void *qthis) {
  auto ret =
  ((QSpinBox*)qthis)->minimum();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 73, column 10>
//   // proto:  void QSpinBox::setSingleStep(int val);
// _ZN8QSpinBox13setSingleStepEi setSingleStep(int)
extern "C"
void
C_ZN8QSpinBox13setSingleStepEi(void *qthis,
int arg1) {
  ((QSpinBox*)qthis)->setSingleStep(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 81, column 10>
//   // proto:  void QSpinBox::setRange(int min, int max);
// _ZN8QSpinBox8setRangeEii setRange(int, int)
extern "C"
void
C_ZN8QSpinBox8setRangeEii(void *qthis,
int arg1,
int arg2) {
  ((QSpinBox*)qthis)->setRange(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 157, column 10>
//   // proto:  void QDoubleSpinBox::valueChanged(const QString & );
// _ZN14QDoubleSpinBox12valueChangedERK7QString valueChanged(const class QString &)
extern "C"
void
C_ZN14QDoubleSpinBox12valueChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QDoubleSpinBox*)qthis)->valueChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 149, column 21>
//   // proto:  QString QDoubleSpinBox::textFromValue(double val);
// _ZNK14QDoubleSpinBox13textFromValueEd textFromValue(double)
extern "C"
QString*
C_ZNK14QDoubleSpinBox13textFromValueEd(void *qthis,
double arg1) {
  auto ret =
  ((QDoubleSpinBox*)qthis)->textFromValue(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 134, column 10>
//   // proto:  void QDoubleSpinBox::setSingleStep(double val);
// _ZN14QDoubleSpinBox13setSingleStepEd setSingleStep(double)
extern "C"
void
C_ZN14QDoubleSpinBox13setSingleStepEd(void *qthis,
double arg1) {
  ((QDoubleSpinBox*)qthis)->setSingleStep(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 136, column 12>
//   // proto:  double QDoubleSpinBox::minimum();
// _ZNK14QDoubleSpinBox7minimumEv minimum()
extern "C"
double
C_ZNK14QDoubleSpinBox7minimumEv(void *qthis) {
  auto ret =
  ((QDoubleSpinBox*)qthis)->minimum();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 148, column 20>
//   // proto:  double QDoubleSpinBox::valueFromText(const QString & text);
// _ZNK14QDoubleSpinBox13valueFromTextERK7QString valueFromText(const class QString &)
extern "C"
double
C_ZNK14QDoubleSpinBox13valueFromTextERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QDoubleSpinBox*)qthis)->valueFromText(*((const QString*)arg1));
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 156, column 10>
//   // proto:  void QDoubleSpinBox::valueChanged(double );
// _ZN14QDoubleSpinBox12valueChangedEd valueChanged(double)
extern "C"
void
C_ZN14QDoubleSpinBox12valueChangedEd(void *qthis,
double arg1) {
  ((QDoubleSpinBox*)qthis)->valueChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 109, column 5>
//   // proto:  const QMetaObject * QDoubleSpinBox::metaObject();
// _ZNK14QDoubleSpinBox10metaObjectEv metaObject()
extern "C"
void*
C_ZNK14QDoubleSpinBox10metaObjectEv(void *qthis) {
  auto ret =
  ((QDoubleSpinBox*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 147, column 31>
//   // proto:  QValidator::State QDoubleSpinBox::validate(QString & input, int & pos);
// _ZNK14QDoubleSpinBox8validateER7QStringRi validate(class QString &, int &)
extern "C"
QValidator::State
C_ZNK14QDoubleSpinBox8validateER7QStringRi(void *qthis,
QString* arg1,
int* arg2) {
  auto ret =
  ((QDoubleSpinBox*)qthis)->validate(*((QString*)arg1),
*((int*)arg2));
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 153, column 10>
//   // proto:  void QDoubleSpinBox::setValue(double val);
// _ZN14QDoubleSpinBox8setValueEd setValue(double)
extern "C"
void
C_ZN14QDoubleSpinBox8setValueEd(void *qthis,
double arg1) {
  ((QDoubleSpinBox*)qthis)->setValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 129, column 10>
//   // proto:  void QDoubleSpinBox::setSuffix(const QString & suffix);
// _ZN14QDoubleSpinBox9setSuffixERK7QString setSuffix(const class QString &)
extern "C"
void
C_ZN14QDoubleSpinBox9setSuffixERK7QString(void *qthis,
const QString* arg1) {
  ((QDoubleSpinBox*)qthis)->setSuffix(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 144, column 9>
//   // proto:  int QDoubleSpinBox::decimals();
// _ZNK14QDoubleSpinBox8decimalsEv decimals()
extern "C"
int
C_ZNK14QDoubleSpinBox8decimalsEv(void *qthis) {
  auto ret =
  ((QDoubleSpinBox*)qthis)->decimals();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 125, column 13>
//   // proto:  QString QDoubleSpinBox::prefix();
// _ZNK14QDoubleSpinBox6prefixEv prefix()
extern "C"
QString*
C_ZNK14QDoubleSpinBox6prefixEv(void *qthis) {
  auto ret =
  ((QDoubleSpinBox*)qthis)->prefix();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 133, column 12>
//   // proto:  double QDoubleSpinBox::singleStep();
// _ZNK14QDoubleSpinBox10singleStepEv singleStep()
extern "C"
double
C_ZNK14QDoubleSpinBox10singleStepEv(void *qthis) {
  auto ret =
  ((QDoubleSpinBox*)qthis)->singleStep();
  return ret; // 0 TypeKind.DOUBLE
}
//   // proto:  void QDoubleSpinBox::~QDoubleSpinBox();
extern "C"
void C_ZN14QDoubleSpinBoxD2Ev(void *qthis) {
  delete (QDoubleSpinBox*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 150, column 18>
//   // proto:  void QDoubleSpinBox::fixup(QString & str);
// _ZNK14QDoubleSpinBox5fixupER7QString fixup(class QString &)
extern "C"
void
C_ZNK14QDoubleSpinBox5fixupER7QString(void *qthis,
QString* arg1) {
  ((QDoubleSpinBox*)qthis)->fixup(*((QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 126, column 10>
//   // proto:  void QDoubleSpinBox::setPrefix(const QString & prefix);
// _ZN14QDoubleSpinBox9setPrefixERK7QString setPrefix(const class QString &)
extern "C"
void
C_ZN14QDoubleSpinBox9setPrefixERK7QString(void *qthis,
const QString* arg1) {
  ((QDoubleSpinBox*)qthis)->setPrefix(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 131, column 13>
//   // proto:  QString QDoubleSpinBox::cleanText();
// _ZNK14QDoubleSpinBox9cleanTextEv cleanText()
extern "C"
QString*
C_ZNK14QDoubleSpinBox9cleanTextEv(void *qthis) {
  auto ret =
  ((QDoubleSpinBox*)qthis)->cleanText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 137, column 10>
//   // proto:  void QDoubleSpinBox::setMinimum(double min);
// _ZN14QDoubleSpinBox10setMinimumEd setMinimum(double)
extern "C"
void
C_ZN14QDoubleSpinBox10setMinimumEd(void *qthis,
double arg1) {
  ((QDoubleSpinBox*)qthis)->setMinimum(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 140, column 10>
//   // proto:  void QDoubleSpinBox::setMaximum(double max);
// _ZN14QDoubleSpinBox10setMaximumEd setMaximum(double)
extern "C"
void
C_ZN14QDoubleSpinBox10setMaximumEd(void *qthis,
double arg1) {
  ((QDoubleSpinBox*)qthis)->setMaximum(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 145, column 10>
//   // proto:  void QDoubleSpinBox::setDecimals(int prec);
// _ZN14QDoubleSpinBox11setDecimalsEi setDecimals(int)
extern "C"
void
C_ZN14QDoubleSpinBox11setDecimalsEi(void *qthis,
int arg1) {
  ((QDoubleSpinBox*)qthis)->setDecimals(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 123, column 12>
//   // proto:  double QDoubleSpinBox::value();
// _ZNK14QDoubleSpinBox5valueEv value()
extern "C"
double
C_ZNK14QDoubleSpinBox5valueEv(void *qthis) {
  auto ret =
  ((QDoubleSpinBox*)qthis)->value();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 142, column 10>
//   // proto:  void QDoubleSpinBox::setRange(double min, double max);
// _ZN14QDoubleSpinBox8setRangeEdd setRange(double, double)
extern "C"
void
C_ZN14QDoubleSpinBox8setRangeEdd(void *qthis,
double arg1,
double arg2) {
  ((QDoubleSpinBox*)qthis)->setRange(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 120, column 14>
//   // proto:  void QDoubleSpinBox::QDoubleSpinBox(QWidget * parent);
extern "C"
QDoubleSpinBox*
C_ZN14QDoubleSpinBoxC2EP7QWidget(QWidget * arg1) {
  auto ret = new QDoubleSpinBox(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 139, column 12>
//   // proto:  double QDoubleSpinBox::maximum();
// _ZNK14QDoubleSpinBox7maximumEv maximum()
extern "C"
double
C_ZNK14QDoubleSpinBox7maximumEv(void *qthis) {
  auto ret =
  ((QDoubleSpinBox*)qthis)->maximum();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qspinbox.h', line 128, column 13>
//   // proto:  QString QDoubleSpinBox::suffix();
// _ZNK14QDoubleSpinBox6suffixEv suffix()
extern "C"
QString*
C_ZNK14QDoubleSpinBox6suffixEv(void *qthis) {
  auto ret =
  ((QDoubleSpinBox*)qthis)->suffix();
  return new QString(ret); // 5
}
// <= ext block end

// body block begin =>
// QSpinBox_SlotProxy here
class QSpinBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSpinBox_SlotProxy():QObject(){}

public slots:
  // valueChanged(const class QString &)
  void slot_proxy_func__ZN8QSpinBox12valueChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN8QSpinBox12valueChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // valueChanged(int)
  void slot_proxy_func__ZN8QSpinBox12valueChangedEi(int arg0);
public:
  void (*slot_func__ZN8QSpinBox12valueChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QSpinBox_SlotProxy* QSpinBox_SlotProxy_new()
  {
    return new QSpinBox_SlotProxy();
  }
};

void QSpinBox_SlotProxy::slot_proxy_func__ZN8QSpinBox12valueChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN8QSpinBox12valueChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN8QSpinBox12valueChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QSpinBox_SlotProxy_connect__ZN8QSpinBox12valueChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSpinBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QSpinBox12valueChangedERK7QString = (decltype(that->slot_func__ZN8QSpinBox12valueChangedERK7QString))ffifptr;
  QObject::connect((QSpinBox*)sender, SIGNAL(valueChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN8QSpinBox12valueChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QSpinBox_SlotProxy_disconnect__ZN8QSpinBox12valueChangedERK7QString(QSpinBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QSpinBox_SlotProxy::slot_proxy_func__ZN8QSpinBox12valueChangedEi(int arg0) {
  if (this->slot_func__ZN8QSpinBox12valueChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN8QSpinBox12valueChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QSpinBox_SlotProxy_connect__ZN8QSpinBox12valueChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSpinBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QSpinBox12valueChangedEi = (decltype(that->slot_func__ZN8QSpinBox12valueChangedEi))ffifptr;
  QObject::connect((QSpinBox*)sender, SIGNAL(valueChanged(int)), that, SLOT(slot_proxy_func__ZN8QSpinBox12valueChangedEi(int arg0)));
  return that;
}
extern "C"
void QSpinBox_SlotProxy_disconnect__ZN8QSpinBox12valueChangedEi(QSpinBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QDoubleSpinBox_SlotProxy here
class QDoubleSpinBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDoubleSpinBox_SlotProxy():QObject(){}

public slots:
  // valueChanged(double)
  void slot_proxy_func__ZN14QDoubleSpinBox12valueChangedEd(double arg0);
public:
  void (*slot_func__ZN14QDoubleSpinBox12valueChangedEd)(void* rsfptr, double arg0) = NULL;
public slots:
  // valueChanged(const class QString &)
  void slot_proxy_func__ZN14QDoubleSpinBox12valueChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN14QDoubleSpinBox12valueChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qspinbox.moc"

extern "C" {
  QDoubleSpinBox_SlotProxy* QDoubleSpinBox_SlotProxy_new()
  {
    return new QDoubleSpinBox_SlotProxy();
  }
};

void QDoubleSpinBox_SlotProxy::slot_proxy_func__ZN14QDoubleSpinBox12valueChangedEd(double arg0) {
  if (this->slot_func__ZN14QDoubleSpinBox12valueChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN14QDoubleSpinBox12valueChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QDoubleSpinBox_SlotProxy_connect__ZN14QDoubleSpinBox12valueChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDoubleSpinBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QDoubleSpinBox12valueChangedEd = (decltype(that->slot_func__ZN14QDoubleSpinBox12valueChangedEd))ffifptr;
  QObject::connect((QDoubleSpinBox*)sender, SIGNAL(valueChanged(double)), that, SLOT(slot_proxy_func__ZN14QDoubleSpinBox12valueChangedEd(double arg0)));
  return that;
}
extern "C"
void QDoubleSpinBox_SlotProxy_disconnect__ZN14QDoubleSpinBox12valueChangedEd(QDoubleSpinBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDoubleSpinBox_SlotProxy::slot_proxy_func__ZN14QDoubleSpinBox12valueChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN14QDoubleSpinBox12valueChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN14QDoubleSpinBox12valueChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QDoubleSpinBox_SlotProxy_connect__ZN14QDoubleSpinBox12valueChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDoubleSpinBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QDoubleSpinBox12valueChangedERK7QString = (decltype(that->slot_func__ZN14QDoubleSpinBox12valueChangedERK7QString))ffifptr;
  QObject::connect((QDoubleSpinBox*)sender, SIGNAL(valueChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN14QDoubleSpinBox12valueChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QDoubleSpinBox_SlotProxy_disconnect__ZN14QDoubleSpinBox12valueChangedERK7QString(QDoubleSpinBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

