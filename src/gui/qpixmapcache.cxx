//  header block begin
// /usr/include/qt/QtGui/qpixmapcache.h
#ifndef protected
#define protected public
#endif
#include <qpixmapcache.h>
#include <QtGui>
#include "callback_inherit.h"

// QPixmapCache is pure virtual: false
// QPixmapCache has virtual projected: false
//  header block end

//  main block begin

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
// [8] QPixmap * find(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QPixmapCache4findERK7QString(QString* key) {
  return (void*)QPixmapCache::find(*key);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:80
// [1] bool find(const class QString &, class QPixmap &)
extern "C" Q_DECL_EXPORT
bool C_ZN12QPixmapCache4findERK7QStringR7QPixmap(QString* key, QPixmap* pixmap) {
  return (bool)QPixmapCache::find(*key, *pixmap);
}

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qpixmapcache.h:81
// [1] bool find(const class QString &, class QPixmap *)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
bool C_ZN12QPixmapCache4findERK7QStringP7QPixmap(QString* key, QPixmap * pixmap) {
  return (bool)QPixmapCache::find(*key, pixmap);
}
#endif // QT_VERSION >= 0x040600

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:86
// [-2] void remove(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPixmapCache6removeERK7QString(QString* key) {
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
