//  header block begin

// /usr/include/qt/QtGui/qicon.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qicon.h>
#include <QtGui>
#include "callback_inherit.h"

// QIcon is pure virtual: false
// QIcon has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQIcon_t {
  QByteArrayData data[1];
  char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQIcon_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQIcon_t qt_meta_stringdata_MyQIcon = {
   {
  QT_MOC_LITERAL(0, 0, 7), // "MyQIcon"
  },
  "MyQIcon"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQIcon[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQIcon : public QIcon {
public:
  virtual ~MyQIcon() {}
// void QIcon()
MyQIcon() : QIcon() {}
// void QIcon(const QPixmap &)
MyQIcon(const QPixmap & pixmap) : QIcon(pixmap) {}
// void QIcon(const QIcon &)
MyQIcon(const QIcon & other) : QIcon(other) {}
// void QIcon(QIcon &&)
MyQIcon(QIcon && other) : QIcon(other) {}
// void QIcon(const QString &)
MyQIcon(const QString & fileName) : QIcon(fileName) {}
// void QIcon(QIconEngine *)
MyQIcon(QIconEngine * engine) : QIcon(engine) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:60
// [-2] void QIcon()
extern "C" Q_DECL_EXPORT
void* C_ZN5QIconC2Ev() {
  return  new QIcon();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:61
// [-2] void QIcon(const QPixmap &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QIconC2ERK7QPixmap(QPixmap* pixmap) {
  return  new QIcon(*pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:62
// [-2] void QIcon(const QIcon &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QIconC2ERKS_(QIcon* other) {
  return  new QIcon(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:64
// [-2] void QIcon(QIcon &&)
extern "C" Q_DECL_EXPORT
void* C_ZN5QIconC2EOS_(QIcon && other) {
  return  new QIcon(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:68
// [-2] void QIcon(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QIconC2ERK7QString(QString* fileName) {
  return  new QIcon(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:69
// [-2] void QIcon(QIconEngine *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QIconC2EP11QIconEngine(QIconEngine * engine) {
  return  new QIcon(engine);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:70
// [-2] void ~QIcon()
extern "C" Q_DECL_EXPORT
void C_ZN5QIconD2Ev(void *this_) {
  delete (QIcon*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:71
// [8] QIcon & operator=(const QIcon &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QIconaSERKS_(void *this_, QIcon* other) {
  auto& rv = ((QIcon*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:73
// [8] QIcon & operator=(QIcon &&)
extern "C" Q_DECL_EXPORT
void* C_ZN5QIconaSEOS_(void *this_, QIcon && other) {
  auto& rv = ((QIcon*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qicon.h:76
// [-2] void swap(QIcon &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN5QIcon4swapERS_(void *this_, QIcon* other) {
  ((QIcon*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:81
// [32] QPixmap pixmap(const QSize &, QIcon::Mode, QIcon::State)
extern "C" Q_DECL_EXPORT
void* C_ZNK5QIcon6pixmapERK5QSizeNS_4ModeENS_5StateE(void *this_, QSize* size, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIcon*)this_)->pixmap(*size, mode, state);
return new QPixmap(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:82
// [32] QPixmap pixmap(int, int, QIcon::Mode, QIcon::State)
extern "C" Q_DECL_EXPORT
void* C_ZNK5QIcon6pixmapEiiNS_4ModeENS_5StateE(void *this_, int w, int h, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIcon*)this_)->pixmap(w, h, mode, state);
return new QPixmap(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:84
// [32] QPixmap pixmap(int, QIcon::Mode, QIcon::State)
extern "C" Q_DECL_EXPORT
void* C_ZNK5QIcon6pixmapEiNS_4ModeENS_5StateE(void *this_, int extent, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIcon*)this_)->pixmap(extent, mode, state);
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtGui/qicon.h:86
// [32] QPixmap pixmap(QWindow *, const QSize &, QIcon::Mode, QIcon::State)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void* C_ZNK5QIcon6pixmapEP7QWindowRK5QSizeNS_4ModeENS_5StateE(void *this_, QWindow * window, QSize* size, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIcon*)this_)->pixmap(window, *size, mode, state);
return new QPixmap(rv);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:88
// [8] QSize actualSize(const QSize &, QIcon::Mode, QIcon::State)
extern "C" Q_DECL_EXPORT
void* C_ZNK5QIcon10actualSizeERK5QSizeNS_4ModeENS_5StateE(void *this_, QSize* size, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIcon*)this_)->actualSize(*size, mode, state);
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtGui/qicon.h:89
// [8] QSize actualSize(QWindow *, const QSize &, QIcon::Mode, QIcon::State)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void* C_ZNK5QIcon10actualSizeEP7QWindowRK5QSizeNS_4ModeENS_5StateE(void *this_, QWindow * window, QSize* size, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIcon*)this_)->actualSize(window, *size, mode, state);
return new QSize(rv);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qicon.h:91
// [8] QString name()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZNK5QIcon4nameEv(void *this_) {
  auto rv = ((QIcon*)this_)->name();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:93
// [-2] void paint(QPainter *, const QRect &, Qt::Alignment, QIcon::Mode, QIcon::State)
extern "C" Q_DECL_EXPORT
void C_ZNK5QIcon5paintEP8QPainterRK5QRect6QFlagsIN2Qt13AlignmentFlagEENS_4ModeENS_5StateE(void *this_, QPainter * painter, QRect* rect, QFlags<Qt::AlignmentFlag> alignment, QIcon::Mode mode, QIcon::State state) {
  ((QIcon*)this_)->paint(painter, *rect, alignment, mode, state);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:94
// [-2] void paint(QPainter *, int, int, int, int, Qt::Alignment, QIcon::Mode, QIcon::State)
extern "C" Q_DECL_EXPORT
void C_ZNK5QIcon5paintEP8QPainteriiii6QFlagsIN2Qt13AlignmentFlagEENS_4ModeENS_5StateE(void *this_, QPainter * painter, int x, int y, int w, int h, QFlags<Qt::AlignmentFlag> alignment, QIcon::Mode mode, QIcon::State state) {
  ((QIcon*)this_)->paint(painter, x, y, w, h, alignment, mode, state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:97
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QIcon6isNullEv(void *this_) {
  return (bool)((QIcon*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:98
// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QIcon10isDetachedEv(void *this_) {
  return (bool)((QIcon*)this_)->isDetached();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:99
// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_ZN5QIcon6detachEv(void *this_) {
  ((QIcon*)this_)->detach();
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qicon.h:104
// [8] qint64 cacheKey()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
qint64 C_ZNK5QIcon8cacheKeyEv(void *this_) {
  return (qint64)((QIcon*)this_)->cacheKey();
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:106
// [-2] void addPixmap(const QPixmap &, QIcon::Mode, QIcon::State)
extern "C" Q_DECL_EXPORT
void C_ZN5QIcon9addPixmapERK7QPixmapNS_4ModeENS_5StateE(void *this_, QPixmap* pixmap, QIcon::Mode mode, QIcon::State state) {
  ((QIcon*)this_)->addPixmap(*pixmap, mode, state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:107
// [-2] void addFile(const QString &, const QSize &, QIcon::Mode, QIcon::State)
extern "C" Q_DECL_EXPORT
void C_ZN5QIcon7addFileERK7QStringRK5QSizeNS_4ModeENS_5StateE(void *this_, QString* fileName, QSize* size, QIcon::Mode mode, QIcon::State state) {
  ((QIcon*)this_)->addFile(*fileName, *size, mode, state);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qicon.h:109
// [8] QList<QSize> availableSizes(QIcon::Mode, QIcon::State)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
QList<QSize>* C_ZNK5QIcon14availableSizesENS_4ModeENS_5StateE(void *this_, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIcon*)this_)->availableSizes(mode, state);
return new QList<QSize>(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qicon.h:111
// [-2] void setIsMask(bool)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN5QIcon9setIsMaskEb(void *this_, bool isMask) {
  ((QIcon*)this_)->setIsMask(isMask);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qicon.h:112
// [1] bool isMask()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
bool C_ZNK5QIcon6isMaskEv(void *this_) {
  return (bool)((QIcon*)this_)->isMask();
}
#endif // QT_VERSION >= 0x050600

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qicon.h:114
// [8] QIcon fromTheme(const QString &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZN5QIcon9fromThemeERK7QString(QString* name) {
  auto rv = QIcon::fromTheme(*name);
return new QIcon(rv);
}
#endif // QT_VERSION >= 0x040600

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:115
// [8] QIcon fromTheme(const QString &, const QIcon &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QIcon9fromThemeERK7QStringRKS_(QString* name, QIcon* fallback) {
  auto rv = QIcon::fromTheme(*name, *fallback);
return new QIcon(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qicon.h:116
// [1] bool hasThemeIcon(const QString &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
bool C_ZN5QIcon12hasThemeIconERK7QString(QString* name) {
  return (bool)QIcon::hasThemeIcon(*name);
}
#endif // QT_VERSION >= 0x040600

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qicon.h:118
// [8] QStringList themeSearchPaths()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZN5QIcon16themeSearchPathsEv() {
  auto rv = QIcon::themeSearchPaths();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x040600

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qicon.h:119
// [-2] void setThemeSearchPaths(const QStringList &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN5QIcon19setThemeSearchPathsERK11QStringList(QStringList* searchpath) {
  QIcon::setThemeSearchPaths(*searchpath);
}
#endif // QT_VERSION >= 0x040600

// Public static Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtGui/qicon.h:121
// [8] QStringList fallbackSearchPaths()
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
void* C_ZN5QIcon19fallbackSearchPathsEv() {
  auto rv = QIcon::fallbackSearchPaths();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x050b00

// Public static Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtGui/qicon.h:122
// [-2] void setFallbackSearchPaths(const QStringList &)
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
void C_ZN5QIcon22setFallbackSearchPathsERK11QStringList(QStringList* paths) {
  QIcon::setFallbackSearchPaths(*paths);
}
#endif // QT_VERSION >= 0x050b00

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qicon.h:124
// [8] QString themeName()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZN5QIcon9themeNameEv() {
  auto rv = QIcon::themeName();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040600

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qicon.h:125
// [-2] void setThemeName(const QString &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN5QIcon12setThemeNameERK7QString(QString* path) {
  QIcon::setThemeName(*path);
}
#endif // QT_VERSION >= 0x040600

// Public static Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtGui/qicon.h:127
// [8] QString fallbackThemeName()
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void* C_ZN5QIcon17fallbackThemeNameEv() {
  auto rv = QIcon::fallbackThemeName();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050c00

// Public static Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtGui/qicon.h:128
// [-2] void setFallbackThemeName(const QString &)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void C_ZN5QIcon20setFallbackThemeNameERK7QString(QString* name) {
  QIcon::setFallbackThemeName(*name);
}
#endif // QT_VERSION >= 0x050c00

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:141
// [8] QIcon::DataPtr & data_ptr()
extern "C" Q_DECL_EXPORT
void* C_ZN5QIcon8data_ptrEv(void *this_) {
  auto& rv = ((QIcon*)this_)->data_ptr();
return &rv;
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
