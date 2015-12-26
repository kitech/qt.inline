// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtGui/qkeysequence.h
// dst-file: /src/gui/qkeysequence.cxx
//

// header block begin =>
#include <qkeysequence.h>

extern "C" {

int QKeySequence_Class_Size()
{
  return sizeof(QKeySequence);
}

// QKeySequence(const class QKeySequence &)
QKeySequence* dector_ZN12QKeySequenceC1ERKS_(const QKeySequence & ks)
{
  // static_assert(sizeof(QKeySequence) == 32, "tyszerr");
  QKeySequence* rthis = new QKeySequence(ks);
  return rthis;
}

// QKeySequence(int, int, int, int)
QKeySequence* dector_ZN12QKeySequenceC1Eiiii(int k1, int k2, int k3, int k4)
{
  // static_assert(sizeof(QKeySequence) == 32, "tyszerr");
  QKeySequence* rthis = new QKeySequence(k1, k2, k3, k4);
  return rthis;
}

// QKeySequence(const class QString &, enum QKeySequence::SequenceFormat)
QKeySequence* dector_ZN12QKeySequenceC1ERK7QStringNS_14SequenceFormatE(const QString & key, QKeySequence::SequenceFormat format)
{
  // static_assert(sizeof(QKeySequence) == 32, "tyszerr");
  QKeySequence* rthis = new QKeySequence(key, format);
  return rthis;
}

// QKeySequence()
QKeySequence* dector_ZN12QKeySequenceC1Ev()
{
  // static_assert(sizeof(QKeySequence) == 32, "tyszerr");
  QKeySequence* rthis = new QKeySequence();
  return rthis;
}

// ~QKeySequence()
void dedtor_ZN12QKeySequenceD0Ev(QKeySequence* that)
{
  QKeySequence* rthis = (QKeySequence*)that;
  delete rthis;
}

// QKeySequence(enum QKeySequence::StandardKey)
QKeySequence* dector_ZN12QKeySequenceC1ENS_11StandardKeyE(QKeySequence::StandardKey key)
{
  // static_assert(sizeof(QKeySequence) == 32, "tyszerr");
  QKeySequence* rthis = new QKeySequence(key);
  return rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

