// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtGui/qpicture.h
// dst-file: /src/gui/qpicture.cxx
//

// header block begin =>
#include <qpicture.h>

extern "C" {

// QPictureIO(const class QString &, const char *)
QPictureIO* dector_ZN10QPictureIOC1ERK7QStringPKc(const QString & fileName, const char * format)
{
  // static_assert(sizeof(QPictureIO) == 32, "tyszerr");
  QPictureIO* rthis = new QPictureIO(fileName, format);
  return rthis;
}

// ~QPictureIO()
void dedtor_ZN10QPictureIOD0Ev(QPictureIO* that)
{
  QPictureIO* rthis = (QPictureIO*)that;
  delete rthis;
}

// QPictureIO(class QIODevice *, const char *)
QPictureIO* dector_ZN10QPictureIOC1EP9QIODevicePKc(QIODevice * ioDevice, const char * format)
{
  // static_assert(sizeof(QPictureIO) == 32, "tyszerr");
  QPictureIO* rthis = new QPictureIO(ioDevice, format);
  return rthis;
}

// QPictureIO()
QPictureIO* dector_ZN10QPictureIOC1Ev()
{
  // static_assert(sizeof(QPictureIO) == 32, "tyszerr");
  QPictureIO* rthis = new QPictureIO();
  return rthis;
}

// QPicture(int)
QPicture* dector_ZN8QPictureC1Ei(int formatVersion)
{
  // static_assert(sizeof(QPicture) == 32, "tyszerr");
  QPicture* rthis = new QPicture(formatVersion);
  return rthis;
}

// QPicture(const class QPicture &)
QPicture* dector_ZN8QPictureC1ERKS_(const QPicture & arg1)
{
  // static_assert(sizeof(QPicture) == 32, "tyszerr");
  QPicture* rthis = new QPicture(arg1);
  return rthis;
}

// ~QPicture()
void dedtor_ZN8QPictureD0Ev(QPicture* that)
{
  QPicture* rthis = (QPicture*)that;
  delete rthis;
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

