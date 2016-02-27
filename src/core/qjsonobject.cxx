// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qjsonobject.h
// dst-file: /src/core/qjsonobject.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qjsonobject.h>


#include <qjsonvalue.h>
#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qjsonobject_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 79, column 16>
//   // proto:  int QJsonObject::length();
if (true) {
  auto f = [](QJsonObject flythis) {
    ((QJsonObject*)0)->length();
    flythis.length();
  };
  if (f == nullptr){}
}
// _ZNK11QJsonObject6lengthEv length()
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 58, column 5>
//   // proto:  void QJsonObject::QJsonObject(std::initializer_list<QPair<QString, QJsonValue> > args);
if (true) {
  auto f = [](std::initializer_list<QPair<QString, QJsonValue> > arg1) {
    new QJsonObject(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 78, column 16>
//   // proto:  int QJsonObject::count();
if (true) {
  auto f = [](QJsonObject flythis) {
    ((QJsonObject*)0)->count();
    flythis.count();
  };
  if (f == nullptr){}
}
// _ZNK11QJsonObject5countEv count()
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 204, column 17>
//   // proto:  bool QJsonObject::empty();
if (true) {
  auto f = [](QJsonObject flythis) {
    ((QJsonObject*)0)->empty();
    flythis.empty();
  };
  if (f == nullptr){}
}
// _ZNK11QJsonObject5emptyEv empty()
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 195, column 20>
//   // proto:  QJsonObject::const_iterator QJsonObject::find(const QString & key);
if (true) {
  auto f = [](QJsonObject flythis, const QString & arg1) {
    ((QJsonObject*)0)->find(arg1);
    flythis.find(arg1);
  };
  if (f == nullptr){}
}
// _ZNK11QJsonObject4findERK7QString find(const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 188, column 27>
//   // proto:  QJsonObject::const_iterator QJsonObject::constEnd();
if (true) {
  auto f = [](QJsonObject flythis) {
    ((QJsonObject*)0)->constEnd();
    flythis.constEnd();
  };
  if (f == nullptr){}
}
// _ZNK11QJsonObject8constEndEv constEnd()
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 184, column 27>
//   // proto:  QJsonObject::const_iterator QJsonObject::begin();
if (true) {
  auto f = [](QJsonObject flythis) {
    ((QJsonObject*)0)->begin();
    flythis.begin();
  };
  if (f == nullptr){}
}
// _ZNK11QJsonObject5beginEv begin()
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 183, column 21>
//   // proto:  QJsonObject::iterator QJsonObject::begin();
if (true) {
  auto f = [](QJsonObject flythis) {
    ((QJsonObject*)0)->begin();
    flythis.begin();
  };
  if (f == nullptr){}
}
// _ZN11QJsonObject5beginEv begin()
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 186, column 21>
//   // proto:  QJsonObject::iterator QJsonObject::end();
if (true) {
  auto f = [](QJsonObject flythis) {
    ((QJsonObject*)0)->end();
    flythis.end();
  };
  if (f == nullptr){}
}
// _ZN11QJsonObject3endEv end()
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 185, column 27>
//   // proto:  QJsonObject::const_iterator QJsonObject::constBegin();
if (true) {
  auto f = [](QJsonObject flythis) {
    ((QJsonObject*)0)->constBegin();
    flythis.constBegin();
  };
  if (f == nullptr){}
}
// _ZNK11QJsonObject10constBeginEv constBegin()
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 187, column 27>
//   // proto:  QJsonObject::const_iterator QJsonObject::end();
if (true) {
  auto f = [](QJsonObject flythis) {
    ((QJsonObject*)0)->end();
    flythis.end();
  };
  if (f == nullptr){}
}
// _ZNK11QJsonObject3endEv end()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QJsonObject_Class_Size()
{
  return sizeof(QJsonObject);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 80, column 10>
//   // proto:  bool QJsonObject::isEmpty();
// _ZNK11QJsonObject7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK11QJsonObject7isEmptyEv(void *qthis) {
  auto ret =
  ((QJsonObject*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 79, column 16>
//   // proto:  int QJsonObject::length();
// _ZNK11QJsonObject6lengthEv length()
extern "C"
int
C_ZNK11QJsonObject6lengthEv(void *qthis) {
  auto ret =
  ((QJsonObject*)qthis)->length();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 86, column 10>
//   // proto:  void QJsonObject::remove(const QString & key);
// _ZN11QJsonObject6removeERK7QString remove(const class QString &)
extern "C"
void
C_ZN11QJsonObject6removeERK7QString(void *qthis,
const QString* arg1) {
  ((QJsonObject*)qthis)->remove(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 58, column 5>
//   // proto:  void QJsonObject::QJsonObject(std::initializer_list<QPair<QString, QJsonValue> > args);
extern "C"
QJsonObject*
C_ZN11QJsonObjectC2ESt16initializer_listI5QPairI7QString10QJsonValueEE(std::initializer_list<QPair<QString, QJsonValue> >* arg1) {
  auto ret = new QJsonObject(*((std::initializer_list<QPair<QString, QJsonValue> >*)arg1));
  return ret;
}
//   // proto:  void QJsonObject::~QJsonObject();
extern "C"
void C_ZN11QJsonObjectD2Ev(void *qthis) {
  delete (QJsonObject*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 82, column 16>
//   // proto:  QJsonValue QJsonObject::value(const QString & key);
// _ZNK11QJsonObject5valueERK7QString value(const class QString &)
extern "C"
QJsonValue*
C_ZNK11QJsonObject5valueERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QJsonObject*)qthis)->value(*((const QString*)arg1));
  return new QJsonValue(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 77, column 9>
//   // proto:  int QJsonObject::size();
// _ZNK11QJsonObject4sizeEv size()
extern "C"
int
C_ZNK11QJsonObject4sizeEv(void *qthis) {
  auto ret =
  ((QJsonObject*)qthis)->size();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 78, column 16>
//   // proto:  int QJsonObject::count();
// _ZNK11QJsonObject5countEv count()
extern "C"
int
C_ZNK11QJsonObject5countEv(void *qthis) {
  auto ret =
  ((QJsonObject*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 194, column 14>
//   // proto:  QJsonObject::iterator QJsonObject::find(const QString & key);
// _ZN11QJsonObject4findERK7QString find(const class QString &)
extern "C"
QJsonObject::iterator*
C_ZN11QJsonObject4findERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QJsonObject*)qthis)->find(*((const QString*)arg1));
  return new QJsonObject::iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 204, column 17>
//   // proto:  bool QJsonObject::empty();
// _ZNK11QJsonObject5emptyEv empty()
extern "C"
bool
C_ZNK11QJsonObject5emptyEv(void *qthis) {
  auto ret =
  ((QJsonObject*)qthis)->empty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 87, column 16>
//   // proto:  QJsonValue QJsonObject::take(const QString & key);
// _ZN11QJsonObject4takeERK7QString take(const class QString &)
extern "C"
QJsonValue*
C_ZN11QJsonObject4takeERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QJsonObject*)qthis)->take(*((const QString*)arg1));
  return new QJsonValue(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 195, column 20>
//   // proto:  QJsonObject::const_iterator QJsonObject::find(const QString & key);
// _ZNK11QJsonObject4findERK7QString find(const class QString &)
extern "C"
QJsonObject::const_iterator*
C_ZNK11QJsonObject4findERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QJsonObject*)qthis)->find(*((const QString*)arg1));
  return new QJsonObject::const_iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 74, column 18>
//   // proto:  QVariantHash QJsonObject::toVariantHash();
// _ZNK11QJsonObject13toVariantHashEv toVariantHash()
extern "C"
QHash<QString, QVariant>*
C_ZNK11QJsonObject13toVariantHashEv(void *qthis) {
  auto ret =
  ((QJsonObject*)qthis)->toVariantHash();
  return new QHash<QString, QVariant>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 188, column 27>
//   // proto:  QJsonObject::const_iterator QJsonObject::constEnd();
// _ZNK11QJsonObject8constEndEv constEnd()
extern "C"
QJsonObject::const_iterator*
C_ZNK11QJsonObject8constEndEv(void *qthis) {
  auto ret =
  ((QJsonObject*)qthis)->constEnd();
  return new QJsonObject::const_iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 189, column 14>
//   // proto:  QJsonObject::iterator QJsonObject::erase(QJsonObject::iterator it);
// _ZN11QJsonObject5eraseENS_8iteratorE erase(class QJsonObject::iterator)
extern "C"
QJsonObject::iterator*
C_ZN11QJsonObject5eraseENS_8iteratorE(void *qthis,
QJsonObject::iterator* arg1) {
  auto ret =
  ((QJsonObject*)qthis)->erase(*((QJsonObject::iterator*)arg1));
  return new QJsonObject::iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 196, column 20>
//   // proto:  QJsonObject::const_iterator QJsonObject::constFind(const QString & key);
// _ZNK11QJsonObject9constFindERK7QString constFind(const class QString &)
extern "C"
QJsonObject::const_iterator*
C_ZNK11QJsonObject9constFindERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QJsonObject*)qthis)->constFind(*((const QString*)arg1));
  return new QJsonObject::const_iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 184, column 27>
//   // proto:  QJsonObject::const_iterator QJsonObject::begin();
// _ZNK11QJsonObject5beginEv begin()
extern "C"
QJsonObject::const_iterator*
C_ZNK11QJsonObject5beginEv(void *qthis) {
  auto ret =
  ((QJsonObject*)qthis)->begin();
  return new QJsonObject::const_iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 71, column 24>
//   // proto: static QJsonObject QJsonObject::fromVariantMap(const QVariantMap & map);
// _ZN11QJsonObject14fromVariantMapERK4QMapI7QString8QVariantE fromVariantMap(const QVariantMap &)
extern "C"
QJsonObject*
C_ZN11QJsonObject14fromVariantMapERK4QMapI7QString8QVariantE(const QVariantMap* arg1) {
  auto ret =
  QJsonObject::fromVariantMap(*((const QVariantMap*)arg1));
  return new QJsonObject(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 183, column 21>
//   // proto:  QJsonObject::iterator QJsonObject::begin();
// _ZN11QJsonObject5beginEv begin()
extern "C"
QJsonObject::iterator*
C_ZN11QJsonObject5beginEv(void *qthis) {
  auto ret =
  ((QJsonObject*)qthis)->begin();
  return new QJsonObject::iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 186, column 21>
//   // proto:  QJsonObject::iterator QJsonObject::end();
// _ZN11QJsonObject3endEv end()
extern "C"
QJsonObject::iterator*
C_ZN11QJsonObject3endEv(void *qthis) {
  auto ret =
  ((QJsonObject*)qthis)->end();
  return new QJsonObject::iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 76, column 17>
//   // proto:  QStringList QJsonObject::keys();
// _ZNK11QJsonObject4keysEv keys()
extern "C"
QStringList*
C_ZNK11QJsonObject4keysEv(void *qthis) {
  auto ret =
  ((QJsonObject*)qthis)->keys();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 88, column 10>
//   // proto:  bool QJsonObject::contains(const QString & key);
// _ZNK11QJsonObject8containsERK7QString contains(const class QString &)
extern "C"
bool
C_ZNK11QJsonObject8containsERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QJsonObject*)qthis)->contains(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 73, column 24>
//   // proto: static QJsonObject QJsonObject::fromVariantHash(const QVariantHash & map);
// _ZN11QJsonObject15fromVariantHashERK5QHashI7QString8QVariantE fromVariantHash(const QVariantHash &)
extern "C"
QJsonObject*
C_ZN11QJsonObject15fromVariantHashERK5QHashI7QString8QVariantE(const QVariantHash* arg1) {
  auto ret =
  QJsonObject::fromVariantHash(*((const QVariantHash*)arg1));
  return new QJsonObject(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 185, column 27>
//   // proto:  QJsonObject::const_iterator QJsonObject::constBegin();
// _ZNK11QJsonObject10constBeginEv constBegin()
extern "C"
QJsonObject::const_iterator*
C_ZNK11QJsonObject10constBeginEv(void *qthis) {
  auto ret =
  ((QJsonObject*)qthis)->constBegin();
  return new QJsonObject::const_iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 55, column 5>
//   // proto:  void QJsonObject::QJsonObject();
extern "C"
QJsonObject*
C_ZN11QJsonObjectC2Ev() {
  auto ret = new QJsonObject();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 68, column 5>
//   // proto:  void QJsonObject::QJsonObject(const QJsonObject & other);
extern "C"
QJsonObject*
C_ZN11QJsonObjectC2ERKS_(const QJsonObject* arg1) {
  auto ret = new QJsonObject(*((const QJsonObject*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 197, column 14>
//   // proto:  QJsonObject::iterator QJsonObject::insert(const QString & key, const QJsonValue & value);
// _ZN11QJsonObject6insertERK7QStringRK10QJsonValue insert(const class QString &, const class QJsonValue &)
extern "C"
QJsonObject::iterator*
C_ZN11QJsonObject6insertERK7QStringRK10QJsonValue(void *qthis,
const QString* arg1,
const QJsonValue* arg2) {
  auto ret =
  ((QJsonObject*)qthis)->insert(*((const QString*)arg1),
*((const QJsonValue*)arg2));
  return new QJsonObject::iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 187, column 27>
//   // proto:  QJsonObject::const_iterator QJsonObject::end();
// _ZNK11QJsonObject3endEv end()
extern "C"
QJsonObject::const_iterator*
C_ZNK11QJsonObject3endEv(void *qthis) {
  auto ret =
  ((QJsonObject*)qthis)->end();
  return new QJsonObject::const_iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsonobject.h', line 72, column 17>
//   // proto:  QVariantMap QJsonObject::toVariantMap();
// _ZNK11QJsonObject12toVariantMapEv toVariantMap()
extern "C"
QMap<QString, QVariant>*
C_ZNK11QJsonObject12toVariantMapEv(void *qthis) {
  auto ret =
  ((QJsonObject*)qthis)->toVariantMap();
  return new QMap<QString, QVariant>(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

