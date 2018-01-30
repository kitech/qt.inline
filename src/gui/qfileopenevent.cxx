//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QFileOpenEvent is pure virtual: false
// QFileOpenEvent has virtual projected: false
//  header block end

//  main block begin

class MyQFileOpenEvent : public QFileOpenEvent {
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
extern "C"
void* C_ZN14QFileOpenEventC2ERK7QString(const QString & file) {
  return  new QFileOpenEvent(file);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:739
// [-2] void QFileOpenEvent(const class QUrl &)
extern "C"
void* C_ZN14QFileOpenEventC2ERK4QUrl(const QUrl & url) {
  return  new QFileOpenEvent(url);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:740
// [-2] void ~QFileOpenEvent()
extern "C"
void C_ZN14QFileOpenEventD2Ev(void *this_) {
  delete (QFileOpenEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:742
// [8] QString file()
extern "C"
void* C_ZNK14QFileOpenEvent4fileEv(void *this_) {
  auto rv = ((QFileOpenEvent*)this_)->file();
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:743
// [8] QUrl url()
extern "C"
void* C_ZNK14QFileOpenEvent3urlEv(void *this_) {
  auto rv = ((QFileOpenEvent*)this_)->url();
return new QUrl(rv);
}
//  main block end
