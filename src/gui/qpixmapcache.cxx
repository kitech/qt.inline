//  header block begin
// /usr/include/qt/QtGui/qpixmapcache.h
#include <qpixmapcache.h>
#include <QtGui>

// QPixmapCache is pure virtual: false
//  header block end

//  main block begin

class MyQPixmapCache : public QPixmapCache {
public:
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:77
// [4] int cacheLimit()
extern "C"
int C_ZN12QPixmapCache10cacheLimitEv() {
  return (int)QPixmapCache::cacheLimit();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:78
// [-2] void setCacheLimit(int)
extern "C"
void C_ZN12QPixmapCache13setCacheLimitEi(int arg0) {
  QPixmapCache::setCacheLimit(arg0);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:79
// [8] QPixmap * find(const class QString &)
extern "C"
void* C_ZN12QPixmapCache4findERK7QString(const QString & key) {
  return (void*)QPixmapCache::find(key);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:80
// [1] bool find(const class QString &, class QPixmap &)
extern "C"
bool C_ZN12QPixmapCache4findERK7QStringR7QPixmap(const QString & key, QPixmap & pixmap) {
  return (bool)QPixmapCache::find(key, pixmap);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:81
// [1] bool find(const class QString &, class QPixmap *)
extern "C"
bool C_ZN12QPixmapCache4findERK7QStringP7QPixmap(const QString & key, QPixmap * pixmap) {
  return (bool)QPixmapCache::find(key, pixmap);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:86
// [-2] void remove(const class QString &)
extern "C"
void C_ZN12QPixmapCache6removeERK7QString(const QString & key) {
  QPixmapCache::remove(key);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:88
// [-2] void clear()
extern "C"
void C_ZN12QPixmapCache5clearEv() {
  QPixmapCache::clear();
}
//  main block end
