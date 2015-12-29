// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtGui/qfont.h
// dst-file: /src/gui/qfont.cxx
//

// header block begin =>
#include <qfont.h>

extern "C" {

int QFont_Class_Size()
{
  return sizeof(QFont);
}

// QFont(const class QString &, int, int, _Bool)
QFont* dector_ZN5QFontC1ERK7QStringiib(const QString & family, int pointSize, int weight, bool italic)
{
  // static_assert(sizeof(QFont) == 32, "tyszerr");
  QFont* rthis = new QFont(family, pointSize, weight, italic);
  return rthis;
}

// QFont(const class QFont &)
QFont* dector_ZN5QFontC1ERKS_(const QFont & arg1)
{
  // static_assert(sizeof(QFont) == 32, "tyszerr");
  QFont* rthis = new QFont(arg1);
  return rthis;
}

// ~QFont()
void dedtor_ZN5QFontD0Ev(QFont* that)
{
  QFont* rthis = (QFont*)that;
  delete rthis;
}

// QFont()
QFont* dector_ZN5QFontC1Ev()
{
  // static_assert(sizeof(QFont) == 32, "tyszerr");
  QFont* rthis = new QFont();
  return rthis;
}

// QFont(const class QFont &, class QPaintDevice *)
QFont* dector_ZN5QFontC1ERKS_P12QPaintDevice(const QFont & arg1, QPaintDevice * pd)
{
  // static_assert(sizeof(QFont) == 32, "tyszerr");
  QFont* rthis = new QFont(arg1, pd);
  return rthis;
}

  // proto:  bool QFont::italic();
bool demth_ZNK5QFont6italicEv(void *that)
{
  QFont *cthat = (QFont *)that;
  return cthat->italic();
}

  // proto:  void QFont::setItalic(bool b);
void demth_ZN5QFont9setItalicEb(void *that, bool b)
{
  QFont *cthat = (QFont *)that;
   cthat->setItalic(b);
}

  // proto:  void QFont::resolve(uint mask);
void demth_ZN5QFont7resolveEj(void *that, unsigned int mask)
{
  QFont *cthat = (QFont *)that;
   cthat->resolve(mask);
}

  // proto:  void QFont::setBold(bool );
void demth_ZN5QFont7setBoldEb(void *that, bool arg1)
{
  QFont *cthat = (QFont *)that;
   cthat->setBold(arg1);
}

  // proto:  bool QFont::bold();
bool demth_ZNK5QFont4boldEv(void *that)
{
  QFont *cthat = (QFont *)that;
  return cthat->bold();
}

  // proto:  uint QFont::resolve();
uint demth_ZNK5QFont7resolveEv(void *that)
{
  QFont *cthat = (QFont *)that;
  return cthat->resolve();
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

