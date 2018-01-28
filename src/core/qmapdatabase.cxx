//  header block begin
// /usr/include/qt/QtCore/qmap.h
#include <qmap.h>
#include <QtCore>

// QMapDataBase is pure virtual: false
//  header block end

//  main block begin

class MyQMapDataBase : public QMapDataBase {
public:
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:194
// [-2] void recalcMostLeftNode()
extern "C"
void C_ZN12QMapDataBase18recalcMostLeftNodeEv(void *this_) {
  ((QMapDataBase*)this_)->recalcMostLeftNode();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:201
// [8] QMapDataBase * createData()
extern "C"
void* C_ZN12QMapDataBase10createDataEv() {
  return (void*)QMapDataBase::createData();
}
//  main block end
