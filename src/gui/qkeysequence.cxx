// /usr/include/qt/QtGui/qkeysequence.h
#include <qkeysequence.h>
#include <QtGui>

// /usr/include/qt/QtGui/qkeysequence.h:156
// void QKeySequence()
extern "C"
void* C_ZN12QKeySequenceC1Ev() {
  return new QKeySequence();
}
// /usr/include/qt/QtGui/qkeysequence.h:157
// void QKeySequence(const class QString &, enum QKeySequence::SequenceFormat)
extern "C"
void* C_ZN12QKeySequenceC1ERK7QStringNS_14SequenceFormatE(const QString & key, QKeySequence::SequenceFormat format) {
  return new QKeySequence(key, format);
}
// /usr/include/qt/QtGui/qkeysequence.h:158
// void QKeySequence(int, int, int, int)
extern "C"
void* C_ZN12QKeySequenceC1Eiiii(int k1, int k2, int k3, int k4) {
  return new QKeySequence(k1, k2, k3, k4);
}
// /usr/include/qt/QtGui/qkeysequence.h:160
// void QKeySequence(enum QKeySequence::StandardKey)
extern "C"
void* C_ZN12QKeySequenceC1ENS_11StandardKeyE(QKeySequence::StandardKey key) {
  return new QKeySequence(key);
}
// /usr/include/qt/QtGui/qkeysequence.h:161
// void ~QKeySequence()
extern "C"
void C_ZN12QKeySequenceD1Ev(void *this_) {
  delete (QKeySequence*)(this_);
}
// /usr/include/qt/QtGui/qkeysequence.h:163
// int count()
extern "C"
void C_ZNK12QKeySequence5countEv(void *this_) {
  /*return*/ ((QKeySequence*)this_)->count();
}
// /usr/include/qt/QtGui/qkeysequence.h:164
// bool isEmpty()
extern "C"
void C_ZNK12QKeySequence7isEmptyEv(void *this_) {
  /*return*/ ((QKeySequence*)this_)->isEmpty();
}
// /usr/include/qt/QtGui/qkeysequence.h:172
// QString toString(enum QKeySequence::SequenceFormat)
extern "C"
void C_ZNK12QKeySequence8toStringENS_14SequenceFormatE(void *this_, QKeySequence::SequenceFormat format) {
  /*return*/ ((QKeySequence*)this_)->toString(format);
}
// static
// /usr/include/qt/QtGui/qkeysequence.h:173
// QKeySequence fromString(const class QString &, enum QKeySequence::SequenceFormat)
extern "C"
void C_ZN12QKeySequence10fromStringERK7QStringNS_14SequenceFormatE(const QString & str, QKeySequence::SequenceFormat format) {
  /*return*/ QKeySequence::fromString(str, format);
}
// static
// /usr/include/qt/QtGui/qkeysequence.h:175
// QList<QKeySequence> listFromString(const class QString &, enum QKeySequence::SequenceFormat)
extern "C"
void C_ZN12QKeySequence14listFromStringERK7QStringNS_14SequenceFormatE(const QString & str, QKeySequence::SequenceFormat format) {
  /*return*/ QKeySequence::listFromString(str, format);
}
// static
// /usr/include/qt/QtGui/qkeysequence.h:176
// QString listToString(const QList<class QKeySequence> &, enum QKeySequence::SequenceFormat)
extern "C"
void C_ZN12QKeySequence12listToStringERK5QListIS_ENS_14SequenceFormatE(const QList<QKeySequence> & list, QKeySequence::SequenceFormat format) {
  /*return*/ QKeySequence::listToString(list, format);
}
// /usr/include/qt/QtGui/qkeysequence.h:178
// QKeySequence::SequenceMatch matches(const class QKeySequence &)
extern "C"
void C_ZNK12QKeySequence7matchesERKS_(void *this_, const QKeySequence & seq) {
  /*return*/ ((QKeySequence*)this_)->matches(seq);
}
// static
// /usr/include/qt/QtGui/qkeysequence.h:179
// QKeySequence mnemonic(const class QString &)
extern "C"
void C_ZN12QKeySequence8mnemonicERK7QString(const QString & text) {
  /*return*/ QKeySequence::mnemonic(text);
}
// static
// /usr/include/qt/QtGui/qkeysequence.h:180
// QList<QKeySequence> keyBindings(enum QKeySequence::StandardKey)
extern "C"
void C_ZN12QKeySequence11keyBindingsENS_11StandardKeyE(QKeySequence::StandardKey key) {
  /*return*/ QKeySequence::keyBindings(key);
}
// inline
// /usr/include/qt/QtGui/qkeysequence.h:192
// void swap(class QKeySequence &)
extern "C"
void C_ZN12QKeySequence4swapERS_(void *this_, QKeySequence & other) {
  ((QKeySequence*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qkeysequence.h:205
// bool isDetached()
extern "C"
void C_ZNK12QKeySequence10isDetachedEv(void *this_) {
  /*return*/ ((QKeySequence*)this_)->isDetached();
}