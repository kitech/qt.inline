// /usr/include/qt/QtGui/qicon.h
#include <qicon.h>
#include <QtGui>

// /usr/include/qt/QtGui/qicon.h:60
// void QIcon()
extern "C"
void* C_ZN5QIconC1Ev() {
  return new QIcon();
}
// /usr/include/qt/QtGui/qicon.h:61
// void QIcon(const class QPixmap &)
extern "C"
void* C_ZN5QIconC1ERK7QPixmap(const QPixmap & pixmap) {
  return new QIcon(pixmap);
}
// /usr/include/qt/QtGui/qicon.h:68
// void QIcon(const class QString &)
extern "C"
void* C_ZN5QIconC1ERK7QString(const QString & fileName) {
  return new QIcon(fileName);
}
// /usr/include/qt/QtGui/qicon.h:69
// void QIcon(class QIconEngine *)
extern "C"
void* C_ZN5QIconC1EP11QIconEngine(QIconEngine * engine) {
  return new QIcon(engine);
}
// /usr/include/qt/QtGui/qicon.h:70
// void ~QIcon()
extern "C"
void C_ZN5QIconD1Ev(void *this_) {
  delete (QIcon*)(this_);
}
// inline
// /usr/include/qt/QtGui/qicon.h:76
// void swap(class QIcon &)
extern "C"
void C_ZN5QIcon4swapERS_(void *this_, QIcon & other) {
  ((QIcon*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qicon.h:81
// QPixmap pixmap(const class QSize &, enum QIcon::Mode, enum QIcon::State)
extern "C"
void C_ZNK5QIcon6pixmapERK5QSizeNS_4ModeENS_5StateE(void *this_, const QSize & size, QIcon::Mode mode, QIcon::State state) {
  /*return*/ ((QIcon*)this_)->pixmap(size, mode, state);
}
// inline
// /usr/include/qt/QtGui/qicon.h:82
// QPixmap pixmap(int, int, enum QIcon::Mode, enum QIcon::State)
extern "C"
void C_ZNK5QIcon6pixmapEiiNS_4ModeENS_5StateE(void *this_, int w, int h, QIcon::Mode mode, QIcon::State state) {
  /*return*/ ((QIcon*)this_)->pixmap(w, h, mode, state);
}
// inline
// /usr/include/qt/QtGui/qicon.h:84
// QPixmap pixmap(int, enum QIcon::Mode, enum QIcon::State)
extern "C"
void C_ZNK5QIcon6pixmapEiNS_4ModeENS_5StateE(void *this_, int extent, QIcon::Mode mode, QIcon::State state) {
  /*return*/ ((QIcon*)this_)->pixmap(extent, mode, state);
}
// /usr/include/qt/QtGui/qicon.h:86
// QPixmap pixmap(class QWindow *, const class QSize &, enum QIcon::Mode, enum QIcon::State)
extern "C"
void C_ZNK5QIcon6pixmapEP7QWindowRK5QSizeNS_4ModeENS_5StateE(void *this_, QWindow * window, const QSize & size, QIcon::Mode mode, QIcon::State state) {
  /*return*/ ((QIcon*)this_)->pixmap(window, size, mode, state);
}
// /usr/include/qt/QtGui/qicon.h:88
// QSize actualSize(const class QSize &, enum QIcon::Mode, enum QIcon::State)
extern "C"
void C_ZNK5QIcon10actualSizeERK5QSizeNS_4ModeENS_5StateE(void *this_, const QSize & size, QIcon::Mode mode, QIcon::State state) {
  /*return*/ ((QIcon*)this_)->actualSize(size, mode, state);
}
// /usr/include/qt/QtGui/qicon.h:89
// QSize actualSize(class QWindow *, const class QSize &, enum QIcon::Mode, enum QIcon::State)
extern "C"
void C_ZNK5QIcon10actualSizeEP7QWindowRK5QSizeNS_4ModeENS_5StateE(void *this_, QWindow * window, const QSize & size, QIcon::Mode mode, QIcon::State state) {
  /*return*/ ((QIcon*)this_)->actualSize(window, size, mode, state);
}
// /usr/include/qt/QtGui/qicon.h:91
// QString name()
extern "C"
void C_ZNK5QIcon4nameEv(void *this_) {
  /*return*/ ((QIcon*)this_)->name();
}
// /usr/include/qt/QtGui/qicon.h:93
// void paint(class QPainter *, const class QRect &, Qt::Alignment, enum QIcon::Mode, enum QIcon::State)
extern "C"
void C_ZNK5QIcon5paintEP8QPainterRK5QRect6QFlagsIN2Qt13AlignmentFlagEENS_4ModeENS_5StateE(void *this_, QPainter * painter, const QRect & rect, QFlags<Qt::AlignmentFlag> alignment, QIcon::Mode mode, QIcon::State state) {
  ((QIcon*)this_)->paint(painter, rect, alignment, mode, state);
}
// inline
// /usr/include/qt/QtGui/qicon.h:94
// void paint(class QPainter *, int, int, int, int, Qt::Alignment, enum QIcon::Mode, enum QIcon::State)
extern "C"
void C_ZNK5QIcon5paintEP8QPainteriiii6QFlagsIN2Qt13AlignmentFlagEENS_4ModeENS_5StateE(void *this_, QPainter * painter, int x, int y, int w, int h, QFlags<Qt::AlignmentFlag> alignment, QIcon::Mode mode, QIcon::State state) {
  ((QIcon*)this_)->paint(painter, x, y, w, h, alignment, mode, state);
}
// /usr/include/qt/QtGui/qicon.h:97
// bool isNull()
extern "C"
void C_ZNK5QIcon6isNullEv(void *this_) {
  /*return*/ ((QIcon*)this_)->isNull();
}
// /usr/include/qt/QtGui/qicon.h:98
// bool isDetached()
extern "C"
void C_ZNK5QIcon10isDetachedEv(void *this_) {
  /*return*/ ((QIcon*)this_)->isDetached();
}
// /usr/include/qt/QtGui/qicon.h:99
// void detach()
extern "C"
void C_ZN5QIcon6detachEv(void *this_) {
  ((QIcon*)this_)->detach();
}
// /usr/include/qt/QtGui/qicon.h:104
// qint64 cacheKey()
extern "C"
void C_ZNK5QIcon8cacheKeyEv(void *this_) {
  /*return*/ ((QIcon*)this_)->cacheKey();
}
// /usr/include/qt/QtGui/qicon.h:106
// void addPixmap(const class QPixmap &, enum QIcon::Mode, enum QIcon::State)
extern "C"
void C_ZN5QIcon9addPixmapERK7QPixmapNS_4ModeENS_5StateE(void *this_, const QPixmap & pixmap, QIcon::Mode mode, QIcon::State state) {
  ((QIcon*)this_)->addPixmap(pixmap, mode, state);
}
// /usr/include/qt/QtGui/qicon.h:107
// void addFile(const class QString &, const class QSize &, enum QIcon::Mode, enum QIcon::State)
extern "C"
void C_ZN5QIcon7addFileERK7QStringRK5QSizeNS_4ModeENS_5StateE(void *this_, const QString & fileName, const QSize & size, QIcon::Mode mode, QIcon::State state) {
  ((QIcon*)this_)->addFile(fileName, size, mode, state);
}
// /usr/include/qt/QtGui/qicon.h:109
// QList<QSize> availableSizes(enum QIcon::Mode, enum QIcon::State)
extern "C"
void C_ZNK5QIcon14availableSizesENS_4ModeENS_5StateE(void *this_, QIcon::Mode mode, QIcon::State state) {
  /*return*/ ((QIcon*)this_)->availableSizes(mode, state);
}
// /usr/include/qt/QtGui/qicon.h:111
// void setIsMask(_Bool)
extern "C"
void C_ZN5QIcon9setIsMaskEb(void *this_, bool isMask) {
  ((QIcon*)this_)->setIsMask(isMask);
}
// /usr/include/qt/QtGui/qicon.h:112
// bool isMask()
extern "C"
void C_ZNK5QIcon6isMaskEv(void *this_) {
  /*return*/ ((QIcon*)this_)->isMask();
}
// static
// /usr/include/qt/QtGui/qicon.h:114
// QIcon fromTheme(const class QString &)
extern "C"
void C_ZN5QIcon9fromThemeERK7QString(const QString & name) {
  /*return*/ QIcon::fromTheme(name);
}
// static
// /usr/include/qt/QtGui/qicon.h:115
// QIcon fromTheme(const class QString &, const class QIcon &)
extern "C"
void C_ZN5QIcon9fromThemeERK7QStringRKS_(const QString & name, const QIcon & fallback) {
  /*return*/ QIcon::fromTheme(name, fallback);
}
// static
// /usr/include/qt/QtGui/qicon.h:116
// bool hasThemeIcon(const class QString &)
extern "C"
void C_ZN5QIcon12hasThemeIconERK7QString(const QString & name) {
  /*return*/ QIcon::hasThemeIcon(name);
}
// static
// /usr/include/qt/QtGui/qicon.h:118
// QStringList themeSearchPaths()
extern "C"
void C_ZN5QIcon16themeSearchPathsEv() {
  /*return*/ QIcon::themeSearchPaths();
}
// static
// /usr/include/qt/QtGui/qicon.h:119
// void setThemeSearchPaths(const class QStringList &)
extern "C"
void C_ZN5QIcon19setThemeSearchPathsERK11QStringList(const QStringList & searchpath) {
  QIcon::setThemeSearchPaths(searchpath);
}
// static
// /usr/include/qt/QtGui/qicon.h:121
// QString themeName()
extern "C"
void C_ZN5QIcon9themeNameEv() {
  /*return*/ QIcon::themeName();
}
// static
// /usr/include/qt/QtGui/qicon.h:122
// void setThemeName(const class QString &)
extern "C"
void C_ZN5QIcon12setThemeNameERK7QString(const QString & path) {
  QIcon::setThemeName(path);
}