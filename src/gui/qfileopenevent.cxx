//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QFileOpenEvent is pure virtual: false
// QFileOpenEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFileOpenEvent : public QFileOpenEvent {
public:
  virtual ~MyQFileOpenEvent() {}
// void QFileOpenEvent(const class QString &)
MyQFileOpenEvent(const QString & file) : QFileOpenEvent(file) {}
// void QFileOpenEvent(const class QUrl &)
MyQFileOpenEvent(const QUrl & url) : QFileOpenEvent(url) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:738
// [-2] void QFileOpenEvent(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QFileOpenEventC2ERK7QString(QString* file) {
  return  new QFileOpenEvent(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:739
// [-2] void QFileOpenEvent(const class QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QFileOpenEventC2ERK4QUrl(QUrl* url) {
  return  new QFileOpenEvent(*url);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:740
// [-2] void ~QFileOpenEvent()
extern "C" Q_DECL_EXPORT
void C_ZN14QFileOpenEventD2Ev(void *this_) {
  delete (QFileOpenEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:742
// [8] QString file()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QFileOpenEvent4fileEv(void *this_) {
  auto rv = ((QFileOpenEvent*)this_)->file();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qevent.h:743
// [8] QUrl url()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK14QFileOpenEvent3urlEv(void *this_) {
  auto rv = ((QFileOpenEvent*)this_)->url();
return new QUrl(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qevent.h:744
// [1] bool openFile(class QFile &, class QIODevice::OpenMode)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK14QFileOpenEvent8openFileER5QFile6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFile* file, QFlags<QIODevice::OpenModeFlag> flags) {
  return (bool)((QFileOpenEvent*)this_)->openFile(*file, flags);
}
#endif // QT_VERSION >= 0x040800

//  main block end
