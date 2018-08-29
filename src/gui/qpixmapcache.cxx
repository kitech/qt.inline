//  header block begin
// /usr/include/qt/QtGui/qpixmapcache.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpixmapcache.h>
#include <QtGui>
#include "callback_inherit.h"

// QPixmapCache is pure virtual: false
// QPixmapCache has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQPixmapCache_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPixmapCache_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPixmapCache_t qt_meta_stringdata_MyQPixmapCache = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQPixmapCache"
  },
  "MyQPixmapCache"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPixmapCache[] = {
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
class Q_DECL_EXPORT MyQPixmapCache : public QPixmapCache {
public:
  virtual ~MyQPixmapCache() {}
};
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:77
// [4] int cacheLimit()
extern "C" Q_DECL_EXPORT
int C_ZN12QPixmapCache10cacheLimitEv() {
  return (int)QPixmapCache::cacheLimit();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:78
// [-2] void setCacheLimit(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QPixmapCache13setCacheLimitEi(int arg0) {
  QPixmapCache::setCacheLimit(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:79
// [8] QPixmap * find(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QPixmapCache4findERK7QString(QString* key) {
  return (void*)QPixmapCache::find(*key);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:80
// [1] bool find(const QString &, QPixmap &)
extern "C" Q_DECL_EXPORT
bool C_ZN12QPixmapCache4findERK7QStringR7QPixmap(QString* key, QPixmap* pixmap) {
  return (bool)QPixmapCache::find(*key, *pixmap);
}

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qpixmapcache.h:81
// [1] bool find(const QString &, QPixmap *)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
bool C_ZN12QPixmapCache4findERK7QStringP7QPixmap(QString* key, QPixmap * pixmap) {
  return (bool)QPixmapCache::find(*key, pixmap);
}
#endif // QT_VERSION >= 0x040600

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:82
// [1] bool find(const QPixmapCache::Key &, QPixmap *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QPixmapCache4findERKNS_3KeyEP7QPixmap(QPixmapCache::Key* key, QPixmap * pixmap) {
  return (bool)QPixmapCache::find(*key, pixmap);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:83
// [1] bool insert(const QString &, const QPixmap &)
extern "C" Q_DECL_EXPORT
bool C_ZN12QPixmapCache6insertERK7QStringRK7QPixmap(QString* key, QPixmap* pixmap) {
  return (bool)QPixmapCache::insert(*key, *pixmap);
}

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qpixmapcache.h:84
// [8] QPixmapCache::Key insert(const QPixmap &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZN12QPixmapCache6insertERK7QPixmap(QPixmap* pixmap) {
  auto rv = QPixmapCache::insert(*pixmap);
return new QPixmapCache::Key(rv);
}
#endif // QT_VERSION >= 0x040600

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:85
// [1] bool replace(const QPixmapCache::Key &, const QPixmap &)
extern "C" Q_DECL_EXPORT
bool C_ZN12QPixmapCache7replaceERKNS_3KeyERK7QPixmap(QPixmapCache::Key* key, QPixmap* pixmap) {
  return (bool)QPixmapCache::replace(*key, *pixmap);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:86
// [-2] void remove(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPixmapCache6removeERK7QString(QString* key) {
  QPixmapCache::remove(*key);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:87
// [-2] void remove(const QPixmapCache::Key &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPixmapCache6removeERKNS_3KeyE(QPixmapCache::Key* key) {
  QPixmapCache::remove(*key);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:88
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN12QPixmapCache5clearEv() {
  QPixmapCache::clear();
}


extern "C" Q_DECL_EXPORT
void C_ZN12QPixmapCacheD2Ev(void *this_) {
  delete (QPixmapCache*)(this_);
}
//  main block end
