// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qdir.h
// dst-file: /src/core/qdir.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qdir.h>


#include <qstring.h>
#include <qstringlist.h>
#include <qfileinfo.h>
#include <qglobal.h>
#include <qchar.h>
// <= header block end

// main block begin =>
void __keep_qdir_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 166, column 24>
//   // proto: static bool QDir::isAbsolutePath(const QString & path);
if (true) {
  auto f = [](QDir flythis, const QString & arg1) {
    ((QDir*)0)->isAbsolutePath(arg1);
    flythis.isAbsolutePath(arg1);
  };
  if (f == nullptr){}
}
// _ZN4QDir14isAbsolutePathERK7QString isAbsolutePath(const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 188, column 24>
//   // proto: static QDir QDir::root();
if (true) {
  auto f = [](QDir flythis) {
    ((QDir*)0)->root();
    flythis.root();
  };
  if (f == nullptr){}
}
// _ZN4QDir4rootEv root()
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 183, column 24>
//   // proto: static QDir QDir::current();
if (true) {
  auto f = [](QDir flythis) {
    ((QDir*)0)->current();
    flythis.current();
  };
  if (f == nullptr){}
}
// _ZN4QDir7currentEv current()
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 186, column 24>
//   // proto: static QDir QDir::home();
if (true) {
  auto f = [](QDir flythis) {
    ((QDir*)0)->home();
    flythis.home();
  };
  if (f == nullptr){}
}
// _ZN4QDir4homeEv home()
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 108, column 17>
//   // proto:  void QDir::swap(QDir & other);
if (true) {
  auto f = [](QDir flythis, QDir & arg1) {
    ((QDir*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN4QDir4swapERS_ swap(class QDir &)
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 190, column 24>
//   // proto: static QDir QDir::temp();
if (true) {
  auto f = [](QDir flythis) {
    ((QDir*)0)->temp();
    flythis.temp();
  };
  if (f == nullptr){}
}
// _ZN4QDir4tempEv temp()
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 168, column 17>
//   // proto:  bool QDir::isAbsolute();
if (true) {
  auto f = [](QDir flythis) {
    ((QDir*)0)->isAbsolute();
    flythis.isAbsolute();
  };
  if (f == nullptr){}
}
// _ZNK4QDir10isAbsoluteEv isAbsolute()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QDir_Class_Size()
{
  return sizeof(QDir);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 116, column 17>
//   // proto: static void QDir::addResourceSearchPath(const QString & path);
// _ZN4QDir21addResourceSearchPathERK7QString addResourceSearchPath(const class QString &)
extern "C"
void
C_ZN4QDir21addResourceSearchPathERK7QString(const QString* arg1) {
  QDir::addResourceSearchPath(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 166, column 24>
//   // proto: static bool QDir::isAbsolutePath(const QString & path);
// _ZN4QDir14isAbsolutePathERK7QString isAbsolutePath(const class QString &)
extern "C"
bool
C_ZN4QDir14isAbsolutePathERK7QString(const QString* arg1) {
  auto ret =
  QDir::isAbsolutePath(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 125, column 13>
//   // proto:  QString QDir::relativeFilePath(const QString & fileName);
// _ZNK4QDir16relativeFilePathERK7QString relativeFilePath(const class QString &)
extern "C"
QString*
C_ZNK4QDir16relativeFilePathERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QDir*)qthis)->relativeFilePath(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 191, column 20>
//   // proto: static QString QDir::tempPath();
// _ZN4QDir8tempPathEv tempPath()
extern "C"
QString*
C_ZN4QDir8tempPathEv() {
  auto ret =
  QDir::tempPath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 96, column 5>
//   // proto:  void QDir::QDir(const QString & path);
extern "C"
QDir*
C_ZN4QDirC2ERK7QString(const QString* arg1) {
  auto ret = new QDir(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 133, column 17>
//   // proto:  QStringList QDir::nameFilters();
// _ZNK4QDir11nameFiltersEv nameFilters()
extern "C"
QStringList*
C_ZNK4QDir11nameFiltersEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->nameFilters();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 130, column 10>
//   // proto:  bool QDir::cd(const QString & dirName);
// _ZN4QDir2cdERK7QString cd(const class QString &)
extern "C"
bool
C_ZN4QDir2cdERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QDir*)qthis)->cd(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 178, column 26>
//   // proto: static QFileInfoList QDir::drives();
// _ZN4QDir6drivesEv drives()
extern "C"
QList<QFileInfo>*
C_ZN4QDir6drivesEv() {
  auto ret =
  QDir::drives();
  return new QList<QFileInfo>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 182, column 17>
//   // proto: static bool QDir::setCurrent(const QString & path);
// _ZN4QDir10setCurrentERK7QString setCurrent(const class QString &)
extern "C"
bool
C_ZN4QDir10setCurrentERK7QString(const QString* arg1) {
  auto ret =
  QDir::setCurrent(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 155, column 10>
//   // proto:  bool QDir::rmdir(const QString & dirName);
// _ZNK4QDir5rmdirERK7QString rmdir(const class QString &)
extern "C"
bool
C_ZNK4QDir5rmdirERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QDir*)qthis)->rmdir(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 131, column 10>
//   // proto:  bool QDir::cdUp();
// _ZN4QDir4cdUpEv cdUp()
extern "C"
bool
C_ZN4QDir4cdUpEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->cdUp();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 113, column 13>
//   // proto:  QString QDir::absolutePath();
// _ZNK4QDir12absolutePathEv absolutePath()
extern "C"
QString*
C_ZNK4QDir12absolutePathEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->absolutePath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 118, column 17>
//   // proto: static void QDir::setSearchPaths(const QString & prefix, const QStringList & searchPaths);
// _ZN4QDir14setSearchPathsERK7QStringRK11QStringList setSearchPaths(const class QString &, const class QStringList &)
extern "C"
void
C_ZN4QDir14setSearchPathsERK7QStringRK11QStringList(const QString* arg1,
const QStringList* arg2) {
  QDir::setSearchPaths(*((const QString*)arg1),
*((const QStringList*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 124, column 13>
//   // proto:  QString QDir::absoluteFilePath(const QString & fileName);
// _ZNK4QDir16absoluteFilePathERK7QString absoluteFilePath(const class QString &)
extern "C"
QString*
C_ZNK4QDir16absoluteFilePathERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QDir*)qthis)->absoluteFilePath(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 97, column 5>
//   // proto:  void QDir::QDir(const QString & path, const QString & nameFilter, SortFlags sort, Filters filter);
extern "C"
QDir*
C_ZN4QDirC2ERK7QStringS2_6QFlagsINS_8SortFlagEES3_INS_6FilterEE(const QString* arg1,
const QString* arg2,
QDir::SortFlags arg3,
QDir::Filters arg4) {
  auto ret = new QDir(*((const QString*)arg1), *((const QString*)arg2), arg3, arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 175, column 10>
//   // proto:  bool QDir::rename(const QString & oldName, const QString & newName);
// _ZN4QDir6renameERK7QStringS2_ rename(const class QString &, const class QString &)
extern "C"
bool
C_ZN4QDir6renameERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QDir*)qthis)->rename(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 195, column 17>
//   // proto: static bool QDir::match(const QString & filter, const QString & fileName);
// _ZN4QDir5matchERK7QStringS2_ match(const class QString &, const class QString &)
extern "C"
bool
C_ZN4QDir5matchERK7QStringS2_(const QString* arg1,
const QString* arg2) {
  auto ret =
  QDir::match(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 199, column 10>
//   // proto:  void QDir::refresh();
// _ZNK4QDir7refreshEv refresh()
extern "C"
void
C_ZNK4QDir7refreshEv(void *qthis) {
  ((QDir*)qthis)->refresh();
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 154, column 10>
//   // proto:  bool QDir::mkdir(const QString & dirName);
// _ZNK4QDir5mkdirERK7QString mkdir(const class QString &)
extern "C"
bool
C_ZNK4QDir5mkdirERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QDir*)qthis)->mkdir(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 141, column 10>
//   // proto:  uint QDir::count();
// _ZNK4QDir5countEv count()
extern "C"
unsigned int
C_ZNK4QDir5countEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->count();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 188, column 24>
//   // proto: static QDir QDir::root();
// _ZN4QDir4rootEv root()
extern "C"
QDir*
C_ZN4QDir4rootEv() {
  auto ret =
  QDir::root();
  return new QDir(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 144, column 24>
//   // proto: static QStringList QDir::nameFiltersFromString(const QString & nameFilter);
// _ZN4QDir21nameFiltersFromStringERK7QString nameFiltersFromString(const class QString &)
extern "C"
QStringList*
C_ZN4QDir21nameFiltersFromStringERK7QString(const QString* arg1) {
  auto ret =
  QDir::nameFiltersFromString(*((const QString*)arg1));
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 123, column 13>
//   // proto:  QString QDir::filePath(const QString & fileName);
// _ZNK4QDir8filePathERK7QString filePath(const class QString &)
extern "C"
QString*
C_ZNK4QDir8filePathERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QDir*)qthis)->filePath(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 157, column 10>
//   // proto:  bool QDir::rmpath(const QString & dirPath);
// _ZNK4QDir6rmpathERK7QString rmpath(const class QString &)
extern "C"
bool
C_ZNK4QDir6rmpathERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QDir*)qthis)->rmpath(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 112, column 13>
//   // proto:  QString QDir::path();
// _ZNK4QDir4pathEv path()
extern "C"
QString*
C_ZNK4QDir4pathEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->path();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 127, column 20>
//   // proto: static QString QDir::toNativeSeparators(const QString & pathName);
// _ZN4QDir18toNativeSeparatorsERK7QString toNativeSeparators(const class QString &)
extern "C"
QString*
C_ZN4QDir18toNativeSeparatorsERK7QString(const QString* arg1) {
  auto ret =
  QDir::toNativeSeparators(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 198, column 20>
//   // proto: static QString QDir::cleanPath(const QString & path);
// _ZN4QDir9cleanPathERK7QString cleanPath(const class QString &)
extern "C"
QString*
C_ZN4QDir9cleanPathERK7QString(const QString* arg1) {
  auto ret =
  QDir::cleanPath(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 162, column 10>
//   // proto:  bool QDir::exists();
// _ZNK4QDir6existsEv exists()
extern "C"
bool
C_ZNK4QDir6existsEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->exists();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 174, column 10>
//   // proto:  bool QDir::remove(const QString & fileName);
// _ZN4QDir6removeERK7QString remove(const class QString &)
extern "C"
bool
C_ZN4QDir6removeERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QDir*)qthis)->remove(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QDir::~QDir();
extern "C"
void C_ZN4QDirD2Ev(void *qthis) {
  delete (QDir*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 151, column 19>
//   // proto:  QFileInfoList QDir::entryInfoList(const QStringList & nameFilters, Filters filters, SortFlags sort);
// _ZNK4QDir13entryInfoListERK11QStringList6QFlagsINS_6FilterEES3_INS_8SortFlagEE entryInfoList(const class QStringList &, Filters, SortFlags)
extern "C"
QList<QFileInfo>*
C_ZNK4QDir13entryInfoListERK11QStringList6QFlagsINS_6FilterEES3_INS_8SortFlagEE(void *qthis,
const QStringList* arg1,
QDir::Filters arg2,
QDir::SortFlags arg3) {
  auto ret =
  ((QDir*)qthis)->entryInfoList(*((const QStringList*)arg1),
arg2,
arg3);
  return new QList<QFileInfo>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 189, column 20>
//   // proto: static QString QDir::rootPath();
// _ZN4QDir8rootPathEv rootPath()
extern "C"
QString*
C_ZN4QDir8rootPathEv() {
  auto ret =
  QDir::rootPath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 183, column 24>
//   // proto: static QDir QDir::current();
// _ZN4QDir7currentEv current()
extern "C"
QDir*
C_ZN4QDir7currentEv() {
  auto ret =
  QDir::current();
  return new QDir(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 194, column 17>
//   // proto: static bool QDir::match(const QStringList & filters, const QString & fileName);
// _ZN4QDir5matchERK11QStringListRK7QString match(const class QStringList &, const class QString &)
extern "C"
bool
C_ZN4QDir5matchERK11QStringListRK7QString(const QStringList* arg1,
const QString* arg2) {
  auto ret =
  QDir::match(*((const QStringList*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 128, column 20>
//   // proto: static QString QDir::fromNativeSeparators(const QString & pathName);
// _ZN4QDir20fromNativeSeparatorsERK7QString fromNativeSeparators(const class QString &)
extern "C"
QString*
C_ZN4QDir20fromNativeSeparatorsERK7QString(const QString* arg1) {
  auto ret =
  QDir::fromNativeSeparators(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 186, column 24>
//   // proto: static QDir QDir::home();
// _ZN4QDir4homeEv home()
extern "C"
QDir*
C_ZN4QDir4homeEv() {
  auto ret =
  QDir::home();
  return new QDir(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 139, column 10>
//   // proto:  void QDir::setSorting(SortFlags sort);
// _ZN4QDir10setSortingE6QFlagsINS_8SortFlagEE setSorting(SortFlags)
extern "C"
void
C_ZN4QDir10setSortingE6QFlagsINS_8SortFlagEE(void *qthis,
QDir::SortFlags arg1) {
  ((QDir*)qthis)->setSorting(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 134, column 10>
//   // proto:  void QDir::setNameFilters(const QStringList & nameFilters);
// _ZN4QDir14setNameFiltersERK11QStringList setNameFilters(const class QStringList &)
extern "C"
void
C_ZN4QDir14setNameFiltersERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QDir*)qthis)->setNameFilters(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 138, column 15>
//   // proto:  SortFlags QDir::sorting();
// _ZNK4QDir7sortingEv sorting()
extern "C"
QFlags<QDir::SortFlag>*
C_ZNK4QDir7sortingEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->sorting();
  return new QFlags<QDir::SortFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 180, column 18>
//   // proto: static QChar QDir::separator();
// _ZN4QDir9separatorEv separator()
extern "C"
QChar*
C_ZN4QDir9separatorEv() {
  auto ret =
  QDir::separator();
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 108, column 17>
//   // proto:  void QDir::swap(QDir & other);
// _ZN4QDir4swapERS_ swap(class QDir &)
extern "C"
void
C_ZN4QDir4swapERS_(void *qthis,
QDir* arg1) {
  ((QDir*)qthis)->swap(*((QDir*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 190, column 24>
//   // proto: static QDir QDir::temp();
// _ZN4QDir4tempEv temp()
extern "C"
QDir*
C_ZN4QDir4tempEv() {
  auto ret =
  QDir::temp();
  return new QDir(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 176, column 10>
//   // proto:  bool QDir::exists(const QString & name);
// _ZNK4QDir6existsERK7QString exists(const class QString &)
extern "C"
bool
C_ZNK4QDir6existsERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QDir*)qthis)->exists(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 147, column 17>
//   // proto:  QStringList QDir::entryList(const QStringList & nameFilters, Filters filters, SortFlags sort);
// _ZNK4QDir9entryListERK11QStringList6QFlagsINS_6FilterEES3_INS_8SortFlagEE entryList(const class QStringList &, Filters, SortFlags)
extern "C"
QStringList*
C_ZNK4QDir9entryListERK11QStringList6QFlagsINS_6FilterEES3_INS_8SortFlagEE(void *qthis,
const QStringList* arg1,
QDir::Filters arg2,
QDir::SortFlags arg3) {
  auto ret =
  ((QDir*)qthis)->entryList(*((const QStringList*)arg1),
arg2,
arg3);
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 156, column 10>
//   // proto:  bool QDir::mkpath(const QString & dirPath);
// _ZNK4QDir6mkpathERK7QString mkpath(const class QString &)
extern "C"
bool
C_ZNK4QDir6mkpathERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QDir*)qthis)->mkpath(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 136, column 13>
//   // proto:  Filters QDir::filter();
// _ZNK4QDir6filterEv filter()
extern "C"
QFlags<QDir::Filter>*
C_ZNK4QDir6filterEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->filter();
  return new QFlags<QDir::Filter>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 119, column 17>
//   // proto: static void QDir::addSearchPath(const QString & prefix, const QString & path);
// _ZN4QDir13addSearchPathERK7QStringS2_ addSearchPath(const class QString &, const class QString &)
extern "C"
void
C_ZN4QDir13addSearchPathERK7QStringS2_(const QString* arg1,
const QString* arg2) {
  QDir::addSearchPath(*((const QString*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 122, column 13>
//   // proto:  QString QDir::dirName();
// _ZNK4QDir7dirNameEv dirName()
extern "C"
QString*
C_ZNK4QDir7dirNameEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->dirName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 120, column 24>
//   // proto: static QStringList QDir::searchPaths(const QString & prefix);
// _ZN4QDir11searchPathsERK7QString searchPaths(const class QString &)
extern "C"
QStringList*
C_ZN4QDir11searchPathsERK7QString(const QString* arg1) {
  auto ret =
  QDir::searchPaths(*((const QString*)arg1));
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 169, column 10>
//   // proto:  bool QDir::makeAbsolute();
// _ZN4QDir12makeAbsoluteEv makeAbsolute()
extern "C"
bool
C_ZN4QDir12makeAbsoluteEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->makeAbsolute();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 150, column 19>
//   // proto:  QFileInfoList QDir::entryInfoList(Filters filters, SortFlags sort);
// _ZNK4QDir13entryInfoListE6QFlagsINS_6FilterEES0_INS_8SortFlagEE entryInfoList(Filters, SortFlags)
extern "C"
QList<QFileInfo>*
C_ZNK4QDir13entryInfoListE6QFlagsINS_6FilterEES0_INS_8SortFlagEE(void *qthis,
QDir::Filters arg1,
QDir::SortFlags arg2) {
  auto ret =
  ((QDir*)qthis)->entryInfoList(arg1,
arg2);
  return new QList<QFileInfo>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 137, column 10>
//   // proto:  void QDir::setFilter(Filters filter);
// _ZN4QDir9setFilterE6QFlagsINS_6FilterEE setFilter(Filters)
extern "C"
void
C_ZN4QDir9setFilterE6QFlagsINS_6FilterEE(void *qthis,
QDir::Filters arg1) {
  ((QDir*)qthis)->setFilter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 114, column 13>
//   // proto:  QString QDir::canonicalPath();
// _ZNK4QDir13canonicalPathEv canonicalPath()
extern "C"
QString*
C_ZNK4QDir13canonicalPathEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->canonicalPath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 161, column 10>
//   // proto:  bool QDir::isReadable();
// _ZNK4QDir10isReadableEv isReadable()
extern "C"
bool
C_ZNK4QDir10isReadableEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->isReadable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 167, column 10>
//   // proto:  bool QDir::isRelative();
// _ZNK4QDir10isRelativeEv isRelative()
extern "C"
bool
C_ZNK4QDir10isRelativeEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->isRelative();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 184, column 20>
//   // proto: static QString QDir::currentPath();
// _ZN4QDir11currentPathEv currentPath()
extern "C"
QString*
C_ZN4QDir11currentPathEv() {
  auto ret =
  QDir::currentPath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 163, column 10>
//   // proto:  bool QDir::isRoot();
// _ZNK4QDir6isRootEv isRoot()
extern "C"
bool
C_ZNK4QDir6isRootEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->isRoot();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 159, column 10>
//   // proto:  bool QDir::removeRecursively();
// _ZN4QDir17removeRecursivelyEv removeRecursively()
extern "C"
bool
C_ZN4QDir17removeRecursivelyEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->removeRecursively();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 146, column 17>
//   // proto:  QStringList QDir::entryList(Filters filters, SortFlags sort);
// _ZNK4QDir9entryListE6QFlagsINS_6FilterEES0_INS_8SortFlagEE entryList(Filters, SortFlags)
extern "C"
QStringList*
C_ZNK4QDir9entryListE6QFlagsINS_6FilterEES0_INS_8SortFlagEE(void *qthis,
QDir::Filters arg1,
QDir::SortFlags arg2) {
  auto ret =
  ((QDir*)qthis)->entryList(arg1,
arg2);
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 168, column 17>
//   // proto:  bool QDir::isAbsolute();
// _ZNK4QDir10isAbsoluteEv isAbsolute()
extern "C"
bool
C_ZNK4QDir10isAbsoluteEv(void *qthis) {
  auto ret =
  ((QDir*)qthis)->isAbsolute();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 187, column 20>
//   // proto: static QString QDir::homePath();
// _ZN4QDir8homePathEv homePath()
extern "C"
QString*
C_ZN4QDir8homePathEv() {
  auto ret =
  QDir::homePath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 95, column 5>
//   // proto:  void QDir::QDir(const QDir & );
extern "C"
QDir*
C_ZN4QDirC2ERKS_(const QDir* arg1) {
  auto ret = new QDir(*((const QDir*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 111, column 10>
//   // proto:  void QDir::setPath(const QString & path);
// _ZN4QDir7setPathERK7QString setPath(const class QString &)
extern "C"
void
C_ZN4QDir7setPathERK7QString(void *qthis,
const QString* arg1) {
  ((QDir*)qthis)->setPath(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qdir.h', line 165, column 17>
//   // proto: static bool QDir::isRelativePath(const QString & path);
// _ZN4QDir14isRelativePathERK7QString isRelativePath(const class QString &)
extern "C"
bool
C_ZN4QDir14isRelativePathERK7QString(const QString* arg1) {
  auto ret =
  QDir::isRelativePath(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

