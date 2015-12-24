// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qdir.h
// dst-file: /src/core/qdir.cxx
//

// header block begin =>
#include <qdir.h>

extern "C" {

  // proto: static bool QDir::isAbsolutePath(const QString & path);
bool _ZN4QDir14isAbsolutePathERK7QString(void *that, const QString & path)

{
  QDir *cthat = (QDir *)that;
  return cthat->isAbsolutePath(path);
}

  // proto: static QDir QDir::root();
QDir* _ZN4QDir4rootEv(void *that)

{
  QDir *cthat = (QDir *)that;
  auto recret = cthat->root();
  return new QDir(recret);
}

  // proto: static QDir QDir::current();
QDir* _ZN4QDir7currentEv(void *that)

{
  QDir *cthat = (QDir *)that;
  auto recret = cthat->current();
  return new QDir(recret);
}

  // proto: static QDir QDir::home();
QDir* _ZN4QDir4homeEv(void *that)

{
  QDir *cthat = (QDir *)that;
  auto recret = cthat->home();
  return new QDir(recret);
}

  // proto:  void QDir::swap(QDir & other);
void _ZN4QDir4swapERS_(void *that, QDir & other)

{
  QDir *cthat = (QDir *)that;
   cthat->swap(other);
}

  // proto: static QDir QDir::temp();
QDir* _ZN4QDir4tempEv(void *that)

{
  QDir *cthat = (QDir *)that;
  auto recret = cthat->temp();
  return new QDir(recret);
}

  // proto:  bool QDir::isAbsolute();
bool _ZNK4QDir10isAbsoluteEv(void *that)

{
  QDir *cthat = (QDir *)that;
  return cthat->isAbsolute();
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

