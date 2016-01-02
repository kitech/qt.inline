// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qtextboundaryfinder.h
// dst-file: /src/core/qtextboundaryfinder.cxx
//

// header block begin =>
#include <qtextboundaryfinder.h>

extern "C" {

int QTextBoundaryFinder_Class_Size()
{
  return sizeof(QTextBoundaryFinder);
}

// QTextBoundaryFinder(const class QTextBoundaryFinder &)
QTextBoundaryFinder* dector_ZN19QTextBoundaryFinderC1ERKS_(const QTextBoundaryFinder & other)
{
  // static_assert(sizeof(QTextBoundaryFinder) == 48, "tyszerr");
  QTextBoundaryFinder* rthis = new QTextBoundaryFinder(other);
  return rthis;
}

// QTextBoundaryFinder()
QTextBoundaryFinder* dector_ZN19QTextBoundaryFinderC1Ev()
{
  // static_assert(sizeof(QTextBoundaryFinder) == 48, "tyszerr");
  QTextBoundaryFinder* rthis = new QTextBoundaryFinder();
  return rthis;
}

// QTextBoundaryFinder(enum QTextBoundaryFinder::BoundaryType, const class QChar *, int, unsigned char *, int)
QTextBoundaryFinder* dector_ZN19QTextBoundaryFinderC1ENS_12BoundaryTypeEPK5QChariPhi(QTextBoundaryFinder::BoundaryType type, const QChar * chars, int length, unsigned char * buffer, int bufferSize)
{
  // static_assert(sizeof(QTextBoundaryFinder) == 48, "tyszerr");
  QTextBoundaryFinder* rthis = new QTextBoundaryFinder(type, chars, length, buffer, bufferSize);
  return rthis;
}

// ~QTextBoundaryFinder()
void dedtor_ZN19QTextBoundaryFinderD0Ev(QTextBoundaryFinder* that)
{
  QTextBoundaryFinder* rthis = (QTextBoundaryFinder*)that;
  delete rthis;
}

// QTextBoundaryFinder(enum QTextBoundaryFinder::BoundaryType, const class QString &)
QTextBoundaryFinder* dector_ZN19QTextBoundaryFinderC1ENS_12BoundaryTypeERK7QString(QTextBoundaryFinder::BoundaryType type, const QString & string)
{
  // static_assert(sizeof(QTextBoundaryFinder) == 48, "tyszerr");
  QTextBoundaryFinder* rthis = new QTextBoundaryFinder(type, string);
  return rthis;
}

  // proto:  bool QTextBoundaryFinder::isValid();
bool demth_ZNK19QTextBoundaryFinder7isValidEv(void *that)
{
  QTextBoundaryFinder *cthat = (QTextBoundaryFinder *)that;
  return cthat->isValid();
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

