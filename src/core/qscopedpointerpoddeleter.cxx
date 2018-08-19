//  header block begin
// /usr/include/qt/QtCore/qscopedpointer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qscopedpointer.h>
#include <QtCore>
#include "callback_inherit.h"

// QScopedPointerPodDeleter is pure virtual: false
// QScopedPointerPodDeleter has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQScopedPointerPodDeleter : public QScopedPointerPodDeleter {
public:
  virtual ~MyQScopedPointerPodDeleter() {}
};

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qscopedpointer.h:81
// [-2] void cleanup(void *)
extern "C" Q_DECL_EXPORT
void C_ZN24QScopedPointerPodDeleter7cleanupEPv(void * pointer) {
  QScopedPointerPodDeleter::cleanup(pointer);
}


extern "C" Q_DECL_EXPORT
void C_ZN24QScopedPointerPodDeleterD2Ev(void *this_) {
  delete (QScopedPointerPodDeleter*)(this_);
}
//  main block end
