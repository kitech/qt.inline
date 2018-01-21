//  header block begin
// /usr/include/qt/QtCore/qthreadstorage.h
#include <qthreadstorage.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qthreadstorage.h:54
// void ~QThreadStorageData()
extern "C"
void C_ZN18QThreadStorageDataD1Ev(void *this_) {
  delete (QThreadStorageData*)(this_);
}
// /usr/include/qt/QtCore/qthreadstorage.h:56
// void ** get()
extern "C"
void C_ZNK18QThreadStorageData3getEv(void *this_) {
  /*return*/ ((QThreadStorageData*)this_)->get();
}
// /usr/include/qt/QtCore/qthreadstorage.h:57
// void ** set(void *)
extern "C"
void C_ZN18QThreadStorageData3setEPv(void *this_, void * p) {
  /*return*/ ((QThreadStorageData*)this_)->set(p);
}
// static
// /usr/include/qt/QtCore/qthreadstorage.h:59
// void finish(void **)
extern "C"
void C_ZN18QThreadStorageData6finishEPPv(void ** arg0) {
  QThreadStorageData::finish(arg0);
}
//  main block end
