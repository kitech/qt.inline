// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/quuid.h
// dst-file: /src/core/quuid.cxx
//

// header block begin =>
#include <quuid.h>

extern "C" {

  // proto: static QUuid QUuid::createUuidV5(const QUuid & ns, const QString & baseData);
QUuid* _ZN5QUuid12createUuidV5ERKS_RK7QString(void *that, const QUuid & ns, const QString & baseData)

{
  QUuid *cthat = (QUuid *)that;
  auto recret = cthat->createUuidV5(ns, baseData);
  return new QUuid(recret);
}

  // proto: static QUuid QUuid::createUuidV3(const QUuid & ns, const QString & baseData);
QUuid* _ZN5QUuid12createUuidV3ERKS_RK7QString(void *that, const QUuid & ns, const QString & baseData)

{
  QUuid *cthat = (QUuid *)that;
  auto recret = cthat->createUuidV3(ns, baseData);
  return new QUuid(recret);
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

