// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtGui/qmovie.h
// dst-file: /src/gui/qmovie.cxx
//

// header block begin =>
#include <qmovie.h>

extern "C" {

int QMovie_Class_Size()
{
  return sizeof(QMovie);
}

// QMovie(class QObject *)
QMovie* dector_ZN6QMovieC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QMovie) == 32, "tyszerr");
  QMovie* rthis = new QMovie(parent);
  return rthis;
}

// QMovie(const class QString &, const class QByteArray &, class QObject *)
QMovie* dector_ZN6QMovieC1ERK7QStringRK10QByteArrayP7QObject(const QString & fileName, const QByteArray & format, QObject * parent)
{
  // static_assert(sizeof(QMovie) == 32, "tyszerr");
  QMovie* rthis = new QMovie(fileName, format, parent);
  return rthis;
}

// ~QMovie()
void dedtor_ZN6QMovieD0Ev(QMovie* that)
{
  QMovie* rthis = (QMovie*)that;
  delete rthis;
}

// QMovie(class QIODevice *, const class QByteArray &, class QObject *)
QMovie* dector_ZN6QMovieC1EP9QIODeviceRK10QByteArrayP7QObject(QIODevice * device, const QByteArray & format, QObject * parent)
{
  // static_assert(sizeof(QMovie) == 32, "tyszerr");
  QMovie* rthis = new QMovie(device, format, parent);
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

