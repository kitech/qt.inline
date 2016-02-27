// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qkeysequence.h
// dst-file: /src/gui/qkeysequence.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qkeysequence.h>


#include <qstring.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qwindowdefs.h>
// <= header block end

// main block begin =>
void __keep_qkeysequence_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 183, column 17>
//   // proto:  void QKeySequence::swap(QKeySequence & other);
if (true) {
  auto f = [](QKeySequence flythis, QKeySequence & arg1) {
    ((QKeySequence*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QKeySequence4swapERS_ swap(class QKeySequence &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QKeySequence_Class_Size()
{
  return sizeof(QKeySequence);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 195, column 10>
//   // proto:  bool QKeySequence::isDetached();
// _ZNK12QKeySequence10isDetachedEv isDetached()
extern "C"
bool
C_ZNK12QKeySequence10isDetachedEv(void *qthis) {
  auto ret =
  ((QKeySequence*)qthis)->isDetached();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 162, column 13>
//   // proto:  QString QKeySequence::toString(QKeySequence::SequenceFormat format);
// _ZNK12QKeySequence8toStringENS_14SequenceFormatE toString(enum QKeySequence::SequenceFormat)
extern "C"
QString*
C_ZNK12QKeySequence8toStringENS_14SequenceFormatE(void *qthis,
QKeySequence::SequenceFormat arg1) {
  auto ret =
  ((QKeySequence*)qthis)->toString(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 154, column 10>
//   // proto:  bool QKeySequence::isEmpty();
// _ZNK12QKeySequence7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK12QKeySequence7isEmptyEv(void *qthis) {
  auto ret =
  ((QKeySequence*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 149, column 5>
//   // proto:  void QKeySequence::QKeySequence(const QKeySequence & ks);
extern "C"
QKeySequence*
C_ZN12QKeySequenceC2ERKS_(const QKeySequence* arg1) {
  auto ret = new QKeySequence(*((const QKeySequence*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 148, column 5>
//   // proto:  void QKeySequence::QKeySequence(int k1, int k2, int k3, int k4);
extern "C"
QKeySequence*
C_ZN12QKeySequenceC2Eiiii(int arg1,
int arg2,
int arg3,
int arg4) {
  auto ret = new QKeySequence(arg1, arg2, arg3, arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 153, column 9>
//   // proto:  int QKeySequence::count();
// _ZNK12QKeySequence5countEv count()
extern "C"
int
C_ZNK12QKeySequence5countEv(void *qthis) {
  auto ret =
  ((QKeySequence*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 163, column 25>
//   // proto: static QKeySequence QKeySequence::fromString(const QString & str, QKeySequence::SequenceFormat format);
// _ZN12QKeySequence10fromStringERK7QStringNS_14SequenceFormatE fromString(const class QString &, enum QKeySequence::SequenceFormat)
extern "C"
QKeySequence*
C_ZN12QKeySequence10fromStringERK7QStringNS_14SequenceFormatE(const QString* arg1,
QKeySequence::SequenceFormat arg2) {
  auto ret =
  QKeySequence::fromString(*((const QString*)arg1),
arg2);
  return new QKeySequence(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 168, column 19>
//   // proto:  QKeySequence::SequenceMatch QKeySequence::matches(const QKeySequence & seq);
// _ZNK12QKeySequence7matchesERKS_ matches(const class QKeySequence &)
extern "C"
QKeySequence::SequenceMatch
C_ZNK12QKeySequence7matchesERKS_(void *qthis,
const QKeySequence* arg1) {
  auto ret =
  ((QKeySequence*)qthis)->matches(*((const QKeySequence*)arg1));
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 170, column 32>
//   // proto: static QList<QKeySequence> QKeySequence::keyBindings(QKeySequence::StandardKey key);
// _ZN12QKeySequence11keyBindingsENS_11StandardKeyE keyBindings(enum QKeySequence::StandardKey)
extern "C"
QList<QKeySequence>*
C_ZN12QKeySequence11keyBindingsENS_11StandardKeyE(QKeySequence::StandardKey arg1) {
  auto ret =
  QKeySequence::keyBindings(arg1);
  return new QList<QKeySequence>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 169, column 25>
//   // proto: static QKeySequence QKeySequence::mnemonic(const QString & text);
// _ZN12QKeySequence8mnemonicERK7QString mnemonic(const class QString &)
extern "C"
QKeySequence*
C_ZN12QKeySequence8mnemonicERK7QString(const QString* arg1) {
  auto ret =
  QKeySequence::mnemonic(*((const QString*)arg1));
  return new QKeySequence(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 166, column 20>
//   // proto: static QString QKeySequence::listToString(const QList<QKeySequence> & list, QKeySequence::SequenceFormat format);
// _ZN12QKeySequence12listToStringERK5QListIS_ENS_14SequenceFormatE listToString(const QList<class QKeySequence> &, enum QKeySequence::SequenceFormat)
extern "C"
QString*
C_ZN12QKeySequence12listToStringERK5QListIS_ENS_14SequenceFormatE(const QList<QKeySequence>* arg1,
QKeySequence::SequenceFormat arg2) {
  auto ret =
  QKeySequence::listToString(*((const QList<QKeySequence>*)arg1),
arg2);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 147, column 5>
//   // proto:  void QKeySequence::QKeySequence(const QString & key, QKeySequence::SequenceFormat format);
extern "C"
QKeySequence*
C_ZN12QKeySequenceC2ERK7QStringNS_14SequenceFormatE(const QString* arg1,
QKeySequence::SequenceFormat arg2) {
  auto ret = new QKeySequence(*((const QString*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 146, column 5>
//   // proto:  void QKeySequence::QKeySequence();
extern "C"
QKeySequence*
C_ZN12QKeySequenceC2Ev() {
  auto ret = new QKeySequence();
  return ret;
}
//   // proto:  void QKeySequence::~QKeySequence();
extern "C"
void C_ZN12QKeySequenceD2Ev(void *qthis) {
  delete (QKeySequence*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 183, column 17>
//   // proto:  void QKeySequence::swap(QKeySequence & other);
// _ZN12QKeySequence4swapERS_ swap(class QKeySequence &)
extern "C"
void
C_ZN12QKeySequence4swapERS_(void *qthis,
QKeySequence* arg1) {
  ((QKeySequence*)qthis)->swap(*((QKeySequence*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 150, column 5>
//   // proto:  void QKeySequence::QKeySequence(QKeySequence::StandardKey key);
extern "C"
QKeySequence*
C_ZN12QKeySequenceC2ENS_11StandardKeyE(QKeySequence::StandardKey arg1) {
  auto ret = new QKeySequence(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qkeysequence.h', line 165, column 32>
//   // proto: static QList<QKeySequence> QKeySequence::listFromString(const QString & str, QKeySequence::SequenceFormat format);
// _ZN12QKeySequence14listFromStringERK7QStringNS_14SequenceFormatE listFromString(const class QString &, enum QKeySequence::SequenceFormat)
extern "C"
QList<QKeySequence>*
C_ZN12QKeySequence14listFromStringERK7QStringNS_14SequenceFormatE(const QString* arg1,
QKeySequence::SequenceFormat arg2) {
  auto ret =
  QKeySequence::listFromString(*((const QString*)arg1),
arg2);
  return new QList<QKeySequence>(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

