// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qsurfaceformat.h
// dst-file: /src/gui/qsurfaceformat.cxx
//

// header block begin =>
#include <qsurfaceformat.h>

extern "C" {

int QSurfaceFormat_Class_Size()
{
  return sizeof(QSurfaceFormat);
}

// QSurfaceFormat(const class QSurfaceFormat &)
QSurfaceFormat* dector_ZN14QSurfaceFormatC1ERKS_(const QSurfaceFormat & other)
{
  // static_assert(sizeof(QSurfaceFormat) == 32, "tyszerr");
  QSurfaceFormat* rthis = new QSurfaceFormat(other);
  return rthis;
}

// QSurfaceFormat(FormatOptions)
QSurfaceFormat* dector_ZN14QSurfaceFormatC1E6QFlagsINS_12FormatOptionEE(QSurfaceFormat::FormatOption options)
{
  // static_assert(sizeof(QSurfaceFormat) == 32, "tyszerr");
  QSurfaceFormat* rthis = new QSurfaceFormat(options);
  return rthis;
}

// QSurfaceFormat()
QSurfaceFormat* dector_ZN14QSurfaceFormatC1Ev()
{
  // static_assert(sizeof(QSurfaceFormat) == 32, "tyszerr");
  QSurfaceFormat* rthis = new QSurfaceFormat();
  return rthis;
}

// ~QSurfaceFormat()
void dedtor_ZN14QSurfaceFormatD0Ev(QSurfaceFormat* that)
{
  QSurfaceFormat* rthis = (QSurfaceFormat*)that;
  delete rthis;
}

  // proto:  bool QSurfaceFormat::stereo();
bool demth_ZNK14QSurfaceFormat6stereoEv(void *that)
{
  QSurfaceFormat *cthat = (QSurfaceFormat *)that;
  return cthat->stereo();
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

