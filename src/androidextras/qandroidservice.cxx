//  header block begin
// since 0x050a00
// /usr/include/qt/QtAndroidExtras/qandroidservice.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qandroidservice.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

// QAndroidService is pure virtual: false
// QAndroidService has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAndroidService : public QAndroidService {
public:
  virtual ~MyQAndroidService() {}
// void QAndroidService(int &, char **, int)
MyQAndroidService(int & argc, char** argv, int flags) : QAndroidService(argc, argv, flags) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidservice.h:54
// [-2] void QAndroidService(int &, char **, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAndroidServiceC2ERiPPci(int & argc, char** argv, int flags) {
  return  new MyQAndroidService(*(new int(argc)), argv, flags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidservice.h:59
// [-2] void ~QAndroidService()
extern "C" Q_DECL_EXPORT
void C_ZN15QAndroidServiceD2Ev(void *this_) {
  delete (QAndroidService*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidservice.h:61
// [8] QAndroidBinder * onBind(const QAndroidIntent &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAndroidService6onBindERK14QAndroidIntent(void *this_, QAndroidIntent* intent) {
  return (void*)((QAndroidService*)this_)->onBind(*intent);
}

//  main block end
