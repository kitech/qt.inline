// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qcolor.h
// dst-file: /src/gui/qcolor.cxx
//

// header block begin =>
#include <qcolor.h>

extern "C" {

int QColor_Class_Size()
{
  return sizeof(QColor);
}

// QColor()
QColor* dector_ZN6QColorC1Ev()
{
  // static_assert(sizeof(QColor) == 32, "tyszerr");
  QColor* rthis = new QColor();
  return rthis;
}

// QColor(const char *)
QColor* dector_ZN6QColorC1EPKc(const char * name)
{
  // static_assert(sizeof(QColor) == 32, "tyszerr");
  QColor* rthis = new QColor(name);
  return rthis;
}

// QColor(Qt::GlobalColor)
QColor* dector_ZN6QColorC1EN2Qt11GlobalColorE(Qt::GlobalColor color)
{
  // static_assert(sizeof(QColor) == 32, "tyszerr");
  QColor* rthis = new QColor(color);
  return rthis;
}

// QColor(const class QColor &)
QColor* dector_ZN6QColorC1ERKS_(const QColor & color)
{
  // static_assert(sizeof(QColor) == 32, "tyszerr");
  QColor* rthis = new QColor(color);
  return rthis;
}

// QColor(enum QColor::Spec)
QColor* dector_ZN6QColorC1ENS_4SpecE(QColor::Spec spec)
{
  // static_assert(sizeof(QColor) == 32, "tyszerr");
  QColor* rthis = new QColor(spec);
  return rthis;
}

// QColor(const class QString &)
QColor* dector_ZN6QColorC1ERK7QString(const QString & name)
{
  // static_assert(sizeof(QColor) == 32, "tyszerr");
  QColor* rthis = new QColor(name);
  return rthis;
}

// QColor(int, int, int, int)
QColor* dector_ZN6QColorC1Eiiii(int r, int g, int b, int a)
{
  // static_assert(sizeof(QColor) == 32, "tyszerr");
  QColor* rthis = new QColor(r, g, b, a);
  return rthis;
}

// QColor(QRgb)
QColor* dector_ZN6QColorC1Ej(unsigned int rgb)
{
  // static_assert(sizeof(QColor) == 32, "tyszerr");
  QColor* rthis = new QColor(rgb);
  return rthis;
}

  // proto:  void QColor::QColor();
void demth_ZN6QColorC1Ev(void *that)
{
  QColor *cthat = (QColor *)that;
  auto _o = new(that) QColor();
}

  // proto:  void QColor::QColor(const char * name);
void demth_ZN6QColorC1EPKc(void *that, const char * name)
{
  QColor *cthat = (QColor *)that;
  auto _o = new(that) QColor(name);
}

  // proto:  void QColor::QColor(const QColor & color);
void demth_ZN6QColorC1ERKS_(void *that, const QColor & color)
{
  QColor *cthat = (QColor *)that;
  auto _o = new(that) QColor(color);
}

  // proto:  bool QColor::isValid();
bool demth_ZNK6QColor7isValidEv(void *that)
{
  QColor *cthat = (QColor *)that;
  return cthat->isValid();
}

  // proto:  QColor QColor::darker(int f);
QColor* demth_ZNK6QColor6darkerEi(void *that, int f)
{
  QColor *cthat = (QColor *)that;
  auto recret = cthat->darker(f);
  return new QColor(recret);
}

  // proto:  QColor QColor::lighter(int f);
QColor* demth_ZNK6QColor7lighterEi(void *that, int f)
{
  QColor *cthat = (QColor *)that;
  auto recret = cthat->lighter(f);
  return new QColor(recret);
}

  // proto:  void QColor::QColor(const QString & name);
void demth_ZN6QColorC1ERK7QString(void *that, const QString & name)
{
  QColor *cthat = (QColor *)that;
  auto _o = new(that) QColor(name);
}

  // proto:  void QColor::QColor(int r, int g, int b, int a);
void demth_ZN6QColorC1Eiiii(void *that, int r, int g, int b, int a)
{
  QColor *cthat = (QColor *)that;
  auto _o = new(that) QColor(r, g, b, a);
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

