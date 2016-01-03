// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qbytearraymatcher.h
// dst-file: /src/core/qbytearraymatcher.cxx
//

// header block begin =>
#include <qbytearraymatcher.h>

extern "C" {

int QByteArrayMatcher_Class_Size()
{
  return sizeof(QByteArrayMatcher);
}

// QByteArrayMatcher()
QByteArrayMatcher* dector_ZN17QByteArrayMatcherC1Ev()
{
  // static_assert(sizeof(QByteArrayMatcher) == 1040, "tyszerr");
  QByteArrayMatcher* rthis = new QByteArrayMatcher();
  return rthis;
}

// QByteArrayMatcher(const char *, int)
QByteArrayMatcher* dector_ZN17QByteArrayMatcherC1EPKci(const char * pattern, int length)
{
  // static_assert(sizeof(QByteArrayMatcher) == 1040, "tyszerr");
  QByteArrayMatcher* rthis = new QByteArrayMatcher(pattern, length);
  return rthis;
}

// QByteArrayMatcher(const class QByteArray &)
QByteArrayMatcher* dector_ZN17QByteArrayMatcherC1ERK10QByteArray(const QByteArray & pattern)
{
  // static_assert(sizeof(QByteArrayMatcher) == 1040, "tyszerr");
  QByteArrayMatcher* rthis = new QByteArrayMatcher(pattern);
  return rthis;
}

// QByteArrayMatcher(const class QByteArrayMatcher &)
QByteArrayMatcher* dector_ZN17QByteArrayMatcherC1ERKS_(const QByteArrayMatcher & other)
{
  // static_assert(sizeof(QByteArrayMatcher) == 1040, "tyszerr");
  QByteArrayMatcher* rthis = new QByteArrayMatcher(other);
  return rthis;
}

// ~QByteArrayMatcher()
void dedtor_ZN17QByteArrayMatcherD0Ev(QByteArrayMatcher* that)
{
  QByteArrayMatcher* rthis = (QByteArrayMatcher*)that;
  delete rthis;
}

  // proto:  QByteArray QByteArrayMatcher::pattern();
QByteArray* demth_ZNK17QByteArrayMatcher7patternEv(void *that)
{
  QByteArrayMatcher *cthat = (QByteArrayMatcher *)that;
  auto recret = cthat->pattern();
  return new QByteArray(recret);
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

