// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qvalidator.h
// dst-file: /src/gui/qvalidator.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qvalidator.h>


#include <qregularexpression.h>
#include <qlocale.h>
#include <qregexp.h>
// <= header block end

// main block begin =>
void __keep_qvalidator_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 145, column 9>
//   // proto:  int QDoubleValidator::decimals();
if (true) {
  auto f = [](QDoubleValidator flythis) {
    ((QDoubleValidator*)0)->decimals();
    flythis.decimals();
  };
  if (f == nullptr){}
}
// _ZNK16QDoubleValidator8decimalsEv decimals()
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 144, column 12>
//   // proto:  double QDoubleValidator::top();
if (true) {
  auto f = [](QDoubleValidator flythis) {
    ((QDoubleValidator*)0)->top();
    flythis.top();
  };
  if (f == nullptr){}
}
// _ZNK16QDoubleValidator3topEv top()
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 143, column 12>
//   // proto:  double QDoubleValidator::bottom();
if (true) {
  auto f = [](QDoubleValidator flythis) {
    ((QDoubleValidator*)0)->bottom();
    flythis.bottom();
  };
  if (f == nullptr){}
}
// _ZNK16QDoubleValidator6bottomEv bottom()
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 101, column 9>
//   // proto:  int QIntValidator::top();
if (true) {
  auto f = [](QIntValidator flythis) {
    ((QIntValidator*)0)->top();
    flythis.top();
  };
  if (f == nullptr){}
}
// _ZNK13QIntValidator3topEv top()
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 100, column 9>
//   // proto:  int QIntValidator::bottom();
if (true) {
  auto f = [](QIntValidator flythis) {
    ((QIntValidator*)0)->bottom();
    flythis.bottom();
  };
  if (f == nullptr){}
}
// _ZNK13QIntValidator6bottomEv bottom()
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 177, column 20>
//   // proto:  const QRegExp & QRegExpValidator::regExp();
if (true) {
  auto f = [](QRegExpValidator flythis) {
    ((QRegExpValidator*)0)->regExp();
    flythis.regExp();
  };
  if (f == nullptr){}
}
// _ZNK16QRegExpValidator6regExpEv regExp()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QRegularExpressionValidator_Class_Size()
{
  return sizeof(QRegularExpressionValidator);
}

extern "C"
int QDoubleValidator_Class_Size()
{
  return sizeof(QDoubleValidator);
}

extern "C"
int QIntValidator_Class_Size()
{
  return sizeof(QIntValidator);
}

extern "C"
int QValidator_Class_Size()
{
  return sizeof(QValidator);
}

extern "C"
int QRegExpValidator_Class_Size()
{
  return sizeof(QRegExpValidator);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 206, column 24>
//   // proto:  QRegularExpression QRegularExpressionValidator::regularExpression();
// _ZNK27QRegularExpressionValidator17regularExpressionEv regularExpression()
extern "C"
QRegularExpression*
C_ZNK27QRegularExpressionValidator17regularExpressionEv(void *qthis) {
  auto ret =
  ((QRegularExpressionValidator*)qthis)->regularExpression();
  return new QRegularExpression(ret); // 5
}
//   // proto:  void QRegularExpressionValidator::~QRegularExpressionValidator();
extern "C"
void C_ZN27QRegularExpressionValidatorD2Ev(void *qthis) {
  delete (QRegularExpressionValidator*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 201, column 14>
//   // proto:  void QRegularExpressionValidator::QRegularExpressionValidator(const QRegularExpression & re, QObject * parent);
extern "C"
QRegularExpressionValidator*
C_ZN27QRegularExpressionValidatorC2ERK18QRegularExpressionP7QObject(const QRegularExpression* arg1,
QObject * arg2) {
  auto ret = new QRegularExpressionValidator(*((const QRegularExpression*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 196, column 5>
//   // proto:  const QMetaObject * QRegularExpressionValidator::metaObject();
// _ZNK27QRegularExpressionValidator10metaObjectEv metaObject()
extern "C"
void*
C_ZNK27QRegularExpressionValidator10metaObjectEv(void *qthis) {
  auto ret =
  ((QRegularExpressionValidator*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 200, column 14>
//   // proto:  void QRegularExpressionValidator::QRegularExpressionValidator(QObject * parent);
extern "C"
QRegularExpressionValidator*
C_ZN27QRegularExpressionValidatorC2EP7QObject(QObject * arg1) {
  auto ret = new QRegularExpressionValidator(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 209, column 10>
//   // proto:  void QRegularExpressionValidator::setRegularExpression(const QRegularExpression & re);
// _ZN27QRegularExpressionValidator20setRegularExpressionERK18QRegularExpression setRegularExpression(const class QRegularExpression &)
extern "C"
void
C_ZN27QRegularExpressionValidator20setRegularExpressionERK18QRegularExpression(void *qthis,
const QRegularExpression* arg1) {
  ((QRegularExpressionValidator*)qthis)->setRegularExpression(*((const QRegularExpression*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 212, column 10>
//   // proto:  void QRegularExpressionValidator::regularExpressionChanged(const QRegularExpression & re);
// _ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression regularExpressionChanged(const class QRegularExpression &)
extern "C"
void
C_ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(void *qthis,
const QRegularExpression* arg1) {
  ((QRegularExpressionValidator*)qthis)->regularExpressionChanged(*((const QRegularExpression*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 204, column 31>
//   // proto:  QValidator::State QRegularExpressionValidator::validate(QString & input, int & pos);
// _ZNK27QRegularExpressionValidator8validateER7QStringRi validate(class QString &, int &)
extern "C"
QValidator::State
C_ZNK27QRegularExpressionValidator8validateER7QStringRi(void *qthis,
QString* arg1,
int* arg2) {
  auto ret =
  ((QRegularExpressionValidator*)qthis)->validate(*((QString*)arg1),
*((int*)arg2));
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 135, column 23>
//   // proto:  QValidator::State QDoubleValidator::validate(QString & , int & );
// _ZNK16QDoubleValidator8validateER7QStringRi validate(class QString &, int &)
extern "C"
QValidator::State
C_ZNK16QDoubleValidator8validateER7QStringRi(void *qthis,
QString* arg1,
int* arg2) {
  auto ret =
  ((QDoubleValidator*)qthis)->validate(*((QString*)arg1),
*((int*)arg2));
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 146, column 14>
//   // proto:  QDoubleValidator::Notation QDoubleValidator::notation();
// _ZNK16QDoubleValidator8notationEv notation()
extern "C"
QDoubleValidator::Notation
C_ZNK16QDoubleValidator8notationEv(void *qthis) {
  auto ret =
  ((QDoubleValidator*)qthis)->notation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 145, column 9>
//   // proto:  int QDoubleValidator::decimals();
// _ZNK16QDoubleValidator8decimalsEv decimals()
extern "C"
int
C_ZNK16QDoubleValidator8decimalsEv(void *qthis) {
  auto ret =
  ((QDoubleValidator*)qthis)->decimals();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 151, column 10>
//   // proto:  void QDoubleValidator::decimalsChanged(int decimals);
// _ZN16QDoubleValidator15decimalsChangedEi decimalsChanged(int)
extern "C"
void
C_ZN16QDoubleValidator15decimalsChangedEi(void *qthis,
int arg1) {
  ((QDoubleValidator*)qthis)->decimalsChanged(arg1);
}
//   // proto:  void QDoubleValidator::~QDoubleValidator();
extern "C"
void C_ZN16QDoubleValidatorD2Ev(void *qthis) {
  delete (QDoubleValidator*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 144, column 12>
//   // proto:  double QDoubleValidator::top();
// _ZNK16QDoubleValidator3topEv top()
extern "C"
double
C_ZNK16QDoubleValidator3topEv(void *qthis) {
  auto ret =
  ((QDoubleValidator*)qthis)->top();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 152, column 10>
//   // proto:  void QDoubleValidator::notationChanged(QDoubleValidator::Notation notation);
// _ZN16QDoubleValidator15notationChangedENS_8NotationE notationChanged(class QDoubleValidator::Notation)
extern "C"
void
C_ZN16QDoubleValidator15notationChangedENS_8NotationE(void *qthis,
QDoubleValidator::Notation* arg1) {
  ((QDoubleValidator*)qthis)->notationChanged(*((QDoubleValidator::Notation*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 149, column 10>
//   // proto:  void QDoubleValidator::bottomChanged(double bottom);
// _ZN16QDoubleValidator13bottomChangedEd bottomChanged(double)
extern "C"
void
C_ZN16QDoubleValidator13bottomChangedEd(void *qthis,
double arg1) {
  ((QDoubleValidator*)qthis)->bottomChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 143, column 12>
//   // proto:  double QDoubleValidator::bottom();
// _ZNK16QDoubleValidator6bottomEv bottom()
extern "C"
double
C_ZNK16QDoubleValidator6bottomEv(void *qthis) {
  auto ret =
  ((QDoubleValidator*)qthis)->bottom();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 140, column 10>
//   // proto:  void QDoubleValidator::setDecimals(int );
// _ZN16QDoubleValidator11setDecimalsEi setDecimals(int)
extern "C"
void
C_ZN16QDoubleValidator11setDecimalsEi(void *qthis,
int arg1) {
  ((QDoubleValidator*)qthis)->setDecimals(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 138, column 10>
//   // proto:  void QDoubleValidator::setBottom(double );
// _ZN16QDoubleValidator9setBottomEd setBottom(double)
extern "C"
void
C_ZN16QDoubleValidator9setBottomEd(void *qthis,
double arg1) {
  ((QDoubleValidator*)qthis)->setBottom(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 137, column 18>
//   // proto:  void QDoubleValidator::setRange(double bottom, double top, int decimals);
// _ZN16QDoubleValidator8setRangeEddi setRange(double, double, int)
extern "C"
void
C_ZN16QDoubleValidator8setRangeEddi(void *qthis,
double arg1,
double arg2,
int arg3) {
  ((QDoubleValidator*)qthis)->setRange(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 141, column 10>
//   // proto:  void QDoubleValidator::setNotation(QDoubleValidator::Notation );
// _ZN16QDoubleValidator11setNotationENS_8NotationE setNotation(enum QDoubleValidator::Notation)
extern "C"
void
C_ZN16QDoubleValidator11setNotationENS_8NotationE(void *qthis,
QDoubleValidator::Notation arg1) {
  ((QDoubleValidator*)qthis)->setNotation(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 126, column 14>
//   // proto:  void QDoubleValidator::QDoubleValidator(QObject * parent);
extern "C"
QDoubleValidator*
C_ZN16QDoubleValidatorC2EP7QObject(QObject * arg1) {
  auto ret = new QDoubleValidator(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 127, column 5>
//   // proto:  void QDoubleValidator::QDoubleValidator(double bottom, double top, int decimals, QObject * parent);
extern "C"
QDoubleValidator*
C_ZN16QDoubleValidatorC2EddiP7QObject(double arg1,
double arg2,
int arg3,
QObject * arg4) {
  auto ret = new QDoubleValidator(arg1,
arg2,
arg3,
arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 150, column 10>
//   // proto:  void QDoubleValidator::topChanged(double top);
// _ZN16QDoubleValidator10topChangedEd topChanged(double)
extern "C"
void
C_ZN16QDoubleValidator10topChangedEd(void *qthis,
double arg1) {
  ((QDoubleValidator*)qthis)->topChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 119, column 5>
//   // proto:  const QMetaObject * QDoubleValidator::metaObject();
// _ZNK16QDoubleValidator10metaObjectEv metaObject()
extern "C"
void*
C_ZNK16QDoubleValidator10metaObjectEv(void *qthis) {
  auto ret =
  ((QDoubleValidator*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 139, column 10>
//   // proto:  void QDoubleValidator::setTop(double );
// _ZN16QDoubleValidator6setTopEd setTop(double)
extern "C"
void
C_ZN16QDoubleValidator6setTopEd(void *qthis,
double arg1) {
  ((QDoubleValidator*)qthis)->setTop(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 89, column 14>
//   // proto:  void QIntValidator::QIntValidator(QObject * parent);
extern "C"
QIntValidator*
C_ZN13QIntValidatorC2EP7QObject(QObject * arg1) {
  auto ret = new QIntValidator(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 96, column 10>
//   // proto:  void QIntValidator::setBottom(int );
// _ZN13QIntValidator9setBottomEi setBottom(int)
extern "C"
void
C_ZN13QIntValidator9setBottomEi(void *qthis,
int arg1) {
  ((QIntValidator*)qthis)->setBottom(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 98, column 18>
//   // proto:  void QIntValidator::setRange(int bottom, int top);
// _ZN13QIntValidator8setRangeEii setRange(int, int)
extern "C"
void
C_ZN13QIntValidator8setRangeEii(void *qthis,
int arg1,
int arg2) {
  ((QIntValidator*)qthis)->setRange(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 84, column 5>
//   // proto:  const QMetaObject * QIntValidator::metaObject();
// _ZNK13QIntValidator10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QIntValidator10metaObjectEv(void *qthis) {
  auto ret =
  ((QIntValidator*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 101, column 9>
//   // proto:  int QIntValidator::top();
// _ZNK13QIntValidator3topEv top()
extern "C"
int
C_ZNK13QIntValidator3topEv(void *qthis) {
  auto ret =
  ((QIntValidator*)qthis)->top();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 94, column 10>
//   // proto:  void QIntValidator::fixup(QString & input);
// _ZNK13QIntValidator5fixupER7QString fixup(class QString &)
extern "C"
void
C_ZNK13QIntValidator5fixupER7QString(void *qthis,
QString* arg1) {
  ((QIntValidator*)qthis)->fixup(*((QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 93, column 23>
//   // proto:  QValidator::State QIntValidator::validate(QString & , int & );
// _ZNK13QIntValidator8validateER7QStringRi validate(class QString &, int &)
extern "C"
QValidator::State
C_ZNK13QIntValidator8validateER7QStringRi(void *qthis,
QString* arg1,
int* arg2) {
  auto ret =
  ((QIntValidator*)qthis)->validate(*((QString*)arg1),
*((int*)arg2));
  return ret; // 0 TypeKind.ENUM
}
//   // proto:  void QIntValidator::~QIntValidator();
extern "C"
void C_ZN13QIntValidatorD2Ev(void *qthis) {
  delete (QIntValidator*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 103, column 10>
//   // proto:  void QIntValidator::bottomChanged(int bottom);
// _ZN13QIntValidator13bottomChangedEi bottomChanged(int)
extern "C"
void
C_ZN13QIntValidator13bottomChangedEi(void *qthis,
int arg1) {
  ((QIntValidator*)qthis)->bottomChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 104, column 10>
//   // proto:  void QIntValidator::topChanged(int top);
// _ZN13QIntValidator10topChangedEi topChanged(int)
extern "C"
void
C_ZN13QIntValidator10topChangedEi(void *qthis,
int arg1) {
  ((QIntValidator*)qthis)->topChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 97, column 10>
//   // proto:  void QIntValidator::setTop(int );
// _ZN13QIntValidator6setTopEi setTop(int)
extern "C"
void
C_ZN13QIntValidator6setTopEi(void *qthis,
int arg1) {
  ((QIntValidator*)qthis)->setTop(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 100, column 9>
//   // proto:  int QIntValidator::bottom();
// _ZNK13QIntValidator6bottomEv bottom()
extern "C"
int
C_ZNK13QIntValidator6bottomEv(void *qthis) {
  auto ret =
  ((QIntValidator*)qthis)->bottom();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 90, column 5>
//   // proto:  void QIntValidator::QIntValidator(int bottom, int top, QObject * parent);
extern "C"
QIntValidator*
C_ZN13QIntValidatorC2EiiP7QObject(int arg1,
int arg2,
QObject * arg3) {
  auto ret = new QIntValidator(arg1,
arg2,
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 53, column 5>
//   // proto:  const QMetaObject * QValidator::metaObject();
// _ZNK10QValidator10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QValidator10metaObjectEv(void *qthis) {
  auto ret =
  ((QValidator*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 64, column 10>
//   // proto:  void QValidator::setLocale(const QLocale & locale);
// _ZN10QValidator9setLocaleERK7QLocale setLocale(const class QLocale &)
extern "C"
void
C_ZN10QValidator9setLocaleERK7QLocale(void *qthis,
const QLocale* arg1) {
  ((QValidator*)qthis)->setLocale(*((const QLocale*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 68, column 18>
//   // proto:  void QValidator::fixup(QString & );
// _ZNK10QValidator5fixupER7QString fixup(class QString &)
extern "C"
void
C_ZNK10QValidator5fixupER7QString(void *qthis,
QString* arg1) {
  ((QValidator*)qthis)->fixup(*((QString*)arg1));
}
//   // proto:  void QValidator::~QValidator();
extern "C"
void C_ZN10QValidatorD2Ev(void *qthis) {
  delete (QValidator*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 55, column 14>
//   // proto:  void QValidator::QValidator(QObject * parent);
extern "C"
QValidator*
C_ZN10QValidatorC2EP7QObject(QObject * arg1) {
  // auto ret = new QValidator(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 65, column 13>
//   // proto:  QLocale QValidator::locale();
// _ZNK10QValidator6localeEv locale()
extern "C"
QLocale*
C_ZNK10QValidator6localeEv(void *qthis) {
  auto ret =
  ((QValidator*)qthis)->locale();
  return new QLocale(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 71, column 10>
//   // proto:  void QValidator::changed();
// _ZN10QValidator7changedEv changed()
extern "C"
void
C_ZN10QValidator7changedEv(void *qthis) {
  ((QValidator*)qthis)->changed();
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 67, column 19>
//   // proto:  QValidator::State QValidator::validate(QString & , int & );
// _ZNK10QValidator8validateER7QStringRi validate(class QString &, int &)
extern "C"
QValidator::State
C_ZNK10QValidator8validateER7QStringRi(void *qthis,
QString* arg1,
int* arg2) {
  auto ret =
  ((QValidator*)qthis)->validate(*((QString*)arg1),
*((int*)arg2));
  return ret; // 0 TypeKind.ENUM
}
//   // proto:  void QRegExpValidator::~QRegExpValidator();
extern "C"
void C_ZN16QRegExpValidatorD2Ev(void *qthis) {
  delete (QRegExpValidator*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 177, column 20>
//   // proto:  const QRegExp & QRegExpValidator::regExp();
// _ZNK16QRegExpValidator6regExpEv regExp()
extern "C"
const QRegExp*
C_ZNK16QRegExpValidator6regExpEv(void *qthis) {
  auto& ret =
  ((QRegExpValidator*)qthis)->regExp();
  return new const QRegExp(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 166, column 5>
//   // proto:  const QMetaObject * QRegExpValidator::metaObject();
// _ZNK16QRegExpValidator10metaObjectEv metaObject()
extern "C"
void*
C_ZNK16QRegExpValidator10metaObjectEv(void *qthis) {
  auto ret =
  ((QRegExpValidator*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 171, column 14>
//   // proto:  void QRegExpValidator::QRegExpValidator(const QRegExp & rx, QObject * parent);
extern "C"
QRegExpValidator*
C_ZN16QRegExpValidatorC2ERK7QRegExpP7QObject(const QRegExp* arg1,
QObject * arg2) {
  auto ret = new QRegExpValidator(*((const QRegExp*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 176, column 10>
//   // proto:  void QRegExpValidator::setRegExp(const QRegExp & rx);
// _ZN16QRegExpValidator9setRegExpERK7QRegExp setRegExp(const class QRegExp &)
extern "C"
void
C_ZN16QRegExpValidator9setRegExpERK7QRegExp(void *qthis,
const QRegExp* arg1) {
  ((QRegExpValidator*)qthis)->setRegExp(*((const QRegExp*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 170, column 14>
//   // proto:  void QRegExpValidator::QRegExpValidator(QObject * parent);
extern "C"
QRegExpValidator*
C_ZN16QRegExpValidatorC2EP7QObject(QObject * arg1) {
  auto ret = new QRegExpValidator(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 180, column 10>
//   // proto:  void QRegExpValidator::regExpChanged(const QRegExp & regExp);
// _ZN16QRegExpValidator13regExpChangedERK7QRegExp regExpChanged(const class QRegExp &)
extern "C"
void
C_ZN16QRegExpValidator13regExpChangedERK7QRegExp(void *qthis,
const QRegExp* arg1) {
  ((QRegExpValidator*)qthis)->regExpChanged(*((const QRegExp*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 174, column 31>
//   // proto:  QValidator::State QRegExpValidator::validate(QString & input, int & pos);
// _ZNK16QRegExpValidator8validateER7QStringRi validate(class QString &, int &)
extern "C"
QValidator::State
C_ZNK16QRegExpValidator8validateER7QStringRi(void *qthis,
QString* arg1,
int* arg2) {
  auto ret =
  ((QRegExpValidator*)qthis)->validate(*((QString*)arg1),
*((int*)arg2));
  return ret; // 0 TypeKind.ENUM
}
// <= ext block end

// body block begin =>
// QRegularExpressionValidator_SlotProxy here
class QRegularExpressionValidator_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QRegularExpressionValidator_SlotProxy():QObject(){}

public slots:
  // regularExpressionChanged(const class QRegularExpression &)
  void slot_proxy_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(const QRegularExpression & arg0);
public:
  void (*slot_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression)(void* rsfptr, const QRegularExpression & arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QRegularExpressionValidator_SlotProxy* QRegularExpressionValidator_SlotProxy_new()
  {
    return new QRegularExpressionValidator_SlotProxy();
  }
};

void QRegularExpressionValidator_SlotProxy::slot_proxy_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(const QRegularExpression & arg0) {
  if (this->slot_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression != NULL) {
    // do smth...
    this->slot_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(this->rsfptr, arg0);
  }
}
extern "C"
void* QRegularExpressionValidator_SlotProxy_connect__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QRegularExpressionValidator_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression = (decltype(that->slot_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression))ffifptr;
  QObject::connect((QRegularExpressionValidator*)sender, SIGNAL(regularExpressionChanged(const class QRegularExpression &)), that, SLOT(slot_proxy_func__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(const QRegularExpression & arg0)));
  return that;
}
extern "C"
void QRegularExpressionValidator_SlotProxy_disconnect__ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(QRegularExpressionValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QDoubleValidator_SlotProxy here
class QDoubleValidator_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDoubleValidator_SlotProxy():QObject(){}

public slots:
  // bottomChanged(double)
  void slot_proxy_func__ZN16QDoubleValidator13bottomChangedEd(double arg0);
public:
  void (*slot_func__ZN16QDoubleValidator13bottomChangedEd)(void* rsfptr, double arg0) = NULL;
public slots:
  // decimalsChanged(int)
  void slot_proxy_func__ZN16QDoubleValidator15decimalsChangedEi(int arg0);
public:
  void (*slot_func__ZN16QDoubleValidator15decimalsChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // notationChanged(class QDoubleValidator::Notation)
  void slot_proxy_func__ZN16QDoubleValidator15notationChangedENS_8NotationE(QDoubleValidator::Notation arg0);
public:
  void (*slot_func__ZN16QDoubleValidator15notationChangedENS_8NotationE)(void* rsfptr, QDoubleValidator::Notation arg0) = NULL;
public slots:
  // topChanged(double)
  void slot_proxy_func__ZN16QDoubleValidator10topChangedEd(double arg0);
public:
  void (*slot_func__ZN16QDoubleValidator10topChangedEd)(void* rsfptr, double arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QDoubleValidator_SlotProxy* QDoubleValidator_SlotProxy_new()
  {
    return new QDoubleValidator_SlotProxy();
  }
};

void QDoubleValidator_SlotProxy::slot_proxy_func__ZN16QDoubleValidator13bottomChangedEd(double arg0) {
  if (this->slot_func__ZN16QDoubleValidator13bottomChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN16QDoubleValidator13bottomChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QDoubleValidator_SlotProxy_connect__ZN16QDoubleValidator13bottomChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDoubleValidator_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QDoubleValidator13bottomChangedEd = (decltype(that->slot_func__ZN16QDoubleValidator13bottomChangedEd))ffifptr;
  QObject::connect((QDoubleValidator*)sender, SIGNAL(bottomChanged(double)), that, SLOT(slot_proxy_func__ZN16QDoubleValidator13bottomChangedEd(double arg0)));
  return that;
}
extern "C"
void QDoubleValidator_SlotProxy_disconnect__ZN16QDoubleValidator13bottomChangedEd(QDoubleValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDoubleValidator_SlotProxy::slot_proxy_func__ZN16QDoubleValidator15decimalsChangedEi(int arg0) {
  if (this->slot_func__ZN16QDoubleValidator15decimalsChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN16QDoubleValidator15decimalsChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QDoubleValidator_SlotProxy_connect__ZN16QDoubleValidator15decimalsChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDoubleValidator_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QDoubleValidator15decimalsChangedEi = (decltype(that->slot_func__ZN16QDoubleValidator15decimalsChangedEi))ffifptr;
  QObject::connect((QDoubleValidator*)sender, SIGNAL(decimalsChanged(int)), that, SLOT(slot_proxy_func__ZN16QDoubleValidator15decimalsChangedEi(int arg0)));
  return that;
}
extern "C"
void QDoubleValidator_SlotProxy_disconnect__ZN16QDoubleValidator15decimalsChangedEi(QDoubleValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDoubleValidator_SlotProxy::slot_proxy_func__ZN16QDoubleValidator15notationChangedENS_8NotationE(QDoubleValidator::Notation arg0) {
  if (this->slot_func__ZN16QDoubleValidator15notationChangedENS_8NotationE != NULL) {
    // do smth...
    this->slot_func__ZN16QDoubleValidator15notationChangedENS_8NotationE(this->rsfptr, arg0);
  }
}
extern "C"
void* QDoubleValidator_SlotProxy_connect__ZN16QDoubleValidator15notationChangedENS_8NotationE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDoubleValidator_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QDoubleValidator15notationChangedENS_8NotationE = (decltype(that->slot_func__ZN16QDoubleValidator15notationChangedENS_8NotationE))ffifptr;
  QObject::connect((QDoubleValidator*)sender, SIGNAL(notationChanged(class QDoubleValidator::Notation)), that, SLOT(slot_proxy_func__ZN16QDoubleValidator15notationChangedENS_8NotationE(QDoubleValidator::Notation arg0)));
  return that;
}
extern "C"
void QDoubleValidator_SlotProxy_disconnect__ZN16QDoubleValidator15notationChangedENS_8NotationE(QDoubleValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDoubleValidator_SlotProxy::slot_proxy_func__ZN16QDoubleValidator10topChangedEd(double arg0) {
  if (this->slot_func__ZN16QDoubleValidator10topChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN16QDoubleValidator10topChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QDoubleValidator_SlotProxy_connect__ZN16QDoubleValidator10topChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDoubleValidator_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QDoubleValidator10topChangedEd = (decltype(that->slot_func__ZN16QDoubleValidator10topChangedEd))ffifptr;
  QObject::connect((QDoubleValidator*)sender, SIGNAL(topChanged(double)), that, SLOT(slot_proxy_func__ZN16QDoubleValidator10topChangedEd(double arg0)));
  return that;
}
extern "C"
void QDoubleValidator_SlotProxy_disconnect__ZN16QDoubleValidator10topChangedEd(QDoubleValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QIntValidator_SlotProxy here
class QIntValidator_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QIntValidator_SlotProxy():QObject(){}

public slots:
  // topChanged(int)
  void slot_proxy_func__ZN13QIntValidator10topChangedEi(int arg0);
public:
  void (*slot_func__ZN13QIntValidator10topChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // bottomChanged(int)
  void slot_proxy_func__ZN13QIntValidator13bottomChangedEi(int arg0);
public:
  void (*slot_func__ZN13QIntValidator13bottomChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QIntValidator_SlotProxy* QIntValidator_SlotProxy_new()
  {
    return new QIntValidator_SlotProxy();
  }
};

void QIntValidator_SlotProxy::slot_proxy_func__ZN13QIntValidator10topChangedEi(int arg0) {
  if (this->slot_func__ZN13QIntValidator10topChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN13QIntValidator10topChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QIntValidator_SlotProxy_connect__ZN13QIntValidator10topChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QIntValidator_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QIntValidator10topChangedEi = (decltype(that->slot_func__ZN13QIntValidator10topChangedEi))ffifptr;
  QObject::connect((QIntValidator*)sender, SIGNAL(topChanged(int)), that, SLOT(slot_proxy_func__ZN13QIntValidator10topChangedEi(int arg0)));
  return that;
}
extern "C"
void QIntValidator_SlotProxy_disconnect__ZN13QIntValidator10topChangedEi(QIntValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QIntValidator_SlotProxy::slot_proxy_func__ZN13QIntValidator13bottomChangedEi(int arg0) {
  if (this->slot_func__ZN13QIntValidator13bottomChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN13QIntValidator13bottomChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QIntValidator_SlotProxy_connect__ZN13QIntValidator13bottomChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QIntValidator_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QIntValidator13bottomChangedEi = (decltype(that->slot_func__ZN13QIntValidator13bottomChangedEi))ffifptr;
  QObject::connect((QIntValidator*)sender, SIGNAL(bottomChanged(int)), that, SLOT(slot_proxy_func__ZN13QIntValidator13bottomChangedEi(int arg0)));
  return that;
}
extern "C"
void QIntValidator_SlotProxy_disconnect__ZN13QIntValidator13bottomChangedEi(QIntValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QValidator_SlotProxy here
class QValidator_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QValidator_SlotProxy():QObject(){}

public slots:
  // changed()
  void slot_proxy_func__ZN10QValidator7changedEv();
public:
  void (*slot_func__ZN10QValidator7changedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QValidator_SlotProxy* QValidator_SlotProxy_new()
  {
    return new QValidator_SlotProxy();
  }
};

void QValidator_SlotProxy::slot_proxy_func__ZN10QValidator7changedEv() {
  if (this->slot_func__ZN10QValidator7changedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QValidator7changedEv(this->rsfptr);
  }
}
extern "C"
void* QValidator_SlotProxy_connect__ZN10QValidator7changedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QValidator_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QValidator7changedEv = (decltype(that->slot_func__ZN10QValidator7changedEv))ffifptr;
  QObject::connect((QValidator*)sender, SIGNAL(changed()), that, SLOT(slot_proxy_func__ZN10QValidator7changedEv()));
  return that;
}
extern "C"
void QValidator_SlotProxy_disconnect__ZN10QValidator7changedEv(QValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QRegExpValidator_SlotProxy here
class QRegExpValidator_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QRegExpValidator_SlotProxy():QObject(){}

public slots:
  // regExpChanged(const class QRegExp &)
  void slot_proxy_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp(const QRegExp & arg0);
public:
  void (*slot_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp)(void* rsfptr, const QRegExp & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qvalidator.moc"

extern "C" {
  QRegExpValidator_SlotProxy* QRegExpValidator_SlotProxy_new()
  {
    return new QRegExpValidator_SlotProxy();
  }
};

void QRegExpValidator_SlotProxy::slot_proxy_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp(const QRegExp & arg0) {
  if (this->slot_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp != NULL) {
    // do smth...
    this->slot_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp(this->rsfptr, arg0);
  }
}
extern "C"
void* QRegExpValidator_SlotProxy_connect__ZN16QRegExpValidator13regExpChangedERK7QRegExp(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QRegExpValidator_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp = (decltype(that->slot_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp))ffifptr;
  QObject::connect((QRegExpValidator*)sender, SIGNAL(regExpChanged(const class QRegExp &)), that, SLOT(slot_proxy_func__ZN16QRegExpValidator13regExpChangedERK7QRegExp(const QRegExp & arg0)));
  return that;
}
extern "C"
void QRegExpValidator_SlotProxy_disconnect__ZN16QRegExpValidator13regExpChangedERK7QRegExp(QRegExpValidator_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

