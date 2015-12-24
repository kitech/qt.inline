// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qfileinfo.h
// dst-file: /src/core/qfileinfo.cxx
//

// header block begin =>
#include <qfileinfo.h>

extern "C" {

  // proto:  QString QFileInfo::symLinkTarget();
QString* _ZNK9QFileInfo13symLinkTargetEv(void *that)

{
  QFileInfo *cthat = (QFileInfo *)that;
  auto recret = cthat->symLinkTarget();
  return new QString(recret);
}

  // proto:  bool QFileInfo::isAbsolute();
bool _ZNK9QFileInfo10isAbsoluteEv(void *that)

{
  QFileInfo *cthat = (QFileInfo *)that;
  return cthat->isAbsolute();
}

  // proto:  void QFileInfo::swap(QFileInfo & other);
void _ZN9QFileInfo4swapERS_(void *that, QFileInfo & other)

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

