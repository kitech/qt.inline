//  header block begin
// /usr/include/qt/QtGui/qkeysequence.h
#ifndef protected
#define protected public
#endif
#include <qkeysequence.h>
#include <QtGui>
#include "callback_inherit.h"

// QKeySequence is pure virtual: false
// QKeySequence has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQKeySequence : public QKeySequence {
public:
  virtual ~MyQKeySequence() {}
// void QKeySequence()
MyQKeySequence() : QKeySequence() {}
// void QKeySequence(const QString &, QKeySequence::SequenceFormat)
MyQKeySequence(const QString & key, QKeySequence::SequenceFormat format) : QKeySequence(key, format) {}
// void QKeySequence(int, int, int, int)
MyQKeySequence(int k1, int k2, int k3, int k4) : QKeySequence(k1, k2, k3, k4) {}
// void QKeySequence(const QKeySequence &)
MyQKeySequence(const QKeySequence & ks) : QKeySequence(ks) {}
// void QKeySequence(QKeySequence::StandardKey)
MyQKeySequence(QKeySequence::StandardKey key) : QKeySequence(key) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:156
// [-2] void QKeySequence()
extern "C" Q_DECL_EXPORT
void* C_ZN12QKeySequenceC2Ev() {
  return  new QKeySequence();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:157
// [-2] void QKeySequence(const QString &, QKeySequence::SequenceFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN12QKeySequenceC2ERK7QStringNS_14SequenceFormatE(QString* key, QKeySequence::SequenceFormat format) {
  return  new QKeySequence(*key, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:158
// [-2] void QKeySequence(int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QKeySequenceC2Eiiii(int k1, int k2, int k3, int k4) {
  return  new QKeySequence(k1, k2, k3, k4);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:159
// [-2] void QKeySequence(const QKeySequence &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QKeySequenceC2ERKS_(QKeySequence* ks) {
  return  new QKeySequence(*ks);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:160
// [-2] void QKeySequence(QKeySequence::StandardKey)
extern "C" Q_DECL_EXPORT
void* C_ZN12QKeySequenceC2ENS_11StandardKeyE(QKeySequence::StandardKey key) {
  return  new QKeySequence(key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:161
// [-2] void ~QKeySequence()
extern "C" Q_DECL_EXPORT
void C_ZN12QKeySequenceD2Ev(void *this_) {
  delete (QKeySequence*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:163
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK12QKeySequence5countEv(void *this_) {
  return (int)((QKeySequence*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:164
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QKeySequence7isEmptyEv(void *this_) {
  return (bool)((QKeySequence*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:172
// [8] QString toString(QKeySequence::SequenceFormat)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QKeySequence8toStringENS_14SequenceFormatE(void *this_, QKeySequence::SequenceFormat format) {
  auto rv = ((QKeySequence*)this_)->toString(format);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:173
// [8] QKeySequence fromString(const QString &, QKeySequence::SequenceFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN12QKeySequence10fromStringERK7QStringNS_14SequenceFormatE(QString* str, QKeySequence::SequenceFormat format) {
  auto rv = QKeySequence::fromString(*str, format);
return new QKeySequence(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:175
// [-2] QList<QKeySequence> listFromString(const QString &, QKeySequence::SequenceFormat)
extern "C" Q_DECL_EXPORT
QList<QKeySequence>* C_ZN12QKeySequence14listFromStringERK7QStringNS_14SequenceFormatE(QString* str, QKeySequence::SequenceFormat format) {
  auto rv = QKeySequence::listFromString(*str, format);
return new QList<QKeySequence>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:176
// [8] QString listToString(const QList<QKeySequence> &, QKeySequence::SequenceFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN12QKeySequence12listToStringERK5QListIS_ENS_14SequenceFormatE(const QList<QKeySequence> & list, QKeySequence::SequenceFormat format) {
  auto rv = QKeySequence::listToString(list, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:178
// [4] QKeySequence::SequenceMatch matches(const QKeySequence &)
extern "C" Q_DECL_EXPORT
QKeySequence::SequenceMatch C_ZNK12QKeySequence7matchesERKS_(void *this_, QKeySequence* seq) {
  return (QKeySequence::SequenceMatch)((QKeySequence*)this_)->matches(*seq);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:179
// [8] QKeySequence mnemonic(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QKeySequence8mnemonicERK7QString(QString* text) {
  auto rv = QKeySequence::mnemonic(*text);
return new QKeySequence(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:180
// [-2] QList<QKeySequence> keyBindings(QKeySequence::StandardKey)
extern "C" Q_DECL_EXPORT
QList<QKeySequence>* C_ZN12QKeySequence11keyBindingsENS_11StandardKeyE(QKeySequence::StandardKey key) {
  auto rv = QKeySequence::keyBindings(key);
return new QList<QKeySequence>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:187
// [4] int operator[](uint)
extern "C" Q_DECL_EXPORT
int C_ZNK12QKeySequenceixEj(void *this_, uint i) {
  return (int)((QKeySequence*)this_)->operator[](i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:188
// [8] QKeySequence & operator=(const QKeySequence &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QKeySequenceaSERKS_(void *this_, QKeySequence* other) {
  auto& rv = ((QKeySequence*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:190
// [8] QKeySequence & operator=(QKeySequence &&)
extern "C" Q_DECL_EXPORT
void* C_ZN12QKeySequenceaSEOS_(void *this_, QKeySequence && other) {
  auto& rv = ((QKeySequence*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qkeysequence.h:192
// [-2] void swap(QKeySequence &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN12QKeySequence4swapERS_(void *this_, QKeySequence* other) {
  ((QKeySequence*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:194
// [1] bool operator==(const QKeySequence &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QKeySequenceeqERKS_(void *this_, QKeySequence* other) {
  return (bool)((QKeySequence*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:195
// [1] bool operator!=(const QKeySequence &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QKeySequenceneERKS_(void *this_, QKeySequence* other) {
  return (bool)((QKeySequence*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:197
// [1] bool operator<(const QKeySequence &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QKeySequenceltERKS_(void *this_, QKeySequence* ks) {
  return (bool)((QKeySequence*)this_)->operator<(*ks);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:198
// [1] bool operator>(const QKeySequence &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QKeySequencegtERKS_(void *this_, QKeySequence* other) {
  return (bool)((QKeySequence*)this_)->operator>(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:200
// [1] bool operator<=(const QKeySequence &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QKeySequenceleERKS_(void *this_, QKeySequence* other) {
  return (bool)((QKeySequence*)this_)->operator<=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:202
// [1] bool operator>=(const QKeySequence &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QKeySequencegeERKS_(void *this_, QKeySequence* other) {
  return (bool)((QKeySequence*)this_)->operator>=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:205
// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QKeySequence10isDetachedEv(void *this_) {
  return (bool)((QKeySequence*)this_)->isDetached();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:223
// [8] QKeySequence::DataPtr & data_ptr()
extern "C" Q_DECL_EXPORT
void* C_ZN12QKeySequence8data_ptrEv(void *this_) {
  auto& rv = ((QKeySequence*)this_)->data_ptr();
return &rv;
}

//  main block end
