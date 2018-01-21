//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:727
// void QFileOpenEvent(const class QString &)
extern "C"
void* C_ZN14QFileOpenEventC1ERK7QString(const QString & file) {
  return new QFileOpenEvent(file);
}
// /usr/include/qt/QtGui/qevent.h:728
// void QFileOpenEvent(const class QUrl &)
extern "C"
void* C_ZN14QFileOpenEventC1ERK4QUrl(const QUrl & url) {
  return new QFileOpenEvent(url);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:729
// void ~QFileOpenEvent()
extern "C"
void C_ZN14QFileOpenEventD1Ev(void *this_) {
  delete (QFileOpenEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:731
// QString file()
extern "C"
void C_ZNK14QFileOpenEvent4fileEv(void *this_) {
  /*return*/ ((QFileOpenEvent*)this_)->file();
}
// inline
// /usr/include/qt/QtGui/qevent.h:732
// QUrl url()
extern "C"
void C_ZNK14QFileOpenEvent3urlEv(void *this_) {
  /*return*/ ((QFileOpenEvent*)this_)->url();
}
// /usr/include/qt/QtGui/qevent.h:733
// bool openFile(class QFile &, class QIODevice::OpenMode)
extern "C"
void C_ZNK14QFileOpenEvent8openFileER5QFile6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFile & file, QFlags<QIODevice::OpenModeFlag> flags) {
  /*return*/ ((QFileOpenEvent*)this_)->openFile(file, flags);
}
//  main block end
