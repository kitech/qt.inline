//  header block begin
// /usr/include/qt/QtGui/qicon.h
#include <qicon.h>
#include <QtGui>

// QIcon is pure virtual: false
// QIcon has virtual projected: false
//  header block end

//  main block begin

class MyQIcon : public QIcon {
public:
  virtual ~MyQIcon() {}
// void QIcon()
MyQIcon() : QIcon() {}
// void QIcon(const class QPixmap &)
MyQIcon(const QPixmap & pixmap) : QIcon(pixmap) {}
// void QIcon(const class QString &)
MyQIcon(const QString & fileName) : QIcon(fileName) {}
// void QIcon(class QIconEngine *)
MyQIcon(QIconEngine * engine) : QIcon(engine) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:60
// [-2] void QIcon()
extern "C"
void* C_ZN5QIconC2Ev() {
  return  new QIcon();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:61
// [-2] void QIcon(const class QPixmap &)
extern "C"
void* C_ZN5QIconC2ERK7QPixmap(const QPixmap & pixmap) {
  return  new QIcon(pixmap);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:68
// [-2] void QIcon(const class QString &)
extern "C"
void* C_ZN5QIconC2ERK7QString(const QString & fileName) {
  return  new QIcon(fileName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:69
// [-2] void QIcon(class QIconEngine *)
extern "C"
void* C_ZN5QIconC2EP11QIconEngine(QIconEngine * engine) {
  return  new QIcon(engine);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:70
// [-2] void ~QIcon()
extern "C"
void C_ZN5QIconD2Ev(void *this_) {
  delete (QIcon*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:76
// [-2] void swap(class QIcon &)
extern "C"
void C_ZN5QIcon4swapERS_(void *this_, QIcon & other) {
  ((QIcon*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:81
// [32] QPixmap pixmap(const class QSize &, enum QIcon::Mode, enum QIcon::State)
extern "C"
void* C_ZNK5QIcon6pixmapERK5QSizeNS_4ModeENS_5StateE(void *this_, const QSize & size, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIcon*)this_)->pixmap(size, mode, state);
return new QPixmap(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:82
// [32] QPixmap pixmap(int, int, enum QIcon::Mode, enum QIcon::State)
extern "C"
void* C_ZNK5QIcon6pixmapEiiNS_4ModeENS_5StateE(void *this_, int w, int h, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIcon*)this_)->pixmap(w, h, mode, state);
return new QPixmap(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:84
// [32] QPixmap pixmap(int, enum QIcon::Mode, enum QIcon::State)
extern "C"
void* C_ZNK5QIcon6pixmapEiNS_4ModeENS_5StateE(void *this_, int extent, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIcon*)this_)->pixmap(extent, mode, state);
return new QPixmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:86
// [32] QPixmap pixmap(class QWindow *, const class QSize &, enum QIcon::Mode, enum QIcon::State)
extern "C"
void* C_ZNK5QIcon6pixmapEP7QWindowRK5QSizeNS_4ModeENS_5StateE(void *this_, QWindow * window, const QSize & size, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIcon*)this_)->pixmap(window, size, mode, state);
return new QPixmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:88
// [8] QSize actualSize(const class QSize &, enum QIcon::Mode, enum QIcon::State)
extern "C"
void* C_ZNK5QIcon10actualSizeERK5QSizeNS_4ModeENS_5StateE(void *this_, const QSize & size, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIcon*)this_)->actualSize(size, mode, state);
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:89
// [8] QSize actualSize(class QWindow *, const class QSize &, enum QIcon::Mode, enum QIcon::State)
extern "C"
void* C_ZNK5QIcon10actualSizeEP7QWindowRK5QSizeNS_4ModeENS_5StateE(void *this_, QWindow * window, const QSize & size, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIcon*)this_)->actualSize(window, size, mode, state);
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:91
// [8] QString name()
extern "C"
void* C_ZNK5QIcon4nameEv(void *this_) {
  auto rv = ((QIcon*)this_)->name();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:97
// [1] bool isNull()
extern "C"
bool C_ZNK5QIcon6isNullEv(void *this_) {
  return (bool)((QIcon*)this_)->isNull();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:98
// [1] bool isDetached()
extern "C"
bool C_ZNK5QIcon10isDetachedEv(void *this_) {
  return (bool)((QIcon*)this_)->isDetached();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:99
// [-2] void detach()
extern "C"
void C_ZN5QIcon6detachEv(void *this_) {
  ((QIcon*)this_)->detach();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:104
// [8] qint64 cacheKey()
extern "C"
qint64 C_ZNK5QIcon8cacheKeyEv(void *this_) {
  return (qint64)((QIcon*)this_)->cacheKey();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:106
// [-2] void addPixmap(const class QPixmap &, enum QIcon::Mode, enum QIcon::State)
extern "C"
void C_ZN5QIcon9addPixmapERK7QPixmapNS_4ModeENS_5StateE(void *this_, const QPixmap & pixmap, QIcon::Mode mode, QIcon::State state) {
  ((QIcon*)this_)->addPixmap(pixmap, mode, state);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:107
// [-2] void addFile(const class QString &, const class QSize &, enum QIcon::Mode, enum QIcon::State)
extern "C"
void C_ZN5QIcon7addFileERK7QStringRK5QSizeNS_4ModeENS_5StateE(void *this_, const QString & fileName, const QSize & size, QIcon::Mode mode, QIcon::State state) {
  ((QIcon*)this_)->addFile(fileName, size, mode, state);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:111
// [-2] void setIsMask(_Bool)
extern "C"
void C_ZN5QIcon9setIsMaskEb(void *this_, bool isMask) {
  ((QIcon*)this_)->setIsMask(isMask);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:112
// [1] bool isMask()
extern "C"
bool C_ZNK5QIcon6isMaskEv(void *this_) {
  return (bool)((QIcon*)this_)->isMask();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:114
// [8] QIcon fromTheme(const class QString &)
extern "C"
void* C_ZN5QIcon9fromThemeERK7QString(const QString & name) {
  auto rv = QIcon::fromTheme(name);
return new QIcon(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:115
// [8] QIcon fromTheme(const class QString &, const class QIcon &)
extern "C"
void* C_ZN5QIcon9fromThemeERK7QStringRKS_(const QString & name, const QIcon & fallback) {
  auto rv = QIcon::fromTheme(name, fallback);
return new QIcon(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:116
// [1] bool hasThemeIcon(const class QString &)
extern "C"
bool C_ZN5QIcon12hasThemeIconERK7QString(const QString & name) {
  return (bool)QIcon::hasThemeIcon(name);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:119
// [-2] void setThemeSearchPaths(const class QStringList &)
extern "C"
void C_ZN5QIcon19setThemeSearchPathsERK11QStringList(const QStringList & searchpath) {
  QIcon::setThemeSearchPaths(searchpath);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:121
// [8] QString themeName()
extern "C"
void* C_ZN5QIcon9themeNameEv() {
  auto rv = QIcon::themeName();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:122
// [-2] void setThemeName(const class QString &)
extern "C"
void C_ZN5QIcon12setThemeNameERK7QString(const QString & path) {
  QIcon::setThemeName(path);
}
//  main block end
