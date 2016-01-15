#include <qregexp.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qvalidator.h
// dst-file: /src/gui/qvalidator.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qvalidator.h>

extern "C" {

int QRegularExpressionValidator_Class_Size()
{
  return sizeof(QRegularExpressionValidator);
}

int QDoubleValidator_Class_Size()
{
  return sizeof(QDoubleValidator);
}

int QIntValidator_Class_Size()
{
  return sizeof(QIntValidator);
}

int QValidator_Class_Size()
{
  return sizeof(QValidator);
}

int QRegExpValidator_Class_Size()
{
  return sizeof(QRegExpValidator);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qvalidator_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 145, column 9>
//   // proto:  int QDoubleValidator::decimals();
if (false) {
  auto f = []() {
    ((QDoubleValidator*)0)->decimals();
  };
}
// _ZNK16QDoubleValidator8decimalsEv decimals()
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 144, column 12>
//   // proto:  double QDoubleValidator::top();
if (false) {
  auto f = []() {
    ((QDoubleValidator*)0)->top();
  };
}
// _ZNK16QDoubleValidator3topEv top()
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 143, column 12>
//   // proto:  double QDoubleValidator::bottom();
if (false) {
  auto f = []() {
    ((QDoubleValidator*)0)->bottom();
  };
}
// _ZNK16QDoubleValidator6bottomEv bottom()
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 101, column 9>
//   // proto:  int QIntValidator::top();
if (false) {
  auto f = []() {
    ((QIntValidator*)0)->top();
  };
}
// _ZNK13QIntValidator3topEv top()
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 100, column 9>
//   // proto:  int QIntValidator::bottom();
if (false) {
  auto f = []() {
    ((QIntValidator*)0)->bottom();
  };
}
// _ZNK13QIntValidator6bottomEv bottom()
// <SourceLocation file '/usr/include/qt/QtGui/qvalidator.h', line 177, column 20>
//   // proto:  const QRegExp & QRegExpValidator::regExp();
if (false) {
  auto f = []() {
    ((QRegExpValidator*)0)->regExp();
  };
}
// _ZNK16QRegExpValidator6regExpEv regExp()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
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

