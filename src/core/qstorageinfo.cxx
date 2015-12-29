// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qstorageinfo.h
// dst-file: /src/core/qstorageinfo.cxx
//

// header block begin =>
#include <qstorageinfo.h>

extern "C" {

int QStorageInfo_Class_Size()
{
  return sizeof(QStorageInfo);
}

// QStorageInfo(const class QStorageInfo &)
QStorageInfo* dector_ZN12QStorageInfoC1ERKS_(const QStorageInfo & other)
{
  // static_assert(sizeof(QStorageInfo) == 32, "tyszerr");
  QStorageInfo* rthis = new QStorageInfo(other);
  return rthis;
}

// ~QStorageInfo()
void dedtor_ZN12QStorageInfoD0Ev(QStorageInfo* that)
{
  QStorageInfo* rthis = (QStorageInfo*)that;
  delete rthis;
}

// QStorageInfo()
QStorageInfo* dector_ZN12QStorageInfoC1Ev()
{
  // static_assert(sizeof(QStorageInfo) == 32, "tyszerr");
  QStorageInfo* rthis = new QStorageInfo();
  return rthis;
}

// QStorageInfo(const class QDir &)
QStorageInfo* dector_ZN12QStorageInfoC1ERK4QDir(const QDir & dir)
{
  // static_assert(sizeof(QStorageInfo) == 32, "tyszerr");
  QStorageInfo* rthis = new QStorageInfo(dir);
  return rthis;
}

// QStorageInfo(const class QString &)
QStorageInfo* dector_ZN12QStorageInfoC1ERK7QString(const QString & path)
{
  // static_assert(sizeof(QStorageInfo) == 32, "tyszerr");
  QStorageInfo* rthis = new QStorageInfo(path);
  return rthis;
}

  // proto:  bool QStorageInfo::isRoot();
bool demth_ZNK12QStorageInfo6isRootEv(void *that)
{
  QStorageInfo *cthat = (QStorageInfo *)that;
  return cthat->isRoot();
}

  // proto:  void QStorageInfo::swap(QStorageInfo & other);
void demth_ZN12QStorageInfo4swapERS_(void *that, QStorageInfo & other)
{
  QStorageInfo *cthat = (QStorageInfo *)that;
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

