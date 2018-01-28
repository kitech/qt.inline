//  header block begin
// /usr/include/qt/QtGui/qkeysequence.h
#include <qkeysequence.h>
#include <QtGui>

// QKeySequence is pure virtual: false
//  header block end

//  main block begin

class MyQKeySequence : public QKeySequence {
public:
MyQKeySequence() : QKeySequence() {}
MyQKeySequence(const QString & key, QKeySequence::SequenceFormat format) : QKeySequence(key, format) {}
MyQKeySequence(int k1, int k2, int k3, int k4) : QKeySequence(k1, k2, k3, k4) {}
MyQKeySequence(QKeySequence::StandardKey key) : QKeySequence(key) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:156
// [-2] void QKeySequence()
extern "C"
void* C_ZN12QKeySequenceC1Ev() {
  (MyQKeySequence*)(0);
  return  new MyQKeySequence();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:157
// [-2] void QKeySequence(const class QString &, enum QKeySequence::SequenceFormat)
extern "C"
void* C_ZN12QKeySequenceC1ERK7QStringNS_14SequenceFormatE(const QString & key, QKeySequence::SequenceFormat format) {
  (MyQKeySequence*)(0);
  return  new MyQKeySequence(key, format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:158
// [-2] void QKeySequence(int, int, int, int)
extern "C"
void* C_ZN12QKeySequenceC1Eiiii(int k1, int k2, int k3, int k4) {
  (MyQKeySequence*)(0);
  return  new MyQKeySequence(k1, k2, k3, k4);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:160
// [-2] void QKeySequence(enum QKeySequence::StandardKey)
extern "C"
void* C_ZN12QKeySequenceC1ENS_11StandardKeyE(QKeySequence::StandardKey key) {
  (MyQKeySequence*)(0);
  return  new MyQKeySequence(key);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:161
// [-2] void ~QKeySequence()
extern "C"
void C_ZN12QKeySequenceD1Ev(void *this_) {
  delete (QKeySequence*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:163
// [4] int count()
extern "C"
int C_ZNK12QKeySequence5countEv(void *this_) {
  return (int)((QKeySequence*)this_)->count();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:164
// [1] bool isEmpty()
extern "C"
bool C_ZNK12QKeySequence7isEmptyEv(void *this_) {
  return (bool)((QKeySequence*)this_)->isEmpty();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:172
// [8] QString toString(enum QKeySequence::SequenceFormat)
extern "C"
void* C_ZNK12QKeySequence8toStringENS_14SequenceFormatE(void *this_, QKeySequence::SequenceFormat format) {
  auto rv = ((QKeySequence*)this_)->toString(format);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:173
// [8] QKeySequence fromString(const class QString &, enum QKeySequence::SequenceFormat)
extern "C"
void* C_ZN12QKeySequence10fromStringERK7QStringNS_14SequenceFormatE(const QString & str, QKeySequence::SequenceFormat format) {
  auto rv = QKeySequence::fromString(str, format);
return new QKeySequence(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:178
// [4] QKeySequence::SequenceMatch matches(const class QKeySequence &)
extern "C"
QKeySequence::SequenceMatch C_ZNK12QKeySequence7matchesERKS_(void *this_, const QKeySequence & seq) {
  return (QKeySequence::SequenceMatch)((QKeySequence*)this_)->matches(seq);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:179
// [8] QKeySequence mnemonic(const class QString &)
extern "C"
void* C_ZN12QKeySequence8mnemonicERK7QString(const QString & text) {
  auto rv = QKeySequence::mnemonic(text);
return new QKeySequence(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:192
// [-2] void swap(class QKeySequence &)
extern "C"
void C_ZN12QKeySequence4swapERS_(void *this_, QKeySequence & other) {
  ((QKeySequence*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:205
// [1] bool isDetached()
extern "C"
bool C_ZNK12QKeySequence10isDetachedEv(void *this_) {
  return (bool)((QKeySequence*)this_)->isDetached();
}
//  main block end
