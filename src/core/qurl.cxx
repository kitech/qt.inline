// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtCore/qurl.h
// dst-file: /src/core/qurl.cxx
//

// header block begin =>
#include <qurl.h>

extern "C" {

int QUrl_Class_Size()
{
  return sizeof(QUrl);
}

// ~QUrl()
void dedtor_ZN4QUrlD0Ev(QUrl* that)
{
  QUrl* rthis = (QUrl*)that;
  delete rthis;
}

// QUrl(const class QUrl &)
QUrl* dector_ZN4QUrlC1ERKS_(const QUrl & copy)
{
  // static_assert(sizeof(QUrl) == 32, "tyszerr");
  QUrl* rthis = new QUrl(copy);
  return rthis;
}

// QUrl()
QUrl* dector_ZN4QUrlC1Ev()
{
  // static_assert(sizeof(QUrl) == 32, "tyszerr");
  QUrl* rthis = new QUrl();
  return rthis;
}

// QUrl(const class QString &, enum QUrl::ParsingMode)
QUrl* dector_ZN4QUrlC1ERK7QStringNS_11ParsingModeE(const QString & url, QUrl::ParsingMode mode)
{
  // static_assert(sizeof(QUrl) == 32, "tyszerr");
  QUrl* rthis = new QUrl(url, mode);
  return rthis;
}

// QUrl(class QUrl &&)
QUrl* dector_ZN4QUrlC1EOS_(QUrl && other)
{
  // static_assert(sizeof(QUrl) == 32, "tyszerr");
  QUrl* rthis = new QUrl(other);
  return rthis;
}

  // proto:  void QUrl::swap(QUrl & other);
void _ZN4QUrl4swapERS_(void *that, QUrl & other)
{
  QUrl *cthat = (QUrl *)that;
   cthat->swap(other);
}

  // proto:  void QUrl::QUrl(QUrl && other);
void _ZN4QUrlC1EOS_(void *that, QUrl && other)
{
  QUrl *cthat = (QUrl *)that;
  auto _o = new(that) QUrl(other);
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

