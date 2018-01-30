//  header block begin
// /usr/include/qt/QtCore/qscopedpointer.h
#include <qscopedpointer.h>
#include <QtCore>

// QScopedPointerPodDeleter is pure virtual: false
// QScopedPointerPodDeleter has virtual projected: false
//  header block end

//  main block begin

class MyQScopedPointerPodDeleter : public QScopedPointerPodDeleter {
public:
  virtual ~MyQScopedPointerPodDeleter() {}
};

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qscopedpointer.h:81
// [-2] void cleanup(void *)
extern "C"
void C_ZN24QScopedPointerPodDeleter7cleanupEPv(void * pointer) {
  QScopedPointerPodDeleter::cleanup(pointer);
}
//  main block end
