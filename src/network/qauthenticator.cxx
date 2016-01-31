#include <qvariant.h>
#include <qjsonobject.h>
#include <qstring.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qauthenticator.h
// dst-file: /src/network/qauthenticator.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qauthenticator.h>

extern "C" {

int QAuthenticator_Class_Size()
{
  return sizeof(QAuthenticator);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qauthenticator_inline_symbols() {
//   // proto:  void QAuthenticator::~QAuthenticator();
if (true) {
  delete ((QAuthenticator*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 65, column 10>
//   // proto:  void QAuthenticator::setRealm(const QString & realm);
if (true) {
  auto f = [](QAuthenticator flythis, const QString & arg1) {
    ((QAuthenticator*)0)->setRealm(arg1);
    flythis.setRealm(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QAuthenticator8setRealmERK7QString setRealm(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 61, column 13>
//   // proto:  QString QAuthenticator::password();
if (true) {
  auto f = [](QAuthenticator flythis) {
    ((QAuthenticator*)0)->password();
    flythis.password();
  };
  if (f == nullptr){}
}
// _ZNK14QAuthenticator8passwordEv password()
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 68, column 18>
//   // proto:  QVariantHash QAuthenticator::options();
if (true) {
  auto f = [](QAuthenticator flythis) {
    ((QAuthenticator*)0)->options();
    flythis.options();
  };
  if (f == nullptr){}
}
// _ZNK14QAuthenticator7optionsEv options()
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 49, column 5>
//   // proto:  void QAuthenticator::QAuthenticator();
if (true) {
  auto f = []() {
    new QAuthenticator();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 64, column 13>
//   // proto:  QString QAuthenticator::realm();
if (true) {
  auto f = [](QAuthenticator flythis) {
    ((QAuthenticator*)0)->realm();
    flythis.realm();
  };
  if (f == nullptr){}
}
// _ZNK14QAuthenticator5realmEv realm()
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 69, column 10>
//   // proto:  void QAuthenticator::setOption(const QString & opt, const QVariant & value);
if (true) {
  auto f = [](QAuthenticator flythis, const QString & arg1, const QVariant & arg2) {
    ((QAuthenticator*)0)->setOption(arg1, arg2);
    flythis.setOption(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN14QAuthenticator9setOptionERK7QStringRK8QVariant setOption(const class QString &, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 58, column 13>
//   // proto:  QString QAuthenticator::user();
if (true) {
  auto f = [](QAuthenticator flythis) {
    ((QAuthenticator*)0)->user();
    flythis.user();
  };
  if (f == nullptr){}
}
// _ZNK14QAuthenticator4userEv user()
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 52, column 5>
//   // proto:  void QAuthenticator::QAuthenticator(const QAuthenticator & other);
if (true) {
  auto f = [](const QAuthenticator & arg1) {
    new QAuthenticator(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 67, column 14>
//   // proto:  QVariant QAuthenticator::option(const QString & opt);
if (true) {
  auto f = [](QAuthenticator flythis, const QString & arg1) {
    ((QAuthenticator*)0)->option(arg1);
    flythis.option(arg1);
  };
  if (f == nullptr){}
}
// _ZNK14QAuthenticator6optionERK7QString option(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 62, column 10>
//   // proto:  void QAuthenticator::setPassword(const QString & password);
if (true) {
  auto f = [](QAuthenticator flythis, const QString & arg1) {
    ((QAuthenticator*)0)->setPassword(arg1);
    flythis.setPassword(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QAuthenticator11setPasswordERK7QString setPassword(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 59, column 10>
//   // proto:  void QAuthenticator::setUser(const QString & user);
if (true) {
  auto f = [](QAuthenticator flythis, const QString & arg1) {
    ((QAuthenticator*)0)->setUser(arg1);
    flythis.setUser(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QAuthenticator7setUserERK7QString setUser(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 72, column 10>
//   // proto:  void QAuthenticator::detach();
if (true) {
  auto f = [](QAuthenticator flythis) {
    ((QAuthenticator*)0)->detach();
    flythis.detach();
  };
  if (f == nullptr){}
}
// _ZN14QAuthenticator6detachEv detach()
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 71, column 10>
//   // proto:  bool QAuthenticator::isNull();
if (true) {
  auto f = [](QAuthenticator flythis) {
    ((QAuthenticator*)0)->isNull();
    flythis.isNull();
  };
  if (f == nullptr){}
}
// _ZNK14QAuthenticator6isNullEv isNull()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
//   // proto:  void QAuthenticator::~QAuthenticator();
extern "C"
void C_ZN14QAuthenticatorD2Ev(void *qthis) {
  delete (QAuthenticator*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 65, column 10>
//   // proto:  void QAuthenticator::setRealm(const QString & realm);
extern "C"
void C_ZN14QAuthenticator8setRealmERK7QString(void *qthis, const QString & arg1) {
  ((QAuthenticator*)qthis)->setRealm(arg1);
}
// _ZN14QAuthenticator8setRealmERK7QString setRealm(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 61, column 13>
//   // proto:  QString QAuthenticator::password();
extern "C"
void C_ZNK14QAuthenticator8passwordEv(void *qthis) {
  ((QAuthenticator*)qthis)->password();
}
// _ZNK14QAuthenticator8passwordEv password()
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 68, column 18>
//   // proto:  QVariantHash QAuthenticator::options();
extern "C"
void C_ZNK14QAuthenticator7optionsEv(void *qthis) {
  ((QAuthenticator*)qthis)->options();
}
// _ZNK14QAuthenticator7optionsEv options()
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 49, column 5>
//   // proto:  void QAuthenticator::QAuthenticator();
extern "C"
void C_ZN14QAuthenticatorC2Ev() {
  new QAuthenticator();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 64, column 13>
//   // proto:  QString QAuthenticator::realm();
extern "C"
void C_ZNK14QAuthenticator5realmEv(void *qthis) {
  ((QAuthenticator*)qthis)->realm();
}
// _ZNK14QAuthenticator5realmEv realm()
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 69, column 10>
//   // proto:  void QAuthenticator::setOption(const QString & opt, const QVariant & value);
extern "C"
void C_ZN14QAuthenticator9setOptionERK7QStringRK8QVariant(void *qthis, const QString & arg1, const QVariant & arg2) {
  ((QAuthenticator*)qthis)->setOption(arg1, arg2);
}
// _ZN14QAuthenticator9setOptionERK7QStringRK8QVariant setOption(const class QString &, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 58, column 13>
//   // proto:  QString QAuthenticator::user();
extern "C"
void C_ZNK14QAuthenticator4userEv(void *qthis) {
  ((QAuthenticator*)qthis)->user();
}
// _ZNK14QAuthenticator4userEv user()
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 52, column 5>
//   // proto:  void QAuthenticator::QAuthenticator(const QAuthenticator & other);
extern "C"
void C_ZN14QAuthenticatorC2ERKS_(const QAuthenticator & arg1) {
  new QAuthenticator(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 67, column 14>
//   // proto:  QVariant QAuthenticator::option(const QString & opt);
extern "C"
void C_ZNK14QAuthenticator6optionERK7QString(void *qthis, const QString & arg1) {
  ((QAuthenticator*)qthis)->option(arg1);
}
// _ZNK14QAuthenticator6optionERK7QString option(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 62, column 10>
//   // proto:  void QAuthenticator::setPassword(const QString & password);
extern "C"
void C_ZN14QAuthenticator11setPasswordERK7QString(void *qthis, const QString & arg1) {
  ((QAuthenticator*)qthis)->setPassword(arg1);
}
// _ZN14QAuthenticator11setPasswordERK7QString setPassword(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 59, column 10>
//   // proto:  void QAuthenticator::setUser(const QString & user);
extern "C"
void C_ZN14QAuthenticator7setUserERK7QString(void *qthis, const QString & arg1) {
  ((QAuthenticator*)qthis)->setUser(arg1);
}
// _ZN14QAuthenticator7setUserERK7QString setUser(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 72, column 10>
//   // proto:  void QAuthenticator::detach();
extern "C"
void C_ZN14QAuthenticator6detachEv(void *qthis) {
  ((QAuthenticator*)qthis)->detach();
}
// _ZN14QAuthenticator6detachEv detach()
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 71, column 10>
//   // proto:  bool QAuthenticator::isNull();
extern "C"
void C_ZNK14QAuthenticator6isNullEv(void *qthis) {
  ((QAuthenticator*)qthis)->isNull();
}
// _ZNK14QAuthenticator6isNullEv isNull()
// <= ext block end

// body block begin =>
// <= body block end

