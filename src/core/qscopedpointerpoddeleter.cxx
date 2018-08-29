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

struct qt_meta_stringdata_MyQScopedPointerPodDeleter_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQScopedPointerPodDeleter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQScopedPointerPodDeleter_t qt_meta_stringdata_MyQScopedPointerPodDeleter = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQScopedPointerPodDeleter"
  },
  "MyQScopedPointerPodDeleter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQScopedPointerPodDeleter[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
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
