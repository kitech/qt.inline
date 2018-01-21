//  header block begin
// /usr/include/qt/QtGui/qpixmapcache.h
#include <qpixmapcache.h>
#include <QtGui>

//  header block end

//  main block begin
// static
// /usr/include/qt/QtGui/qpixmapcache.h:76
// int cacheLimit()
extern "C"
void C_ZN12QPixmapCache10cacheLimitEv() {
  /*return*/ QPixmapCache::cacheLimit();
}
// static
// /usr/include/qt/QtGui/qpixmapcache.h:77
// void setCacheLimit(int)
extern "C"
void C_ZN12QPixmapCache13setCacheLimitEi(int arg0) {
  QPixmapCache::setCacheLimit(arg0);
}
// static
// /usr/include/qt/QtGui/qpixmapcache.h:78
// QPixmap * find(const class QString &)
extern "C"
void C_ZN12QPixmapCache4findERK7QString(const QString & key) {
  /*return*/ QPixmapCache::find(key);
}
// static
// /usr/include/qt/QtGui/qpixmapcache.h:79
// bool find(const class QString &, class QPixmap &)
extern "C"
void C_ZN12QPixmapCache4findERK7QStringR7QPixmap(const QString & key, QPixmap & pixmap) {
  /*return*/ QPixmapCache::find(key, pixmap);
}
// static
// /usr/include/qt/QtGui/qpixmapcache.h:80
// bool find(const class QString &, class QPixmap *)
extern "C"
void C_ZN12QPixmapCache4findERK7QStringP7QPixmap(const QString & key, QPixmap * pixmap) {
  /*return*/ QPixmapCache::find(key, pixmap);
}
// static
// /usr/include/qt/QtGui/qpixmapcache.h:81
// bool find(const class QPixmapCache::Key &, class QPixmap *)
extern "C"
void C_ZN12QPixmapCache4findERKNS_3KeyEP7QPixmap(const QPixmapCache::Key & key, QPixmap * pixmap) {
  /*return*/ QPixmapCache::find(key, pixmap);
}
// static
// /usr/include/qt/QtGui/qpixmapcache.h:84
// bool replace(const class QPixmapCache::Key &, const class QPixmap &)
extern "C"
void C_ZN12QPixmapCache7replaceERKNS_3KeyERK7QPixmap(const QPixmapCache::Key & key, const QPixmap & pixmap) {
  /*return*/ QPixmapCache::replace(key, pixmap);
}
// static
// /usr/include/qt/QtGui/qpixmapcache.h:85
// void remove(const class QString &)
extern "C"
void C_ZN12QPixmapCache6removeERK7QString(const QString & key) {
  QPixmapCache::remove(key);
}
// static
// /usr/include/qt/QtGui/qpixmapcache.h:86
// void remove(const class QPixmapCache::Key &)
extern "C"
void C_ZN12QPixmapCache6removeERKNS_3KeyE(const QPixmapCache::Key & key) {
  QPixmapCache::remove(key);
}
// static
// /usr/include/qt/QtGui/qpixmapcache.h:87
// void clear()
extern "C"
void C_ZN12QPixmapCache5clearEv() {
  QPixmapCache::clear();
}
//  main block end
