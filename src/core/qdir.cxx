//  header block begin
// /usr/include/qt/QtCore/qdir.h
#include <qdir.h>
#include <QtCore>

// QDir is pure virtual: false
//  header block end

//  main block begin

class MyQDir : public QDir {
public:
MyQDir(const QString & path) : QDir(path) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:102
// [-2] void QDir(const class QString &)
extern "C"
void* C_ZN4QDirC1ERK7QString(const QString & path) {
  (MyQDir*)(0);
  return  new MyQDir(path);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:105
// [-2] void ~QDir()
extern "C"
void C_ZN4QDirD1Ev(void *this_) {
  delete (QDir*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:113
// [-2] void swap(class QDir &)
extern "C"
void C_ZN4QDir4swapERS_(void *this_, QDir & other) {
  ((QDir*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:116
// [-2] void setPath(const class QString &)
extern "C"
void C_ZN4QDir7setPathERK7QString(void *this_, const QString & path) {
  ((QDir*)this_)->setPath(path);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:117
// [8] QString path()
extern "C"
void* C_ZNK4QDir4pathEv(void *this_) {
  auto rv = ((QDir*)this_)->path();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:118
// [8] QString absolutePath()
extern "C"
void* C_ZNK4QDir12absolutePathEv(void *this_) {
  auto rv = ((QDir*)this_)->absolutePath();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:119
// [8] QString canonicalPath()
extern "C"
void* C_ZNK4QDir13canonicalPathEv(void *this_) {
  auto rv = ((QDir*)this_)->canonicalPath();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:121
// [-2] void addResourceSearchPath(const class QString &)
extern "C"
void C_ZN4QDir21addResourceSearchPathERK7QString(const QString & path) {
  QDir::addResourceSearchPath(path);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:123
// [-2] void setSearchPaths(const class QString &, const class QStringList &)
extern "C"
void C_ZN4QDir14setSearchPathsERK7QStringRK11QStringList(const QString & prefix, const QStringList & searchPaths) {
  QDir::setSearchPaths(prefix, searchPaths);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:124
// [-2] void addSearchPath(const class QString &, const class QString &)
extern "C"
void C_ZN4QDir13addSearchPathERK7QStringS2_(const QString & prefix, const QString & path) {
  QDir::addSearchPath(prefix, path);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:127
// [8] QString dirName()
extern "C"
void* C_ZNK4QDir7dirNameEv(void *this_) {
  auto rv = ((QDir*)this_)->dirName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:128
// [8] QString filePath(const class QString &)
extern "C"
void* C_ZNK4QDir8filePathERK7QString(void *this_, const QString & fileName) {
  auto rv = ((QDir*)this_)->filePath(fileName);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:129
// [8] QString absoluteFilePath(const class QString &)
extern "C"
void* C_ZNK4QDir16absoluteFilePathERK7QString(void *this_, const QString & fileName) {
  auto rv = ((QDir*)this_)->absoluteFilePath(fileName);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:130
// [8] QString relativeFilePath(const class QString &)
extern "C"
void* C_ZNK4QDir16relativeFilePathERK7QString(void *this_, const QString & fileName) {
  auto rv = ((QDir*)this_)->relativeFilePath(fileName);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:132
// [8] QString toNativeSeparators(const class QString &)
extern "C"
void* C_ZN4QDir18toNativeSeparatorsERK7QString(const QString & pathName) {
  auto rv = QDir::toNativeSeparators(pathName);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:133
// [8] QString fromNativeSeparators(const class QString &)
extern "C"
void* C_ZN4QDir20fromNativeSeparatorsERK7QString(const QString & pathName) {
  auto rv = QDir::fromNativeSeparators(pathName);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:135
// [1] bool cd(const class QString &)
extern "C"
bool C_ZN4QDir2cdERK7QString(void *this_, const QString & dirName) {
  return (bool)((QDir*)this_)->cd(dirName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:136
// [1] bool cdUp()
extern "C"
bool C_ZN4QDir4cdUpEv(void *this_) {
  return (bool)((QDir*)this_)->cdUp();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:139
// [-2] void setNameFilters(const class QStringList &)
extern "C"
void C_ZN4QDir14setNameFiltersERK11QStringList(void *this_, const QStringList & nameFilters) {
  ((QDir*)this_)->setNameFilters(nameFilters);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:141
// [4] QDir::Filters filter()
extern "C"
void C_ZNK4QDir6filterEv(void *this_) {
  auto rv = ((QDir*)this_)->filter();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:143
// [4] QDir::SortFlags sorting()
extern "C"
void C_ZNK4QDir7sortingEv(void *this_) {
  auto rv = ((QDir*)this_)->sorting();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:144
// [-2] void setSorting(QDir::SortFlags)
extern "C"
void C_ZN4QDir10setSortingE6QFlagsINS_8SortFlagEE(void *this_, QFlags<QDir::SortFlag> sort) {
  ((QDir*)this_)->setSorting(sort);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:146
// [4] uint count()
extern "C"
uint C_ZNK4QDir5countEv(void *this_) {
  return (uint)((QDir*)this_)->count();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:161
// [1] bool mkdir(const class QString &)
extern "C"
bool C_ZNK4QDir5mkdirERK7QString(void *this_, const QString & dirName) {
  return (bool)((QDir*)this_)->mkdir(dirName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:162
// [1] bool rmdir(const class QString &)
extern "C"
bool C_ZNK4QDir5rmdirERK7QString(void *this_, const QString & dirName) {
  return (bool)((QDir*)this_)->rmdir(dirName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:163
// [1] bool mkpath(const class QString &)
extern "C"
bool C_ZNK4QDir6mkpathERK7QString(void *this_, const QString & dirPath) {
  return (bool)((QDir*)this_)->mkpath(dirPath);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:164
// [1] bool rmpath(const class QString &)
extern "C"
bool C_ZNK4QDir6rmpathERK7QString(void *this_, const QString & dirPath) {
  return (bool)((QDir*)this_)->rmpath(dirPath);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:166
// [1] bool removeRecursively()
extern "C"
bool C_ZN4QDir17removeRecursivelyEv(void *this_) {
  return (bool)((QDir*)this_)->removeRecursively();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:168
// [1] bool isReadable()
extern "C"
bool C_ZNK4QDir10isReadableEv(void *this_) {
  return (bool)((QDir*)this_)->isReadable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:169
// [1] bool exists()
extern "C"
bool C_ZNK4QDir6existsEv(void *this_) {
  return (bool)((QDir*)this_)->exists();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:170
// [1] bool isRoot()
extern "C"
bool C_ZNK4QDir6isRootEv(void *this_) {
  return (bool)((QDir*)this_)->isRoot();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:172
// [1] bool isRelativePath(const class QString &)
extern "C"
bool C_ZN4QDir14isRelativePathERK7QString(const QString & path) {
  return (bool)QDir::isRelativePath(path);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:173
// [1] bool isAbsolutePath(const class QString &)
extern "C"
bool C_ZN4QDir14isAbsolutePathERK7QString(const QString & path) {
  return (bool)QDir::isAbsolutePath(path);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:174
// [1] bool isRelative()
extern "C"
bool C_ZNK4QDir10isRelativeEv(void *this_) {
  return (bool)((QDir*)this_)->isRelative();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:175
// [1] bool isAbsolute()
extern "C"
bool C_ZNK4QDir10isAbsoluteEv(void *this_) {
  return (bool)((QDir*)this_)->isAbsolute();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:176
// [1] bool makeAbsolute()
extern "C"
bool C_ZN4QDir12makeAbsoluteEv(void *this_) {
  return (bool)((QDir*)this_)->makeAbsolute();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:181
// [1] bool remove(const class QString &)
extern "C"
bool C_ZN4QDir6removeERK7QString(void *this_, const QString & fileName) {
  return (bool)((QDir*)this_)->remove(fileName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:182
// [1] bool rename(const class QString &, const class QString &)
extern "C"
bool C_ZN4QDir6renameERK7QStringS2_(void *this_, const QString & oldName, const QString & newName) {
  return (bool)((QDir*)this_)->rename(oldName, newName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:183
// [1] bool exists(const class QString &)
extern "C"
bool C_ZNK4QDir6existsERK7QString(void *this_, const QString & name) {
  return (bool)((QDir*)this_)->exists(name);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:187
// [2] QChar listSeparator()
extern "C"
void* C_ZN4QDir13listSeparatorEv() {
  auto rv = QDir::listSeparator();
return new QChar(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:196
// [2] QChar separator()
extern "C"
void* C_ZN4QDir9separatorEv() {
  auto rv = QDir::separator();
return new QChar(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:198
// [1] bool setCurrent(const class QString &)
extern "C"
bool C_ZN4QDir10setCurrentERK7QString(const QString & path) {
  return (bool)QDir::setCurrent(path);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:199
// [8] QDir current()
extern "C"
void* C_ZN4QDir7currentEv() {
  auto rv = QDir::current();
return new QDir(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:200
// [8] QString currentPath()
extern "C"
void* C_ZN4QDir11currentPathEv() {
  auto rv = QDir::currentPath();
return new QString(rv);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:202
// [8] QDir home()
extern "C"
void* C_ZN4QDir4homeEv() {
  auto rv = QDir::home();
return new QDir(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:203
// [8] QString homePath()
extern "C"
void* C_ZN4QDir8homePathEv() {
  auto rv = QDir::homePath();
return new QString(rv);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:204
// [8] QDir root()
extern "C"
void* C_ZN4QDir4rootEv() {
  auto rv = QDir::root();
return new QDir(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:205
// [8] QString rootPath()
extern "C"
void* C_ZN4QDir8rootPathEv() {
  auto rv = QDir::rootPath();
return new QString(rv);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:206
// [8] QDir temp()
extern "C"
void* C_ZN4QDir4tempEv() {
  auto rv = QDir::temp();
return new QDir(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:207
// [8] QString tempPath()
extern "C"
void* C_ZN4QDir8tempPathEv() {
  auto rv = QDir::tempPath();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:210
// [1] bool match(const class QStringList &, const class QString &)
extern "C"
bool C_ZN4QDir5matchERK11QStringListRK7QString(const QStringList & filters, const QString & fileName) {
  return (bool)QDir::match(filters, fileName);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:211
// [1] bool match(const class QString &, const class QString &)
extern "C"
bool C_ZN4QDir5matchERK7QStringS2_(const QString & filter, const QString & fileName) {
  return (bool)QDir::match(filter, fileName);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:214
// [8] QString cleanPath(const class QString &)
extern "C"
void* C_ZN4QDir9cleanPathERK7QString(const QString & path) {
  auto rv = QDir::cleanPath(path);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:215
// [-2] void refresh()
extern "C"
void C_ZNK4QDir7refreshEv(void *this_) {
  ((QDir*)this_)->refresh();
}
//  main block end
