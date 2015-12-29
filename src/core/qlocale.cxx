// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qlocale.h
// dst-file: /src/core/qlocale.cxx
//

// header block begin =>
#include <qlocale.h>

extern "C" {

int QLocale_Class_Size()
{
  return sizeof(QLocale);
}

// QLocale(enum QLocale::Language, enum QLocale::Country)
QLocale* dector_ZN7QLocaleC1ENS_8LanguageENS_7CountryE(QLocale::Language language, QLocale::Country country)
{
  // static_assert(sizeof(QLocale) == 32, "tyszerr");
  QLocale* rthis = new QLocale(language, country);
  return rthis;
}

// QLocale(const class QString &)
QLocale* dector_ZN7QLocaleC1ERK7QString(const QString & name)
{
  // static_assert(sizeof(QLocale) == 32, "tyszerr");
  QLocale* rthis = new QLocale(name);
  return rthis;
}

// ~QLocale()
void dedtor_ZN7QLocaleD0Ev(QLocale* that)
{
  QLocale* rthis = (QLocale*)that;
  delete rthis;
}

// QLocale(const class QLocale &)
QLocale* dector_ZN7QLocaleC1ERKS_(const QLocale & other)
{
  // static_assert(sizeof(QLocale) == 32, "tyszerr");
  QLocale* rthis = new QLocale(other);
  return rthis;
}

// QLocale(enum QLocale::Language, enum QLocale::Script, enum QLocale::Country)
QLocale* dector_ZN7QLocaleC1ENS_8LanguageENS_6ScriptENS_7CountryE(QLocale::Language language, QLocale::Script script, QLocale::Country country)
{
  // static_assert(sizeof(QLocale) == 32, "tyszerr");
  QLocale* rthis = new QLocale(language, script, country);
  return rthis;
}

// QLocale()
QLocale* dector_ZN7QLocaleC1Ev()
{
  // static_assert(sizeof(QLocale) == 32, "tyszerr");
  QLocale* rthis = new QLocale();
  return rthis;
}

  // proto:  QString QLocale::toCurrencyString(uint , const QString & symbol);
QString* demth_ZNK7QLocale16toCurrencyStringEjRK7QString(void *that, unsigned int arg1, const QString & symbol)
{
  QLocale *cthat = (QLocale *)that;
  auto recret = cthat->toCurrencyString(arg1, symbol);
  return new QString(recret);
}

  // proto:  QString QLocale::toString(float i, char f, int prec);
QString* demth_ZNK7QLocale8toStringEfci(void *that, float i, char f, int prec)
{
  QLocale *cthat = (QLocale *)that;
  auto recret = cthat->toString(i, f, prec);
  return new QString(recret);
}

  // proto:  QString QLocale::toCurrencyString(short , const QString & symbol);
QString* demth_ZNK7QLocale16toCurrencyStringEsRK7QString(void *that, short arg1, const QString & symbol)
{
  QLocale *cthat = (QLocale *)that;
  auto recret = cthat->toCurrencyString(arg1, symbol);
  return new QString(recret);
}

  // proto:  QString QLocale::toCurrencyString(ushort , const QString & symbol);
QString* demth_ZNK7QLocale16toCurrencyStringEtRK7QString(void *that, unsigned short arg1, const QString & symbol)
{
  QLocale *cthat = (QLocale *)that;
  auto recret = cthat->toCurrencyString(arg1, symbol);
  return new QString(recret);
}

  // proto:  QString QLocale::toCurrencyString(float , const QString & symbol);
QString* demth_ZNK7QLocale16toCurrencyStringEfRK7QString(void *that, float arg1, const QString & symbol)
{
  QLocale *cthat = (QLocale *)that;
  auto recret = cthat->toCurrencyString(arg1, symbol);
  return new QString(recret);
}

  // proto:  QString QLocale::toString(int i);
QString* demth_ZNK7QLocale8toStringEi(void *that, int i)
{
  QLocale *cthat = (QLocale *)that;
  auto recret = cthat->toString(i);
  return new QString(recret);
}

  // proto:  QString QLocale::toString(uint i);
QString* demth_ZNK7QLocale8toStringEj(void *that, unsigned int i)
{
  QLocale *cthat = (QLocale *)that;
  auto recret = cthat->toString(i);
  return new QString(recret);
}

  // proto:  QString QLocale::toString(ushort i);
QString* demth_ZNK7QLocale8toStringEt(void *that, unsigned short i)
{
  QLocale *cthat = (QLocale *)that;
  auto recret = cthat->toString(i);
  return new QString(recret);
}

  // proto:  QString QLocale::toCurrencyString(int , const QString & symbol);
QString* demth_ZNK7QLocale16toCurrencyStringEiRK7QString(void *that, int arg1, const QString & symbol)
{
  QLocale *cthat = (QLocale *)that;
  auto recret = cthat->toCurrencyString(arg1, symbol);
  return new QString(recret);
}

  // proto:  QString QLocale::toString(short i);
QString* demth_ZNK7QLocale8toStringEs(void *that, short i)
{
  QLocale *cthat = (QLocale *)that;
  auto recret = cthat->toString(i);
  return new QString(recret);
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

