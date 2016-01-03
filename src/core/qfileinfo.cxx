// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qfileinfo.h
// dst-file: /src/core/qfileinfo.cxx
//

// header block begin =>
#include <qfileinfo.h>

extern "C" {

int QFileInfo_Class_Size()
{
  return sizeof(QFileInfo);
}

// QFileInfo()
QFileInfo* dector_ZN9QFileInfoC1Ev()
{
  // static_assert(sizeof(QFileInfo) == 32, "tyszerr");
  QFileInfo* rthis = new QFileInfo();
  return rthis;
}

// QFileInfo(const class QString &)
QFileInfo* dector_ZN9QFileInfoC1ERK7QString(const QString & file)
{
  // static_assert(sizeof(QFileInfo) == 32, "tyszerr");
  QFileInfo* rthis = new QFileInfo(file);
  return rthis;
}

// QFileInfo(const class QFile &)
QFileInfo* dector_ZN9QFileInfoC1ERK5QFile(const QFile & file)
{
  // static_assert(sizeof(QFileInfo) == 32, "tyszerr");
  QFileInfo* rthis = new QFileInfo(file);
  return rthis;
}

// QFileInfo(const class QFileInfo &)
QFileInfo* dector_ZN9QFileInfoC1ERKS_(const QFileInfo & fileinfo)
{
  // static_assert(sizeof(QFileInfo) == 32, "tyszerr");
  QFileInfo* rthis = new QFileInfo(fileinfo);
  return rthis;
}

// QFileInfo(const class QDir &, const class QString &)
QFileInfo* dector_ZN9QFileInfoC1ERK4QDirRK7QString(const QDir & dir, const QString & file)
{
  // static_assert(sizeof(QFileInfo) == 32, "tyszerr");
  QFileInfo* rthis = new QFileInfo(dir, file);
  return rthis;
}

// ~QFileInfo()
void dedtor_ZN9QFileInfoD0Ev(QFileInfo* that)
{
  QFileInfo* rthis = (QFileInfo*)that;
  delete rthis;
}

// QFileInfo(class QFileInfoPrivate *)
QFileInfo* dector_ZN9QFileInfoC1EP16QFileInfoPrivate(QFileInfoPrivate * d)
{
  // static_assert(sizeof(QFileInfo) == 32, "tyszerr");
  QFileInfo* rthis = new QFileInfo(d);
  return rthis;
}

  // proto:  QString QFileInfo::symLinkTarget();
QString* demth_ZNK9QFileInfo13symLinkTargetEv(void *that)
{
  QFileInfo *cthat = (QFileInfo *)that;
  auto recret = cthat->symLinkTarget();
  return new QString(recret);
}

  // proto:  bool QFileInfo::isAbsolute();
bool demth_ZNK9QFileInfo10isAbsoluteEv(void *that)
{
  QFileInfo *cthat = (QFileInfo *)that;
  return cthat->isAbsolute();
}

  // proto:  void QFileInfo::swap(QFileInfo & other);
void demth_ZN9QFileInfo4swapERS_(void *that, QFileInfo & other)
{
  QFileInfo *cthat = (QFileInfo *)that;
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

