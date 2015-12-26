// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtGui/qpicture.h
// dst-file: /src/gui/qpicture.cxx
//

// header block begin =>
#include <qpicture.h>

extern "C" {

int QPictureIO_Class_Size()
{
  return sizeof(QPictureIO);
}

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

int QPicture_Class_Size()
{
  return sizeof(QPicture);
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

  // proto:  void QPicture::swap(QPicture & other);
void demth_ZN8QPicture4swapERS_(void *that, QPicture & other)
{
  QPicture *cthat = (QPicture *)that;
   cthat->swap(other);
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

